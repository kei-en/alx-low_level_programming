# C - Dynamic Libraries
## Tasks
- ***A library is not a luxury but one of the necessities of life***
  - *libdynamic.so* - C dynamic library containing all the functions listed below: 
    - `int _putchar(char c);`
    - `iint _islower(int c);`
    - `iint _isalpha(int c);`
    - `iint _abs(int n);`
    - `iint _isupper(int c);`
    - `iint _isdigit(int c);`
    - `iint _strlen(char *s);`
    - `ivoid _puts(char *s);`
    - `ichar *_strcpy(char *dest, char *src);`
    - `iint _atoi(char *s);`
    - `ichar *_strcat(char *dest, char *src);`
    - `ichar *_strncat(char *dest, char *src, int n);`
    - `ichar *_strncpy(char *dest, char *src, int n);`
    - `iint _strcmp(char *s1, char *s2);`
    - `ichar *_memset(char *s, char b, unsigned int n);`
    - `ichar *_memcpy(char *dest, char *src, unsigned int n);`
    - `ichar *_strchr(char *s, char c);`
    - `iunsigned int _strspn(char *s, char *accept);`
    - `ichar *_strpbrk(char *s, char *accept);`
    - `ichar *_strstr(char *haystack, char *needle);`
  - *main.h* - Header file containing the prototypes of all functions included in `libdynnamic.so`
- ***Without libraries what have we? We have no past and no future***
  - *1-create_dynamic_lib.sh* - Bash script that creates a dynamic library called `liball.so` from all the `.c` files in the current directory.