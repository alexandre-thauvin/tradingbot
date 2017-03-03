##
## Makefile for  in /home/thauvi_a/rendu/tek2/trade
##
## Made by Alexandre Thauvin
## Login   <thauvi_a@epitech.net>
##
## Started on  Mon Feb 27 11:44:29 2017 Alexandre Thauvin
## Last update Fri Mar  3 14:26:31 2017 Alexandre Thauvin
##

NAME		= trade

SRC		= sources/compute.cpp \
		  sources/motherboard.cpp \
		  sources/main.cpp

OBJ		= $(SRC:.cpp=.o)

GCC		= g++

RM		= rm -rf

CXXFLAGS	= -Wall -Werror -W -Wextra


binaire: $(OBJ)
	$(GCC) -o $(NAME) -I ./includes $(CFLAGS) $(SRC)

all:lib

clean:
	$(RM) $(OBJ1)
	$(RM) *~
	$(RM) *#

fclean: clean
	$(RM) $(NAME)

re: fclean all
