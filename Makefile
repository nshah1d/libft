# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nshahid <nshahid@student.42abudhabi.ae>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/27 11:03:30 by nshahid           #+#    #+#              #
#    Updated: 2023/07/04 05:05:53 by nshahid          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCP		= ./
SRCP_B		= ./
SRCS		= $(filter-out $(wildcard $(SRCP)ft_lst.c), $(wildcard $(SRCP).c))
SRCS_B		= $(filter $(wildcard $(SRCP_B)ft_lst.c), $(wildcard $(SRCP_B)*.c))
SRC			= $(addprefix $(SRCP), $(notdir $(SRCS)))
SRC_B		= $(addprefix $(SRCP_B), $(notdir $(SRCS_B)))
OBJS		= $(SRC:.c=.o)
OBJS_B		= $(SRC_B:.c=.o)

HEAD	= ./includes/
NAME	= libft.a
AR		= ar rcs
RM		= rm -f
LIB		= ranlib
GCC		= gcc
CFLAGS	= -Wall -Wextra -Werror

RESET	= \033[0m
BOLD	= \033[1m
RED		= \033[31m
GREEN	= \033[32m
YELLOW	= \033[33m
BLUE	= \033[34m

all: ${NAME}

$(OBJS): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)";
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)";
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)";
		sed '$$d' error.txt;
		echo "\n\n$(YELLOW)EXITING$(RESET)";
		exit 1;
	fi

$(OBJS_B): %.o: %.c
	@if ! $(GCC) $(CFLAGS) -c -I $(HEAD) $< -o $@ 2> error.txt; then
		echo "$(RED)$(BOLD)MAKEFILE TERMINATED!$(RESET)";
		echo "$(YELLOW)Unable to create the object file for $<$(RESET)";
		echo "\n\n$(RED)$(BOLD)ERROR$(RESET)";
		sed '$$d' error.txt;
		echo "\n\n$(YELLOW)EXITING$(RESET)";
		exit 1;
	fi

${NAME}: $(OBJS)
	@$(AR) ${NAME} $(OBJS)
	@$(LIB) ${NAME}
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: ${NAME}$(RESET)"

so: ${OBJS}
	@${GCC} -shared -o libft.so ${OBJS}
	@echo "$(YELLOW)Created: libft.so$(RESET)"

bonus: $(OBJS) $(OBJS_B)
	@$(AR) ${NAME} $(OBJS) $(OBJS_B)
	@$(LIB) ${NAME}
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Created: $(words $(OBJS) $(OBJS_B)) object file(s)$(RESET)"
	@echo "$(YELLOW)Created: ${NAME}$(RESET)"

clean:
	@$(RM) $(OBJS) $(OBJS_B) error.txt
	@echo "$(GREEN)$(BOLD)SUCCESS$(RESET)"
	@echo "$(YELLOW)Removed: $(words $(OBJS) $(OBJS_B)) object file(s)$(RESET)"

fclean: clean
	@$(RM) $(NAME) libft.so
	@echo "$(YELLOW)Removed: ${NAME}$(RESET)"

re: fclean all

.PHONY: all clean fclean re so bonus
