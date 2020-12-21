<html>
<body>
<h1>Codam Project: Libft</h1>
<b>A recreation of some functions in the stdlib C library along with extra functions created by NHariman for their time at Codam Coding College.</b>
<p></p>
<p>This project is a recreation of the stdlib C library along with some extra functions for string and array manipulation, linked list usage and fd reading and writing.</p>
<p></p>
<h3>Overview of the functions in this library</h3>
<div align="center"><h4>Char content checkers</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>int ft_isspecial(int c)</td>
    <td>returns 1 if c is a special character such as !@#$%^ etc.</td>
  </tr>
  <tr>
    <td>int ft_isalnum(int c)</td>
    <td>returns 1 if c is a number or a character</td>
  </tr>
  <tr>
    <td>int ft_isalpha(int c)</td>
    <td>returns a 1 if c is a letter</td>  
  </tr>
  <tr>
    <td>int ft_isascii(int c)</td>
    <td>returns a 1 if c is an ASCII value</td>
  </tr>
  <tr>
    <td>int ft_isdigit(int c)</td>
    <td>returns a 1 if c is a number</td>
  </tr>
  <tr>
    <td>int ft_isprint(int c)</td>
    <td>returns a 1 if c is a printable ASCII value</td>
  </tr>
  <tr>
    <td>int ft_tolower(int c)</td>
    <td>converts an uppercase letter to a lowercase letter</td>
  </tr>
  <tr>
    <td>int ft_istoupper(int c)</td>
    <td>converts a lowercase letter to an uppercase letter</td>
  </tr>
</table>

<div align="center"><h4>Malloc functions</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>void ft_bzero(void *s, size_t n)</td>
    <td>Fills a given void address of length n with 0s</td>
  </tr>
  <tr>
    <td>void *ft_calloc(size_t count, size_t size)</td>
    <td>Creates a space in the memory of count length and size size</td>
  </tr>
</table>

<div align="center"><h4>fd functions</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>void ft_putchar_fd(char c, int fd)</td>
    <td>Writes a character c to the fd specified in fd</td>
  </tr>
  <tr>
    <td>void ft_putstr_fd(char *s, int fd)</td>
    <td>Writes a char string to the fd specified in fd</td>
  </tr>
  <tr>
    <td>void ft_putendl_fd(char *s, int fd)</td>
    <td>writes a char string to the fd specified in fd,<br>with a newline at the end.</td>
  </tr>
  <tr>
    <td>void ft_putnbr_fd(int n, int fd)</td>
    <td>prints an int number onto the file descriptor specified in fd</td>
  </tr>
  <tr>
    <td>int get_next_line(int fd, char **line)</td>
    <td>reads from file descriptor in fd and put its contents until a newline (\n)</td>
  </tr>
</table>

<div align="center"><h4>Memory altering functions, stdlib mirrors</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>void *ft_memset(void *b, int c, size_t len)</td>
    <td>function fills the first n bytes of the memory area
       pointed to by s with the constant byte c</td>
  </tr>
  <tr>
    <td>void *ft_memcpy(void *dst, const void *src, size_t n)</td>
    <td>function copies n bytes from memory area src to memory
       area dest.  The memory areas must not overlap.</td>
  </tr>
  <tr>
    <td>void *ft_memccpy(void *dst, const void *src, int c, size_t n)</td>
    <td>function copies no more than n bytes from memory area src to memory area dest, stopping when the character c is found.<br>If the memory areas overlap, the results are undefined.</td>
  </tr>
  <tr>
    <td>void *ft_memmove(void *dst, const void *src, size_t len)</td>
    <td>function copies n bytes from memory area src to memory area dest.  
    <br>The memory areas may overlap: copying takes place as though the bytes in src are 
    first copied into a temporary array that does not overlap src or dest, and the bytes are then copied from the temporary array to dest.</td>
  </tr>
  <tr>
    <td>void *ft_memchr(const void *s, int c, size_t n)</td>
    <td>function scans the initial n bytes of the memory area<br>
       pointed to by s for the first instance of c.  Both c and the bytes of
       the memory area pointed to by s are interpreted as unsigned char.</td>
  </tr>
   <tr>
    <td>int ft_memcmp(const void *s1, const void *s2, size_t n)</td>
    <td>function compares the first n bytes (each interpreted as<br>
       unsigned char) of the memory areas s1 and s2.</td>
  </tr>
