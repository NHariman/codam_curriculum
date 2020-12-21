/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: nhariman <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/10/29 16:45:38 by nhariman      #+#    #+#                 */
/*   Updated: 2020/12/21 19:21:47 by nhariman      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

/*
** get next line struct
*/

typedef struct	s_gnl
{
	int				bytes_read;
	int				fd;
	char			*line_read;
	int				newline;
}				t_gnl;

/*
** linked list
*/

typedef struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
** flags for ft_printf and ft_printf_err, print to stdout and stderr
*/

typedef struct		s_flag
{
	size_t			dash;
	size_t			zero;
	size_t			dot;
	int				pad;
	int				pre;
}					t_flag;

/*
** flags for ft_dprintf, print to file descriptor
*/

typedef struct		s_dflag
{
	size_t			dash;
	size_t			zero;
	size_t			dot;
	int				pad;
	int				pre;
	int				fd;
}					t_dflag;

/*
** char content checkers
*/

int					ft_isspecial(int c);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isascii(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_tolower(int c);
int					ft_toupper(int c);

/*
** malloc functions
*/

void				ft_bzero(void *s, size_t n);
void				*ft_calloc(size_t count, size_t size);

/*
** fd functions
*/

void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
int					get_next_line(int fd, char **line);

/*
** memory altering functions
*/

void				*ft_memset(void *b, int c, size_t len);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);

/*
** array to int and int to array
*/

int					ft_atoi(const char *str);
char				*ft_itoa(int n);

long				ft_iswhitespaces(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_strcasecmp(char *s1, char *s2);
int					ft_strcmp(const char *s1, const char *s2);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
size_t				ft_strlen(const char *s);

/*
** string manipulator functions
*/

char				*ft_strlower(char *str);
char				*ft_strdup(const char *s1);
size_t				ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t				ft_strlcat(char *dst, const char *src, size_t dstsize);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				**ft_split(char const *s, char c);
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_strtrimfree(char *s1, char const *set);

/*
** string join functions
*/

char				*ft_strjoin(char const *s1, char const *s2);
char				*gnl_strjoin(char *s1, char *s2);
char				*ft_strjointwo(char *s1, char *s2);
char				*ft_charjoin(char *str, char c);
char				*ft_make_single_char_str(char c);


/*
** array changing functions
*/

int					ft_arrlen(char **arr);
char				**ft_arrdup(char **arr);
char				**ft_add_arr_front(char **arr, char *input);
char				**ft_add_arr_back(char **arr, char *input);
void				ft_free_array(char **arr, int len);
char				**ft_empty_array(char *cmd);
char				*ft_arr_to_str_nl(char **arr);
char				*ft_arr_to_str_sp(char **arr);
char				*ft_arr_to_str(char **arr);

/*
** BONUSES, found in linked_list
*/

t_list				*ft_lstnew(void *content);
void				ft_lstadd_front(t_list **alst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));

/*
** the first layer, checks for flags, width, precision (-0.)
** ends with a format check (ft_format) and sends them there
*/

void				ft_flags(const char *format, int *i, t_flag *flags);
void				ft_width(const char *format, int *i,
								va_list argp, t_flag *flags);
void				ft_precision(const char *format, int *i,
							va_list argp, t_flag *flag);
void				ft_dflags(const char *format, int *i, t_dflag *flags);
void				ft_dwidth(const char *format, int *i,
								va_list argp, t_dflag *flags);
void				ft_dprecision(const char *format, int *i,
							va_list argp, t_dflag *flag);

/*
** second layer, comes from ft_format, which checks for pdiuxX%
** the following functions are called upon depending on which
** conversion is used.
** these functions call the padding and precision functions if
** needed and then call the function that is actually responsible
** for printing the values correctly
*/

void				ft_hex(const char c, unsigned long n, int *count,
								t_flag *flags);
void				ft_ptr(unsigned long n, int *count, t_flag *flags);
void				ft_signed(long n, int *count, t_flag *flags);
void				ft_unsigned(unsigned long n, int *count, t_flag *flags);
void				ft_dhex(const char c, unsigned long n, int *count,
								t_dflag *flags);
void				ft_dptr(unsigned long n, int *count, t_dflag *flags);
void				ft_dsigned(long n, int *count, t_dflag *flags);
void				ft_dunsigned(unsigned long n, int *count, t_dflag *flags);

/*
** these functions handle the padding AND
** printing of strings or characters. Unlike number functions
** which need an extra function to do so as shown above.
*/

void				ft_print_char(const char c, int *count, t_flag *flags);
void				ft_print_str(const char *str, int *count, t_flag *flags);
void				ft_dprint_char(const char c, int *count, t_dflag *flags);
void				ft_dprint_str(const char *str, int *count, t_dflag *flags);

/*
** these functions handle the printing of numeric values
*/

void				ft_print_hex(const char c, unsigned long nb, int *count);
void				ft_print_decimal(unsigned long n, int *count);
void				ft_dprint_hex(const char c, unsigned long nb, int *count,
					t_dflag *flags);
void				ft_dprint_decimal(unsigned long n, int *count, t_dflag *flags);

/*
** these functions handle the 0 padding or ' ' padding if needed
*/

void				ft_pad(int n, int *count);
void				ft_padzero(int n, int *count);
void				ft_dpad(int n, int *count, t_dflag *flags);
void				ft_dpadzero(int n, int *count, t_dflag *flags);

/*
** printf's putchar & putstr
** checks if any write output is < 0 and if so, sets count to -1 to show
** that an error occured.
*/

void				pft_putchar_fd(char c, int fd, int *count);
void				pft_putstr_fd(char *s, int fd, int *count);

int					ft_printf(const char *format, ...);
int					ft_dprintf(int fd, const char *format, ...);
int					ft_printf_err(const char *format, ...);
#endif
