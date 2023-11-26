NAME		= 	libftprintf.a

FLAGS		= 	-Wall -Wextra -Werror

COMPILE		=	cc

SRCS		=	ft_printf.c ft_helper_csi.c ft_helper_hex.c ft_uitoa.c ft_calloc.c ft_itoa.c ft_memset.c

OBJS 		=	$(SRCS:%.c=%.o)

$(NAME): 		$(OBJS)
				ar rcs $(NAME) $(OBJS)

$(OBJS):
				$(COMPILE) $(FLAGS) -c $(SRCS)

all: 			$(NAME)

clean:
				rm -f $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean
				$(MAKE) all
