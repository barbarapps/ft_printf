#include "../includes/ft_printf.h"

int	a_string(t_flags *flags, va_list arg)
{
	int		count;
	char	*s;
	int		width;

	count = 0;
	s = va_arg(arg, char *);
	if (!s)
		s = "(null)";
	width = flags->min_width;
	s = ft_strdup(s);
	if (flags->minus && width)
	{
		count += ft_putstr(s);
		while (width-- > (int)ft_strlen(s))
			count += ft_putchar(' ');
	}
	else if (width)
	{
		while (width-- > (int)ft_strlen(s))
			count += ft_putchar(' ');
		count += ft_putstr(s);
	}
	else
		count += ft_putstr(s);
	free(s);
	return (count);
}
