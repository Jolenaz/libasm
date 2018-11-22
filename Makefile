
##Library

NAME=libft.a
.PHONY: clean fclean libft re
.DEFAULT_GOAL: libft

INC_PATH=includes
SRCS_PATH=srcs
OBJS_PATH=objects

SRCS =	ft_isdigit.s \
		ft_isascii.s \
		ft_isprint.s \
		ft_isalnum.s \
		ft_isalpha.s \
		ft_toupper.s \
		ft_tolower.s \
		ft_bzero.s \
		ft_strlen.s \
		ft_puts.s

OBJS =	$(patsubst %.s,%.o,$(SRCS))

RED=\033[0;31m
GREEN=\033[0;32m
NC=\033[0m

libft: $(NAME)

test: libft mainTest
	@rm -rf main.o
	@./mainTest

mainTest: main.o
	@echo "$(GREEN) Compile and Run $@ $(NC)";
	@gcc -g -Wall -Werror -Wextra main.o -I. -lft -L. -o mainTest

main.o: main.c
	@gcc -g -c main.c -o main.o -I.

$(NAME): $(addprefix $(OBJS_PATH)/,$(OBJS))
	@echo "$(GREEN) Compile $@ $(NC)";
	ar rcs $(NAME) $(addprefix $(OBJS_PATH)/,$(OBJS)) 

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.s
	@mkdir -p $(OBJS_PATH)
	@echo "$(GREEN) Compile $@ $(NC)";
	~/.brew/bin/nasm -f macho64 $< -o $@ -I $(INC_PATH)

clean:
	@echo "$(RED) clean"
	rm -rf $(OBJS_PATH)
	@echo "$(NC)"

fclean: clean
	@echo "$(RED) fclean"
	rm -rf $(NAME)
	@echo "$(NC)"

re: fclean libft