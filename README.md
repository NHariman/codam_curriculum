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
