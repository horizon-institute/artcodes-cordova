/*
 * Artcodes recognises a different marker scheme that allows the
 * creation of aesthetically pleasing, even beautiful, codes.
 * Copyright (C) 2013-2016  The University of Nottingham
 *
 *     This program is free software: you can redistribute it and/or modify
 *     it under the terms of the GNU Affero General Public License as published
 *     by the Free Software Foundation, either version 3 of the License, or
 *     (at your option) any later version.
 *
 *     This program is distributed in the hope that it will be useful,
 *     but WITHOUT ANY WARRANTY; without even the implied warranty of
 *     MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *     GNU Affero General Public License for more details.
 *
 *     You should have received a copy of the GNU Affero General Public License
 *     along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

package uk.ac.horizon.artcodes;

import android.Manifest;
import android.content.Context;
import android.content.Intent;
import android.content.pm.PackageManager;
import android.util.Log;

import org.apache.cordova.CallbackContext;
import org.apache.cordova.CordovaPlugin;
import org.apache.cordova.PluginResult;
import org.json.JSONArray;
import org.json.JSONException;
import org.json.JSONObject;

import uk.ac.horizon.artcodes.scanner.ScannerActivity;

public class Artcodes extends CordovaPlugin
{
	private static final int SCAN_REQUEST = 826;
	private static final int PERMISSION_REQUEST = 828;
	private static final String[] permissions = {Manifest.permission.CAMERA};
	private CallbackContext callbackContext;
	private JSONObject experience;

	private void scanArtcode()
	{
		cordova.getActivity().runOnUiThread(new Runnable()
		{
			@Override
			public void run()
			{
				final Context context = cordova.getActivity().getApplicationContext();
				final Intent intent = new Intent(context, ScannerActivity.class);
				intent.putExtra("experience", experience.toString());
				cordova.setActivityResultCallback(Artcodes.this);
				cordova.getActivity().startActivityForResult(intent, SCAN_REQUEST);
			}
		});
	}

	@Override
	public boolean execute(String action, JSONArray args, CallbackContext callbackContext) throws JSONException
	{
		if (action.equals("scanArtcode"))
		{
			if (args.length() != 1)
			{
				callbackContext.error("Wrong number of arguments");
			}
			this.callbackContext = callbackContext;
			this.experience = args.getJSONObject(0);
			if (cordova.hasPermission(Manifest.permission.CAMERA))
			{
				scanArtcode();
			}
			else
			{
				cordova.requestPermissions(this, PERMISSION_REQUEST, permissions);
			}

			return true;
		}
		return false;
	}

	public void onRequestPermissionResult(int requestCode, String[] permissions, int[] grantResults) throws JSONException
	{
		for (int grantResult : grantResults)
		{
			if (grantResult == PackageManager.PERMISSION_DENIED)
			{
				callbackContext.sendPluginResult(new PluginResult(PluginResult.Status.ERROR, "Permission Error"));
				return;
			}
		}
		scanArtcode();
	}

	public void onActivityResult(int requestCode, int resultCode, Intent intent)
	{
		Log.i("Artcodes", "Scan result " + requestCode + " = " + resultCode);
		switch (requestCode)
		{
			case SCAN_REQUEST:
				if (resultCode == android.app.Activity.RESULT_OK)
				{
					String result = intent.getStringExtra("marker");
					Log.i("Artcodes", "Marker = " + result);
					if (result != null)
					{
						callbackContext.success(result);
					}
				}
				callbackContext.error("Scan Failed");
				break;
			default:
				break;
		}
	}
}
