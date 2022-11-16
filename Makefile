# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 11:53:47 by dpalmer           #+#    #+#              #
#    Updated: 2022/11/16 08:37:25 by dpalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =		

# Text Decoration Defs
bold := $(shell tput bold)
b_green := $(shell tput setaf 10)
b_yellow := $(shell tput setaf 11)
b_magenta := $(shell tput setaf 13)
reset := $(shell tput sgr0)
# End Decoration Defs


NAME = libftprintf.a

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

LIBFT_PATH = ./libft
LIBFT = $(LIBFT_PATH)/libft.a


CC = cc

CC_FLAGS = -Wall -Wextra -Werror

$(OBJS_DIR)%.o : %.c ft_printf.h
	@mkdir -p $(OBJS_DIR)
	$(info $(b_green)Compiling:$(b_yellow) $<$(reset))
	@cc $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@cp $(LIBFT) $(NAME)
	@ar rcs $(NAME) $(OBJECTS_PREFIXED)
	$(info $(b_magenta)$(bold)LIBFTPRINTF COMPILED SUCCESSFULLY$(reset))

$(LIBFT): make -C $(LIBFT_PATH) all

all: $(NAME)

clean:
	make -C $(LIBFT_PATH) clean
	rm -rf $(OBJS_DIR)

fclean: clean
	make -C $(LIBFT_PATH) fclean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re libft
