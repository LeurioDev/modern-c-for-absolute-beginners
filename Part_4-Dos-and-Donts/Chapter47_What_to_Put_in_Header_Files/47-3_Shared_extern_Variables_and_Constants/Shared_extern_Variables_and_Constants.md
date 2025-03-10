## Shared extern Variables and Constants

With shared global variables or constants, things are more involved than just putting the variable definition inside a shared file. We need to put the shared variables declarations inside the header file and mark them as extern. Then we need to define them only once in some source file.
    The extern specifier says the name has external linkage and is accessible across multiple source files/translation units. Global names, including functions, are extern by default, and we do not need to use extern on global functions explicitly. The extern also means the object will have a static storage duration.
    While the use of global variables is debatable, this approach allows us to have a centralized place for all our shared constants and variables.
