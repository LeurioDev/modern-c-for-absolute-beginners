## Other Header Files

Our header file can also include other header files if needed. For example, our user-defined header file can include both the standard-library and user-defined header files.
    The myheaderfile.h file that includes other headers can look like:
    
-#ifndef MYHEADERFILE_H
-#define MYHEADERFILE_H

-#include <stdio.h> // include the standard library header
-#include "userdefined.h" //include the user-defined header

-#endif
