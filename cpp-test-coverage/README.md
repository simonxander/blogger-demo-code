## Build

```
cmake .
make
```

## Demo

```
./test-all
lcov -c -d CMakeFiles -o cov.info
genhtml cov.info -o report
```

Open `report/index.html`
