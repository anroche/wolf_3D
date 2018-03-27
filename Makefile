# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anroche <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/05/16 15:35:57 by anroche           #+#    #+#              #
#    Updated: 2017/09/30 06:57:24 by anroche          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = wolf3d

SRC = src/wolf.c\
	   src/ft_image.c\
		src/ft_hook.c\
		src/ft_ray.c\
		src/ft_show.c\

FLAGS=-Wall -Wextra -Werror

OBJ = $(SRC:.c=.o)

all: $(NAME)
	clear
	@echo " ________________ "
	@echo "< Compilation OK >"
	@echo " ---------------- "
	@echo "      \                _ "
	@echo "       \              (_) "
	@echo "        \   ^__^       / \ "
	@echo "         \  (oo)\_____/_\ \ "
	@echo "            (__)\       ) / "
	@echo "                ||----w (( "
	@echo "                ||     ||>> "


$(NAME):
	@make -C libft/ fclean && make -C libft/
	@make -C mlx_sierra/ clean && make -C mlx_sierra/
	@gcc -o $(NAME) $(FLAG) $(SRC) libft/libft.a mlx_sierra/libmlx.a -framework OpenGL -framework AppKit -lpthread

clean:
	clear
	@rm -rf $(OBJ)
	@echo " ________________ "
	@echo "<   clean : OK   >"
	@echo " ---------------- "
	@echo "      \                _ "
	@echo "       \              (_) "
	@echo "        \   ^__^       / \ "
	@echo "         \  (OO)\_____/_\ \ "
	@echo "            (__)\       ) / "
	@echo "                ||----w (( "
	@echo "                ||     ||>> "

fclean: clean
	clear
	@rm -rf $(NAME)
	@echo " ________________ "
	@echo "<  fclean : OK   >"
	@echo " ---------------- "
	@echo "      \                _ "
	@echo "       \              (_) "
	@echo "        \   ^__^       / \ "
	@echo "         \  (XX)\_____/_\ \ "
	@echo "            (__)\       ) / "
	@echo "             U  ||----w (( "
	@echo "                ||     ||>> "

re: fclean all
