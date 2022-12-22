i was curious what napi object creation perf looked like in bun compared to node after seeing https://github.com/devongovett/bench-napi

```
❯ bun bench.js (Bun v0.3.1 macOS arm64)
[12.65ms] napi - create array with 100,0000 objects
```

```
❯ node bench.js (Node.js v19.2.0 macOS arm64)
napi - create array with 100,0000 objects: 43.367ms
```
