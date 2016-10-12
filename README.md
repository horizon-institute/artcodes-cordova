# Cordova Hello World Plugin

A simple plugin  from scanning Artcodes.


## Using
Install the plugin

    $ ionic plugin add https://github.com/horizon-institute/artcodes-cordova.git


To use

```js
	Artcodes.scan({name: "Test Experience", actions:[{codes:["1:1:3:3:4"]}]}, function(marker) {
		alert(marker);
	});
```
