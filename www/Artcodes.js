module.exports = {
	scan: function (experience, callback) {
		console.log("scan artcodes javascript");
		cordova.exec(callback, function (err) {
			callback('Error: ' + err);
		}, "Artcodes", "scanArtcode", [experience]);
	}
};