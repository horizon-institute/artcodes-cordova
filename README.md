# Artcodes Scanner Cordova Plugin

A simple plugin to scan Artcodes.


## Using
Install the plugin

    $ cordova plugin add https://github.com/horizon-institute/artcodes-cordova.git --save
    
or

    $ ionic plugin add https://github.com/horizon-institute/artcodes-cordova.git

Note: In iOS 10+ the user is asked for permission to use the camera the first time it is assessed. You can add a custom description for why you're using the camera that appears in the dialog box:

    $ cordova plugin add https://github.com/horizon-institute/artcodes-cordova.git --variable IOS_CAMERA_DESC_STRING="We use the camera to scan Artcodes." --save


To use:

```js
function yourFunction() {
	Artcodes.scan(
		{ name: "Scan screen title", actions: [{ codes: ["1:1:3:3:4"] }, { codes: ["1:1:2:4:4"] }] }, 
		function (code) { alert(code); }
	);
}

// like most plugins, Artcodes.scan(...) can only be called sometime after the deviceready event e.g.
document.addEventListener('deviceready', function () {
	yourFunction();
}, false);
```


## iOS Specific Setup Steps

To get it running in iOS, the ArtcodesScanner and SwiftyJSON frameworks must both to added to the embedded frameworks.
 - Open `platforms/ios/<projectname>.xcodeproj` in Xcode
 - In the tree on the left, select the root node, with the project name
 - In the general tab, scroll down to 'Embedded Binaries'
 - Using the +, add ArtcodesScanner.framework and SwiftyJSON.framework to Embedded Binaries.
 - If you're using Swift 2.X you need to switch the framework files, if you're not using any other Swift 2.X based code just use the default Swift 3 (note: Xcode 8.3+ only supports Swift 3+).
   - *(Swift 2.X only step)* Right click ArtcodesScanner.framework and select 'Show in Finder'.
   - *(Swift 2.X only step)* In Finder delete: 
     - `ArtcodesScanner.framework`
     - `SwiftyJSON.framework`
   - *(Swift 2.X only step)* Rename:
     - `ArtcodesScanner_swift2.framework` &rarr; `ArtcodesScanner.framework`
     - `SwiftyJSON_swift2.framework` &rarr; `SwiftyJSON.framework`. 
 - In Xcode under 'Linked Frameworks and Libraries' remove duplicates and frameworks ending with `_swift2.framework` by selecting and using the - button (you can also delete those ending with `_swift2.framework` on the left hand menu under \<projectname\> &rarr; Frameworks)
 - You may also need to set the Build Setting 'Always Embed Swift Standard Libraries' to 'Yes' 
