# study buck2

```sh
mkdir study_buck2
cd study_buck2
buck2 init --git

buck2 build //...
buck2 run root//cpp_demos/hello_world:hello
buck2 run root//cpp_demos/time_monotonic
buck2 run root//rust_demos/hello_world/src/bin:hello_world
```
