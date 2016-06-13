window.scanArtcode = function(experience, callback)
{
    cordova.exec(callback, function(err)
	{
        callback('Error: ' + err);
    }, "Artcodes", "scanArtcode", [experience]);
};
