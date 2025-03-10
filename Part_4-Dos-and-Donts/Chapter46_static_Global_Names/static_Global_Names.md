## static Global Names ##

When we define a variable or a function inside the file/global scope, they have external linkage by default. They can be referred to from other .c files/translation units. The static keyword in front of variables and functions in a global scope marks them visible only to the current source file.translation unit, the unit in which they are declared/defined. We say the static specifier makes them have internal linkage. so, global we do not want to share with other .c files should be marked as static.
