# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thmeyer < thmeyer@student.42lyon.fr >      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/11 13:57:36 by thmeyer           #+#    #+#              #
#    Updated: 2023/04/11 14:30:53 by thmeyer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ##################################### #
#               VARIABLES               #
# ##################################### #

NAME		=	libft.a

UNAME		=	$(shell uname)

NOCOLOR		=	\033[0m
BGREEN		=	\033[1;32m

HEADER		=	includes/libft.h

MAKEFILE	=	Makefile

CFLAGS 		= 	-Wall -Wextra -Werror

RM 			= 	rm -rf

AR 			= 	ar

ARFLAGS 	= 	-rcs


# ##################################### #
#                 PATHS                 #
# ##################################### #

SRCS_PATH	=	sources/

SRC_FT_FREE_PATH		=	$(SRCS_PATH)ft_free/
SRC_FT_CHECK_PATH		=	$(SRCS_PATH)ft_check/
SRC_FT_CONVERT_PATH		=	$(SRCS_PATH)ft_convert/
SRC_FT_DISPLAY_PATH		=	$(SRCS_PATH)ft_display/
SRC_FT_FILE_PATH		=	$(SRCS_PATH)ft_file/
SRC_FT_LIST_PATH		=	$(SRCS_PATH)ft_list/
SRC_FT_MEMORY_PATH		=	$(SRCS_PATH)ft_memory/
SRC_FT_PRINTF_PATH		=	$(SRCS_PATH)ft_printf/
SRC_FT_STRING_PATH		=	$(SRCS_PATH)ft_string/

OBJ_FT_FREE_PATH		=	$(SRC_FT_FREE_PATH).objs/
OBJ_FT_CHECK_PATH		=	$(SRC_FT_CHECK_PATH).objs/
OBJ_FT_CONVERT_PATH		=	$(SRC_FT_CONVERT_PATH).objs/
OBJ_FT_DISPLAY_PATH		=	$(SRC_FT_DISPLAY_PATH).objs/
OBJ_FT_FILE_PATH		=	$(SRC_FT_FILE_PATH).objs/
OBJ_FT_LIST_PATH		=	$(SRC_FT_LIST_PATH).objs/
OBJ_FT_MEMORY_PATH		=	$(SRC_FT_MEMORY_PATH).objs/
OBJ_FT_PRINTF_PATH		=	$(SRC_FT_PRINTF_PATH).objs/
OBJ_FT_STRING_PATH		=	$(SRC_FT_STRING_PATH).objs/

OBJS_DIRS	=	$(OBJ_FT_FREE_PATH) $(OBJ_FT_CHECK_PATH) $(OBJ_FT_CONVERT_PATH) \
$(OBJ_FT_DISPLAY_PATH) $(OBJ_FT_FILE_PATH) $(OBJ_FT_LIST_PATH) $(OBJ_FT_MEMORY_PATH) \
$(OBJ_FT_PRINTF_PATH) $(OBJ_FT_STRING_PATH) 


# ##################################### #
#                SOURCES                #
# ##################################### #

SRC_FT_FREE_FILES		=	free.c	

SRC_FT_CHECK_FILES		=	ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
							ft_strchr.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c

SRC_FT_CONVERT_FILES	=	ft_atoi.c ft_itoa.c ft_tolower.c ft_toupper.c

SRC_FT_DISPLAY_FILES	=	ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c

SRC_FT_FILE_FILES		=	get_next_line.c get_next_line_utils.c

SRC_FT_LIST_FILES		=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
							ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

SRC_FT_MEMORY_FILES		=	ft_bzero.c ft_calloc.c ft_memchr.c ft_memcpy.c ft_memmove.c \
							ft_memset.c ft_memcmp.c

SRC_FT_PRINTF_FILES		=	ft_printf.c basic_ft.c printnbr.c

SRC_FT_STRING_FILES		=	ft_split.c ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c \
							ft_strlcpy.c ft_strmapi.c ft_strtrim.c ft_substr.c

SRCS_FT_FREE		=	$(addprefix $(SRC_FT_FREE_PATH), $(SRC_FT_FREE_FILES))
SRCS_FT_CHECK		=	$(addprefix $(SRC_FT_CHECK_PATH), $(SRC_FT_CHECK_FILES))
SRCS_FT_CONVERT		=	$(addprefix $(SRC_FT_CONVERT_PATH), $(SRC_FT_CONVERT_FILES))
SRCS_FT_DISPLAY		=	$(addprefix $(SRC_FT_DISPLAY_PATH), $(SRC_FT_DISPLAY_FILES))
SRCS_FT_FILE		=	$(addprefix $(SRC_FT_FILE_PATH), $(SRC_FT_FILE_FILES))
SRCS_FT_LIST		=	$(addprefix $(SRC_FT_LIST_PATH), $(SRC_FT_LIST_FILES))
SRCS_FT_MEMORY		=	$(addprefix $(SRC_FT_MEMORY_PATH), $(SRC_FT_MEMORY_FILES))
SRCS_FT_PRINTF		=	$(addprefix $(SRC_FT_PRINTF_PATH), $(SRC_FT_PRINTF_FILES))
SRCS_FT_STRING		=	$(addprefix $(SRC_FT_STRING_PATH), $(SRC_FT_STRING_FILES))

SRCS	=	$(SRCS_FT_FREE) $(SRCS_FT_CHECK) $(SRCS_FT_CONVERT) $(SRCS_FT_DISPLAY) \
$(SRCS_FT_FILE) $(SRCS_FT_LIST) $(SRCS_FT_MEMORY) $(SRCS_FT_PRINTF) $(SRCS_FT_STRING) 


# ##################################### #
#                OBJECTS                #
# ##################################### #

OBJS_FT_FREE		=	$(addprefix $(OBJ_FT_FREE_PATH),		\
						$(SRC_FT_FREE_FILES:.c=.o))
OBJS_FT_CHECK		=	$(addprefix $(OBJ_FT_CHECK_PATH),		\
						$(SRC_FT_CHECK_FILES:.c=.o))
OBJS_FT_CONVERT		=	$(addprefix $(OBJ_FT_CONVERT_PATH),		\
						$(SRC_FT_CONVERT_FILES:.c=.o))
OBJS_FT_DISPLAY		=	$(addprefix $(OBJ_FT_DISPLAY_PATH),		\
						$(SRC_FT_DISPLAY_FILES:.c=.o))
OBJS_FT_FILE		=	$(addprefix $(OBJ_FT_FILE_PATH),		\
						$(SRC_FT_FILE_FILES:.c=.o))
OBJS_FT_LIST		=	$(addprefix $(OBJ_FT_LIST_PATH),		\
						$(SRC_FT_LIST_FILES:.c=.o))
OBJS_FT_MEMORY		=	$(addprefix $(OBJ_FT_MEMORY_PATH),		\
						$(SRC_FT_MEMORY_FILES:.c=.o))
OBJS_FT_PRINTF		=	$(addprefix $(OBJ_FT_PRINTF_PATH),		\
						$(SRC_FT_PRINTF_FILES:.c=.o))
OBJS_FT_STRING		=	$(addprefix $(OBJ_FT_STRING_PATH),		\
						$(SRC_FT_STRING_FILES:.c=.o))

OBJS	=	$(OBJS_FT_FREE)	$(OBJS_FT_CHECK)	$(OBJS_FT_CONVERT)	$(OBJS_FT_DISPLAY)	\
$(OBJS_FT_FILE)	$(OBJS_FT_LIST)	$(OBJS_FT_MEMORY)	$(OBJS_FT_PRINTF)	$(OBJS_FT_STRING)	

$(OBJ_FT_FREE_PATH)%.o: $(SRC_FT_FREE_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_CHECK_PATH)%.o: $(SRC_FT_CHECK_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_CONVERT_PATH)%.o: $(SRC_FT_CONVERT_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_DISPLAY_PATH)%.o: $(SRC_FT_DISPLAY_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_FILE_PATH)%.o: $(SRC_FT_FILE_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_LIST_PATH)%.o: $(SRC_FT_LIST_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_MEMORY_PATH)%.o: $(SRC_FT_MEMORY_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_PRINTF_PATH)%.o: $(SRC_FT_PRINTF_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJ_FT_STRING_PATH)%.o: $(SRC_FT_STRING_PATH)%.c $(MAKEFILE) $(HEADER)
	$(CC) $(CFLAGS) -o $@ -c $<


# ##################################### #
#                 RULES                 #
# ##################################### #

all:		$(OBJS_DIRS) $(NAME)

$(OBJS_DIRS):
			mkdir -p $(OBJS_DIRS)

$(NAME):	$(OBJS)
ifeq ($(UNAME),Linux)
	$(AR) $(ARFLAGS) -o $(NAME) $(OBJS)
	@echo "$(BGREEN)Linux Compilation Done$(NOCOLOR)"
else ifeq ($(UNAME),Darwin)
	$(AR) $(ARFLAGS) -o $(NAME) $(OBJS)
	@echo "$(BGREEN)Mac OS Compilation Done$(NOCOLOR)"
endif

clean:
			$(RM) $(OBJS)
			@echo "$(BGREEN)Clean done$(NOCOLOR)"

fclean:
			$(MAKE) clean
			$(RM) $(NAME)
			$(RM) $(OBJS_DIRS)
			@echo "$(BGREEN)Fclean done$(NOCOLOR)"

re:
			$(MAKE) fclean
			$(MAKE) all

.PHONY:		all clean fclean re 