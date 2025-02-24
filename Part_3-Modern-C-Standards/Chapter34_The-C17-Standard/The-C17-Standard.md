# The C17 Standard

    At the time of writing, the  C17 standard, officially named ISO/IEC 9899:2018, is th
e last published C standard. It replaces the C11 standard, does not intrpduce new features, and
fixes defects reported for C11. The ____STDC_VERSION_ macro for this standard has the
 value of 201710L. To compile for a C17 standard, we include the -std=c17 flag. Example:

        gcc -Wall source.c -std=c17 -pedantic

    The C17 standard is sometimes also referred to as the C18 standard. The C17 standard will be replaced by the upcoming standard, informally referred to as the C2X standard.
