## Linkage

When we compile our source code, the compiler stitches a header and source file's content to create a single source file called a _translation unit_. The translation unit is then used to produce an object file. If we compile multiple source files, we get multiple object files. The linker then assembles these object files to produce an _executable file_.
    A linkage can be seen as a name's property that determines the name's accessibility across translation units. By _name_, we mean _variables_ and functions. If a name is visible only to/inside a current translation unit, we say it has _internal linkage_. If a name is visible to _all_ translation units, we say it has _external linkage_.
