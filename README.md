# 42-libft-functions
Re-writing highly useful standard functions, C language.
How to use?
`git clone https://github.com/kasavine/42-libft-functions.git`

`cd 42-libft-functions`

`make all`(libft.a library with Part 1 and Part 2 functions)

`make bonus` (libft.a library with additional bonus functions)

`make fclean` ()

| Part 1  ||
|---|---|
|ft_memSET|The memset() function writes len bytes of value c (converted to an unsigned char) to the string b. Returns its first argument|
|ft_bzero|The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.|
|ft_memCPY|The memcpy() function copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined. Returns the original value of dst|
|ft_memCCPY|The memccpy() function copies bytes from string src to string dst. If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned. The source and destination strings should not overlap, as the behavior is undefined.|
|ft_memMOVE|The memmove() function copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner. Returns the original value of dst|
|ft_memCHR|The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s. Returns a pointer to the byte located, or NULL if no such byte exists within n bytes|
|ft_memCMP|The memcmp() function compares byte string s1 against byte string s2. Both strings are assumed to be n bytes long. The memcmp() function returns zero if the two strings are identical, otherwise returns the difference between the first two differing bytes (treated as unsigned char values, so that '\200' is greater than '\0', for example).  Zero-length strings are always identical.|
|ft_calloc|The calloc() function contiguously allocates enough space for count objects that are size bytes of memory each and returns a pointer to the allocated memory.  The allocated memory is filled with bytes of value zero. If successful, calloc() function returns a pointer to allocated memory.  If there is an error - returns a NULL pointer and set errno to ENOMEM.|
|ft_strLEN|The strlen() function computes the length of the string s. The strlen() function returns the number of characters that precede the terminating NUL character.|
|ft_strLCPY|strlcpy() copies up to dstsize - 1 characters from the string src to dst, NUL-terminating the result if dstsize is not 0. The strlcpy() function return the total length of the string it tried to create. That means the length of src.|
|ft_strLCAT|strlcat() appends string src to the end of dst.  It will append at most dstsize - strlen(dst) - 1 characters. The strlcat() function returns the total length of the string it tried to create. That means the initial length of dst plus the length of src.|
|ft_strRCHR|The strrchr() function is identical to strchr(), except it locates the last occurrence of c.  The function strrchr() returns a pointer to the located character, or NULL if the character does not appear in the string.| 
|ft_strCHR|The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by s.  The terminating null character is considered to be part of the string; therefore if c is `\0`, the functions locate the terminating `\0`. The function strchr() returns a pointer to the located character, or NULL if the character does not appear in the string.|
|ft_strNSTR|The strnstr() function locates the first occurrence of the null-terminated string needle in the string haystack, where not more than len characters are searched.  Characters that appear after a `\0` character are not searched.  If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is returned; otherwise a pointer to the first character of the first occurrence of needle is returned.|
|ft_strNCMP|The strncmp() function compares not more than n characters.  Because strncmp() is designed for comparing strings rather than binary data, characters that appear after a `\0` character are not compared. return an integer greater than, equal to, or less than 0, according as the string s1 is greater than, equal to, or less than the string s2.  The comparison is done using unsigned characters, so that `\200` is greater than `\0`|
|ft_strDUP|The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns a pointer to it. The pointer may subsequently be used as an argument to the function free(3). If insufficient memory is available, NULL is returned and errno is set to ENOMEM.|
|ft_atoi|The atoi() function converts the initial portion of the string pointed to by str to int representation. The function atoi() need not affect the value of errno on an error.|
|ft_isalpha|The isalpha() function tests for any character for which isupper(3) or islower(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF. In the ASCII character set, this includes the following characters (preceded by their numeric values, in octal): 101 - 132, 141 - 172. The isalpha() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_isdigit|The isdigit() function tests for a decimal digit character. Regardless of locale, this includes the following characters only: `0, 1, 2, 3, 4, 5, 6, 7, 8, 9`. The value of the argument must be representable as an unsigned char or the value of EOF. Function returns zero if the character tests false and return non-zero if the character tests true.|
|ft_isalnum|The isalnum() function tests for any character for which isalpha(3) or isdigit(3) is true.  The value of the argument must be representable as an unsigned char or the value of EOF. The isalnum() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_isascii|The isascii() function tests for an ASCII character, which is any character between 0 and octal 0177 inclusive.|
|ft_isprint|The isprint() function tests for any printing character, including space. The value of the argument must be representable as an unsigned char or the value of EOF. The isprint() function returns zero if the character tests false and returns non-zero if the character tests true.|
|ft_toupper|The toupper() function converts a lower-case letter to the corresponding upper-case letter.  The argument must be representable as an unsigned char or the value of EOF. If the argument is a lower-case letter, the toupper() function returns the corresponding upper-case letter if there is one; otherwise, the argument is returned unchanged.|
|ft_tolower|The tolower() function converts an upper-case letter to the corresponding lower-case letter.  The argument must be representable as an unsigned char or the value of EOF. If the argument is an upper-case letter, the tolower() function returns the corresponding lower-case letter if there is one; otherwise, the argument is returned unchanged.|


| Part 2 |||
|---|---|---|
| ft_strMAPi |||
| ft_SUBstr |||
| ft_strJOIN |||
| ft_strTRIM |||
| ft_strSPLIT |||
| ft_itoa |||
| ft_putCHAR_fd |||
| ft_putSTR_fd |||
| ft_putENDL_fd |||
| ft_putNBR_fd |||
| ft_strcat	|||
| ft_strcpy |||
| ft_strncpy |||


|  Bonus |||
|---|---|---|
| ft_lstNEW |||
| ft_lstADD_front |||
| ft_lstSIZE |||
| ft_lstLAST |||
| ft_lstADD_back |||
| ft_lstDELone |||
| ft_lstCLEAR |||
| ft_lstITER |||
| ft_lstMAP |||
