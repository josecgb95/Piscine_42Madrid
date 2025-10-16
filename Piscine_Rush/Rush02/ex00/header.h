#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	dict_size(void);
char	*dict_to_str(char *dicc);
char	*format_str(char *strnt);
void	ft_strstr(char *str, char *to_find);
void	write_result(char *str);
int		str_len(char *str);
void	divide_num(char *str, char *dicc);
void	print_monos(char *str, char *dicc);
void	print_duos(char *str, char *dicc);
void	print_trios(char *str, char *dicc);
char	*check_input(char *str);
char	*ft_strcpy(char *dest, char *src);
void	tillion(int n, char *dicc);