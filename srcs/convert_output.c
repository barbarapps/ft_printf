#include "../includes/ft_printf.h"

int	convert_output( va_list arg, t_flags *flags)
{
	if (flags->type == 'c')
		return (a_char(flags, arg));
	if (flags->type == 's')
		return (a_string(flags, arg));
	if (flags->type == 'd' || flags->type == 'i')
		return (a_int(flags, arg));
	if (flags->type == 'u' || flags->type == 'x' || flags->type == 'X' ||
		 flags->type == 'p') 
		return (is_uxX(flags, arg));
	if (flags->type == '%')
		return (a_percentage(flags));
	return (0);
}