</table>

<div align="center"><h4>String functions (part 1, compare/find/length)</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>long ft_iswhitespaces(const char *str)</td>
    <td>Skips whitespaces such as spaces, tabs, etc. and reports back the amount of space it skipped.</td>
  </tr>
  <tr>
    <td>int ft_strncmp(const char *s1, const char *s2, size_t n)</td>
    <td>function compares the two strings s1 and s2, except it compares only the first (at most) n bytes of s1 and s2.</td>
  </tr>
  <tr>
    <td>int	ft_strcasecmp(char *s1, char *s2)</td>
    <td>function compares the two strings s1 and s2, regardless of case.</td>
  </tr>
  <tr>
    <td>int ft_strcmp(const char *s1, const char *s2)</td>
    <td>function compares the two strings s1 and s2.</td>
  </tr>
  <tr>
    <td>char *ft_strchr(const char *s, int c)</td>
    <td>function returns a pointer to the first occurrence of the character c in the string s.</td>
  </tr>
  <tr>
    <td>char *ft_strrchr(const char *s, int c)</td>
    <td>function returns a pointer to the last occurrence of the character c in the string s.</td>
  </tr>
  <tr>
    <td>char *ft_strnstr(const char *haystack, const char *needle, size_t len)</td>
    <td>function locates the	first occurrence of the	null-ternated string little in the string big, where not more than len characters
     are searched. Characters that appear after a `\0' character are not searched.</td>
  </tr>
  <tr>
    <td>size_t ft_strlen(const char *s)</td>
    <td>Counts length of string</td>
  </tr>
</table>

<div align="center"><h4>String functions (part 2, manipulators)</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>char *ft_strdup(const char *s1)</td>
    <td>function allocates sufficient	memory for a copy of the string str, does the copy,	and returns a pointer to it.  The pointer may subsequently be used as an	argument to the	function free(3)</td>
  </tr>
  <tr>
    <td>size_t ft_strlcpy(char *dst, const char *src, size_t dstsize)</td>
    <td>copies up to dstsize - 1	characters from	the string src to dst, NUL-terminating the result	if dstsize is not 0.</td>
  </tr>
  <tr>
    <td>size_t ft_strlcat(char *dst, const char *src, size_t dstsize)</td>
    <td>appends string src to the end of	dst.  It will append at	most dstsize - strlen(dst) - 1 characters. It will then NUL-terminate,	unless dstsize is	0 or the original dst string was longer	than dstsize (in practice this should not happen as it means that either dstsize is incorrect or that dst is not a proper string).</td>
  </tr>
  <tr>
    <td>char *ft_substr(char const *s, unsigned int start, size_t len)</td>
    <td>Allocates (with malloc(3)) and returns a substring from the string ’s’. The substring begins at index ’start’ and is of maximum size ’len’.</td>
  </tr>
  <tr>
    <td>char **ft_split(char const *s, char c)</td>
    <td>Allocates and returns an array of strings obtained by splitting ’s’ using the character ’c’ as a delimiter.  The array must be ended by a NULL pointer.</td>
  </tr>
  <tr>
    <td>char *ft_strmapi(char const *s, char (*f)(unsigned int, char))</td>
    <td>pplies the function ’f’ to each character of the string ’s’ to create a new string resulting from successive applications of ’f’.</td>
  </tr>
  <tr>
    <td>char *ft_strtrim(char const *s1, char const *set)</td>
    <td>Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string.</td>
  </tr>
  <tr>
    <td>char *ft_strtrimfree(char *s1, char const *set)</td>
    <td>Allocates and returns a copy of ’s1’ with the characters specified in ’set’ removed from the beginning and the end of the string. The s1 string is also freed.</td>
  </tr>
</table>

<div align="center"><h4>String functions (part 3, joiners)</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>char *ft_strjoin(char const *s1, char const *s2)</td>
    <td>Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’.</td>
  </tr>
  <tr>
    <td>char *gnl_strjoin(char *s1, char *s2)</td>
    <td>Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. And frees s1.</td>
  </tr>
  <tr>
    <td>char *ft_strjointwo(char *s1, char *s2)</td>
    <td>Allocates and returns a new string, which is the result of the concatenation of ’s1’ and ’s2’. And frees s2.</td>
  </tr>
   <tr>
    <td>char *ft_charjoin(char *str, char c)</td>
    <td>Allocates and returns a new string, which is the result of the concatenation of ’s1’ and char ’c’.</td>
  </tr>
  <tr>
    <td>char *ft_make_single_char_str(char c)</td>
    <td>Allocates and returns a new string, which consists of a single character c.</td>
  </tr>
</table>

<div align="center"><h4>Array functions</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>int ft_arrlen(char **arr)</td>
    <td>Find the length of an array that is terminated with a NULL.</td>
  </tr>
  <tr>
    <td>char **ft_empty_array(char *cmd)</td>
    <td>Create an array with a single string in it.</td>
  </tr>
  <tr>
    <td>char **ft_arrdup(char **arr)</td>
    <td>Copies an array that is terminated with a NULL.</td>
  </tr>
  <tr>
    <td>char **ft_add_arr_front(char **arr, char *input)</td>
    <td>Adds a new entry to the front of an existing array, terminated with NULL.</td>
  </tr>
   <tr>
    <td>char **ft_add_arr_back(char **arr, char *input)</td>
    <td>Adds a new entry to the back of an existing array, terminated with NULL.</td>
  </tr>
  <tr>
    <td>void ft_free_array(char **arr, int len)</td>
    <td>Frees an allocated array of length len and NULL terminated.</td>
  </tr>
   <tr>
    <td>char **ft_empty_array(char *cmd)</td>
    <td>Create an array with a single string in it, terminated with NULL</td>
  </tr>
  <tr>
    <td>char *ft_arr_to_str_nl(char **arr)</td>
    <td>Takes a NULL terminated char array and creates a string out of each entry, separated by newlines.</td>
  </tr>
  <tr>
    <td>char *ft_arr_to_str_sp(char **arr)</td>
    <td>Takes a NULL terminated char array and creates a string out of each entry, separated by spaces.</td>
  </tr>
  <tr>
    <td>char *ft_arr_to_str(char **arr)</td>
    <td>Takes a NULL terminated char array and creates a string out of each entry, separated by nothing.</td>
  </tr>
</table>

<div align="center"><h4>Linked list functions</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>t_list *ft_lstnew(void *content)</td>
    <td>Allocates (with malloc(3)) and returns a new element.  The variable ’content’ is initialized with the value of the parameter ’content’. The variable ’next’ is initialized to NULL.</td>
  </tr>
  <tr>
    <td>void ft_lstadd_front(t_list **lst, t_list *new)</td>
    <td>Adds the element ’new’ at the beginning of the list.</td>
  </tr>
  <tr>
    <td>int ft_lstsize(t_list *lst)</td>
    <td>Counts the number of elements in a list</td>
  </tr>
  <tr>
    <td>t_list *ft_lstlast(t_list *lst)</td>
    <td>Returns the last element of the list.</td>
  </tr>
  <tr>
    <td>void ft_lstadd_back(t_list **lst, t_list *new)</td>
    <td>Adds the element ’new’ at the end of the list.</td>
  </tr>
  <tr>
    <td>void ft_lstdelone(t_list *lst, void (*del)(void *))</td>
    <td>Takes as a parameter an element and frees the memory of the element’s content using the function ’del’ given as a parameter and free the element. The memory of ’next’ must not be freed.</td>
  </tr>
  <tr>
    <td>void ft_lstclear(t_list **lst, void (*del)(void *))</td>
    <td>Deletes and frees the given element and every successor of that element, using the function ’del’ and free(3). Finally, the pointer to the list must be set to NULL.</td>
  </tr>
  <tr>
    <td>void ft_lstiter(t_list *lst, void (*f)(void *))</td>
    <td>Iterates the list ’lst’ and applies the function ’f’ to the content of each element.</td>
  </tr>
  <tr>
    <td>t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))</td>
    <td>Iterates the list ’lst’ and applies the function ’f’ to the content of each element.  Creates a new list resulting of the successive applications of the function ’f’.  The ’del’ function is used to delete the content of an element if needed.</td>
  </tr>
</table>

<div align="center"><h4>Misc functions</h4></div>
<table style="width:100%">
  <tr>
    <th>Function Name</th>
    <th>Description</th>
  </tr>
  <tr>
    <td>ft_atoi(const char *str)</td>
    <td>Converts an array of numbers into a valid integer.</td>
  </tr>
  <tr>
    <td>ft_itoa(int n)</td>
    <td>Converts an integer into an array of numbers</td>
  </tr>
</table>

</body>
</html>
