# nnpcheck example

This is a (very) simple example for triggering the OCaml 4.10.0
no-naked-pointers check.

```sh
$ opam switch create nnpcheck ocaml-variants.4.10.0+nnpcheck
$ opam install dune
$ dune exec naked
```

should give

```
The answer is 42
Out-of-heap pointer at 0x55b9ce0fa2f0 of value 0x55b9ce29eb10 has non-black head (tag=33)
Out-of-heap pointer at 0x55b9ce0fa2f0 of value 0x55b9ce29eb10 has non-black head (tag=33)
Out-of-heap pointer at 0x55b9ce0fa2f0 of value 0x55b9ce29eb10 has non-black head (tag=33)
```
