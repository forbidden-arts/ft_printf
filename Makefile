# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/26 11:53:47 by dpalmer           #+#    #+#              #
#    Updated: 2022/11/18 11:20:13 by dpalmer          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Variables

NAME		= libftprintf.a
INCLUDE		= include
LIBFT		= libft
SRC_DIR		= src/
OBJ_DIR		= objs/
CC			= cc
CFLAGS		= -Wall -Werror -Wextra -I
AR			= ar rcs

# Colors

C_RESET = \033[0;39m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
B_MAGENTA = \033[1;35m
CYAN = \033[0;96m

#Sources

SRC_FILES	=	ft_conv_utils	\
				ft_pf_printers	\
				ft_printf


SRC 		= 	$(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ 		= 	$(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))

###

all:		$(NAME)

$(NAME):	$(OBJ)
			@make -C $(LIBFT)
			@cp $(LIBFT)/libft.a .
			@mv libft.a $(NAME)
			@$(AR) $(NAME) $(OBJ)
			@echo "\n$(B_MAGENTA)FT_PRINTF COMPILED SUCCESSFULLY$(C_RESET)"

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
			@mkdir -p $(OBJ_DIR)
			@echo "$(GREEN)Compiling: $(YELLOW) $< $(C_RESET)"
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@
			@echo "$(B_MAGENTA)FT_PRINTF COMPILED$(C_RESET)"

clean:
			rm -rf $(OBJ_DIR)
			@make clean -C $(LIBFT)
			@echo "$(BLUE)OBJECT FILES DELETED$(C_RESET)"

fclean:		clean
			rm -f $(NAME)
			@echo "$(CYAN)FT_PRINTF EXECUTABLE FILES DELETED$(C_RESET)"
			rm -f $(LIBFT)/libft.a
			@echo "$(CYAN)LIBFT EXECUTABLE FILES DELETED$(C_RESET)"

re:			fclean all

.PHONY:		all clean fclean re
