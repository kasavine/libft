# 42-libft-functions
Re-writing highly useful standard functions, C language.
How to use?
- git clone https://github.com/kasavine/42-libft-functions.git
- cd 42-libft-functions
- make all (libft.a library with Part 1 and Part 2 functions)
- make bonus (libft.a library with additional bonus functions)
- make fclean ()

| Part 1  ||returns|
|---|---|---|
|ft_memSET|The memset() function writes len bytes of value c (converted to an unsigned char) to the string b|its first argument|

|ft_bzero|The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.||

|ft_memCPY|The memcpy() function copies n bytes from memory area src to memory area dst. If dst and src overlap, behavior is undefined.|the original value of dst|

|ft_memCCPY|The memccpy() function copies bytes from string src to string dst. If the character c (as converted to an unsigned char) occurs in the string src, the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  Otherwise, n bytes are copied, and a NULL pointer is returned. The source and destination strings should not overlap, as the behavior is undefined.||

|ft_memMOVE|The memmove() function copies len bytes from string src to string dst. The two strings may overlap; the copy is always done in a non-destructive manner.|the original value of dst|

|ft_memCHR|The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.|a pointer to the byte located, or NULL if
     no such byte exists within n bytes|

| ft_memCMP |||
| ft_calloc |||
| ft_strLEN |||
| ft_strLCPY |||
| ft_strLCAT |||
| ft_strRCHR ||| 
| ft_strCHR |||
| ft_strNSTR |||
| ft_strNCMP |||
| ft_strDUP |||
| ft_atoi |||
| ft_isalpha |||
| ft_isdigit |||
| ft_isalnum |||
| ft_isascii |||
| ft_isprint |||
| ft_toupper |||
| ft_tolower |||


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
