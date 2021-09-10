NAME	=	libftprintf.a
SRCS	=	ft_printf.c \
				srcs/get_settings.c \
				srcs/convert_output.c \
				srcs/a_char.c \
				srcs/a_int.c \
				srcs/a_string.c \
				srcs/a_percentage.c \
				srcs/is_uxX.c \
				srcs/utilities.c

OBJS	=	$(SRCS:.c=.o)
CC		=	gcc
CFLAGS	=	-Wall -Wextra -Werror
INCS	=	-I includes
RM		=	rm -f
CLIB	=	ar -rc

%.o: %.c
		$(CC) $(INCS) -c $< -o $@ $(CFLAGS)

all: $(NAME)

$(NAME): $(OBJS)
		$(MAKE) bonus -C ./libft
		cp ./libft/libft.a $(NAME)
		$(CLIB) $(NAME) $(OBJS)

bonus: $(NAME) $(OBJS)
	ar -rc $(NAME) $(OBJS) 
clean:
		$(MAKE) clean -C ./libft
		$(RM) $(OBJS)

fclean: clean
		$(MAKE) fclean -C ./libft
		$(RM) $(NAME)

re: fclean all
