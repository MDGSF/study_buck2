# study buck2

```sh
cd study_buck2/third-party
reindeer buckify
# 或者
cd study_buck2
reindeer --third-party-dir third-party buckify
```

```sh
mkdir study_buck2
cd study_buck2
buck2 init --git

buck2 build //...
buck2 run root//cpp_demos/hello_world:hello
buck2 run root//cpp_demos/time_monotonic
buck2 run root//rust_demos/hello_world/src/bin:hello_world
buck2 run root//rust_demos/study_crates/semver_demos/semver01/src:semver01
```

## resources

- <https://github.com/facebook/buck2>
- <https://buck2.build/>
- <https://github.com/facebook/buck2/tree/main/examples>
- <https://steveklabnik.com/writing/updating-buck>
