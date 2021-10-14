# 0x00. C - Hello, World

## Tasks

0. Preprocessor

`gcc -E $CFILE -o c`

Runs a C file through the preprocessor and save the result into another file.

1. Compiler

`gcc -c $CFILE`

Script that compiles a C file but does not link.

2. Assembler

`gcc -S $CFILE`

Generates the assembly code of a C code and save it in an output file.

3. Name

`gcc $CFILE -o cisfun`

Compiles a C file and creates an executable named cisfun.

4. Hello, puts

`puts("\"Programming is like building a multilingual puzzle");`

Prints exactly "Programming is like building a multilingual puzzle, followed by a new line.

5. Hello, printf

`printf("with proper grammar, but the outcome is a piece of art,\n");`

Prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line.

6. Size is not grandeur, and territory does not make a nation

`printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));`

Prints the size of various types on the computer it is compiled and run on.

8. Intel

`gcc -S -masm=intel $CFILE`

Generates the assembly code (Intel syntax) of a C code and save it in an output file.

