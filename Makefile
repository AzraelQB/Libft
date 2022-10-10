FILES 			=	ft_atoi.c ft_strlen.c ft_strtrim.c ft_strlen.c \
					ft_strchr.c ft_substr.c ft_memset.c ft_strdup.c \
					ft_strncmp.c ft_striteri.c ft_strlcat.c ft_strmapi.c \
					ft_toupper.c ft_tolower.c ft_strrchr.c ft_strnstr.c \
					ft_strlcpy.c ft_strjoin.c ft_split.c ft_putstr_fd.c \
					ft_putnbr_fd.c ft_putendl_fd.c ft_memmove.c ft_memcpy.c \
					ft_memcmp.c ft_memchr.c ft_isprint.c ft_isdigit.c \
					ft_isascii.c ft_isalpha.c ft_isalnum.c ft_calloc.c \
					ft_bzero.c ft_itoa.c ft_putchar_fd.c ft_lstadd_front.c \
					ft_lstadd_back.c ft_lstdelone.c ft_strcmp.c \
					ft_lstlast.c ft_lstnew.c ft_lstsize.c ft_lstiter.c \
					ft_lstclear.c ft_lstmap.c ft_strnfind.c ft_strfind.c

FILES_O			= $(FILES:.c=.o)
SRCS 			= $(addprefix src/, $(FILES))
OBJS 			= $(addprefix obj/, $(FILES_O))
OBJDIR			= obj
HEADER			= libft.h
CC				= gcc
RM				= rm -rf
CFLAGS			= -I. -Wall -Wextra -Werror
NAME			= libft.a
SRC_DIR			= src

obj/%.o :		src/%.c
				@$(CC) $(CFLAGS) -c $< -o $@

all:			$(OBJDIR) $(NAME) 

$(OBJDIR):		
				@mkdir $(OBJDIR)

$(NAME):		$(OBJS) 
				@ar rcs $(NAME) $(OBJS) $?
				@echo "all done"

clean:			
				@ $(RM) $(OBJDIR)

fclean:			clean
				@ $(RM) $(NAME)

re:				fclean all

.PHONY:			all bonus clean fclean re
