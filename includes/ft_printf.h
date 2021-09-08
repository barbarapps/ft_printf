#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define ABS(Value) (Value < 0 ? -Value : Value)

/*# define D "0123456789"
# define H "0123456789abcdef"
# define UH "0123456789ABCDEF"
# define O "01234567"
*/
# include "../libft/libft.h"
# include <stdarg.h>

typedef struct s_flags
{
	int	minus;
	int	zero;
	int	min_width;
	int	point;
	int	precision;
	int	star;
	int	hash;
	int	space;
	int	plus;
	int	type;
}				t_flags;

int		ft_printf(const char *fmt, ...);
int		set_structure(char *input, va_list arg);
int		get_settings(char *input, va_list arg, t_flags *flags, int *i);
int		convert_output(va_list arg, t_flags *flags);
int		a_char(t_flags *flags, va_list arg);
int		a_int(t_flags *flags, va_list arg);
int		a_string(t_flags *flags, va_list arg);
int		a_percentage(t_flags *flags);
int		is_uxX(t_flags *flags, va_list arg);
int		ft_putstr(char *str);
char	*add_ptr(char *str);
#endif

