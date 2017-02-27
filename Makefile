##
## Makefile for  in /home/thauvi_a/rendu/tek2/trade
##
## Made by Alexandre Thauvin
## Login   <thauvi_a@epitech.net>
##
## Started on  Mon Feb 27 11:44:29 2017 Alexandre Thauvin
## Last update Mon Feb 27 11:44:32 2017 Alexandre Thauvin
##

NAME		= trade

SRC		=

OBJ		= $(SRC:.cpp=.o)

GCC		= g++

RM		= rm -rf

CXXFLAGS	= -Wall -Werror -W -Wextra


binaire: $(OBJ)
	$(GCC) -o $(NAME) $(CFLAGS) $(SRC)

all:lib

clean:
	$(RM) $(OBJ1)
	$(RM) *~
	$(RM) *#

fclean: clean
	$(RM) $(NAME)

re: fclean all
