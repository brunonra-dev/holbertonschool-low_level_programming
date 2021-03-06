# 0x00. C - Hello, World

## Tasks

0. Preprocessor

```bash
gcc -E $CFILE -o c
```

Runs a C file through the preprocessor and save the result into another file.

1. Compiler

Script that compiles a C file but does not link.

```bash
gcc -c $CFILE
```

2. Assembler

Generates the assembly code of a C code and save it in an output file.

```bash
gcc -S $CFILE
```

3. Name

Compiles a C file and creates an executable named cisfun.

```bash
gcc $CFILE -o cisfun
```

4. Hello, puts

Prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.

```c
puts("\"Programming is like building a multilingual puzzle");
```

5. Hello, printf

Prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.

```c
printf("with proper grammar, but the outcome is a piece of art,\n");
```

6. Size is not grandeur, and territory does not make a nation

Prints the size of various types on the computer it is compiled and run on.

```c
printf("Size of a char: %d byte(s)\n", sizeof(char));
printf("Size of an int: %d byte(s)\n", sizeof(int));
printf("Size of a long int: %d byte(s)\n", sizeof(long int));
printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
printf("Size of a float: %d byte(s)\n", sizeof(float));
```

8. Intel

Generates the assembly code (Intel syntax) of a C code and save it in an output file.

```bash
gcc -S -masm=intel $CFILE
```


