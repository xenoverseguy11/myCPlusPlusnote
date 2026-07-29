### STEP 1: THE PREPROCESSOR:
the preprocessor is the very first step of transforming code to a program, the preprocessor is what processes the include statement and macros (for example: #include <iostream>)
the preprocessor's job is to replace the include statement with the contents/code of the included header

## EXAMPLE:
## BEFORE:
#include <iostream>

int main()
{
 std::cout << "Hello Github!";
}

## AFTER:

// THE CONTENTS OF IOSTREAM HERE

int main()
{
 std::cout << "Hello Github!";
}

## MACRO DEFINES:
-is a rule that defines how a input text is converted to a replacement output text "#define MONEY 500"
-when the preprocessor begins, it replaces the text with the original value "int wallet = MONEY;" --> "int wallet = 500;"
-therefore the compiler only sees "int wallet = 500";
-macros are preprocessor directives like #include

### STEP 2: THE COMPILER:
the compiler takes the pre-processed code and converts it to assembly code using a assembler which then converts it to machine/object code (.o)/(.obj)

### STEP 3: THE LINKER:
the linker groups all of your object code to convert it to an executable

### STEP 4: THE EXECUTABLE
the final program that includes the instructions


