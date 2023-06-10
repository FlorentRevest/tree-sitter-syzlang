This is an experimental tree-sitter grammar for syzkaller's syscalls
definitions.

As of writing, it successfuly builds an AST for all the definitions in
syzkaller but this comes with several big shortcomings:

- this has *zero* tests. like for every code without tests, you can assume it's
  broken in both subtle and obvious ways (contributions are welcome!)
- parts of this grammar might be considered dubious. In some parts, it is too
  generic (e.g: yielding 'identifier' tokens as a catch-all) and in other parts
  too narrow (e.g: len[a:b] yields 'constant' tokens for no good reasons)
- token names have been chosen fairly intuitively and may not match the
  nomenclature used within syzkaller. if you depend on these names and we align
  them with upstream someday, your codebase will probably break

In other words, you should probably not use it unless you really know what you
are doing.

Test with:

    npm install
    export PATH=$PATH:./node_modules/.bin
    tree-sitter generate
    tree-sitter parse ~/syzkaller/sys/*/*.txt

Everything happens in grammar.js, the rest is auto-generated.
