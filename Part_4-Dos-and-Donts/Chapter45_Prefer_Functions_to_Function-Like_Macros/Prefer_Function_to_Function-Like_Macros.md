# Prefer Function to Function-Like Macros

Prefer writing and using real functions to function-like macros. While it might be tempting to write and use function-like macros instead of functions, this might not be a good choice for the following reasons:
        - Macros can cause side effects.
        - No type checking is performed.
        - Macros are preprocessed, not compiled.
        - They do not check compiler errors and are harder to debug.
