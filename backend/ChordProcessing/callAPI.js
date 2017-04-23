var nbind = require('nbind');
var lib = nbind.init().lib;


//** Testing... */
var result = lib.ChordBuilder.test(5);
console.log(result);
