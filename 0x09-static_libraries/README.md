Basic usage of ar, ranlib, nm

gcc -c *.c > Converts .c files to .o (object) files

ar rcs libmy.a *.o > Creates the static library "libmy.a"

ar -t libmy.a > Lists all files in libmy.a

ranlib libmy.a > Converts to random library

gcc -std=gnu89 main.c -L. -lmy -o (new_file_name) > Compile for testing use
