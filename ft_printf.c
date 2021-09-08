#include "includes/ft_printf.h"

t_flags init_flags(void)
{
	t_flags flags;

	flags.minus = 0;
	flags.zero = 0;
	flags.precision = 0;
	flags.point = 0;
	flags.min_width = 0;
	flags.star = 0;
	flags.hash = 0;
	flags.space = 0;
	flags.plus = 0;
	flags.type = 0;
	return (flags);
}

int	set_structure(char *input, va_list arg)
{
	int i;
	int count;
	t_flags	flags;

	i = 0;
	count = 0;
	while (input[i] != '\0')
	{
		flags = init_flags();
		if (input[i] == '%' && input[i + 1])
		{
			get_settings(input, arg, &flags, &i);
			count += convert_output( arg, &flags);
		}
		//else if (input[i] == ' ')
			//count += ft_putchar(' ');
		else if (input[i] != '%')
			count += ft_putchar(input[i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *fmt, ...)
{
	va_list	arg;
	char	*input;
	int		count;


	input = ft_strdup(fmt);
	va_start(arg, fmt);
	count = set_structure(input, arg);
	va_end(arg);
	free(input);
	return (count);
}
