##
## Makefile for  in /home/thauvi_a/rendu/tek2/trade
##
## Made by Alexandre Thauvin
## Login   <thauvi_a@epitech.net>
##
## Started on  Mon Feb 27 11:44:29 2017 Alexandre Thauvin
## Last update Thu May  4 15:04:41 2017 counil_m
##

NAME		= trade

SRCS		= sources/compute.cpp \
		  sources/motherboard.cpp \
		  sources/main.cpp

OBJS		= $(SRCS:.cpp=.o)

GXX		= g++

RM		= rm -rf

CXXFLAGS	= -Wall -Werror -W -Wextra -I ./includes -std=c++11


$(NAME): $(OBJS)
	$(GXX) $(OBJS) -o $(NAME) $(CXXFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) sources/*~
	$(RM) sources/*#

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:         all clean fclean re
