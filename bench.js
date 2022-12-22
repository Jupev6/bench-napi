let binding = require("./build/Release/bench.node");

console.time("napi - create array with 100,0000 objects");
binding.test();
console.timeEnd("napi - create array with 100,0000 objects");
