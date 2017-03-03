##
## Makefile for  in /home/thauvi_a/rendu/tek2/trade
##
## Made by Alexandre Thauvin
## Login   <thauvi_a@epitech.net>
##
## Started on  Mon Feb 27 11:44:29 2017 Alexandre Thauvin
## Last update Fri Mar  3 15:02:48 2017 Alexandre Thauvin
##

NAME		= trade

SRCS		= sources/compute.cpp \
		  sources/motherboard.cpp \
		  sources/main.cpp

OBJS		= $(SRCS:.cpp=.o)

GCC		= g++

RM		= rm -rf

CXXFLAGS	= -Wall -Werror -W -Wextra -I ./includes


$(NAME): $(OBJS)
	$(GCC) $(OBJS) -o $(NAME) $(CXXFLAGS)

all: $(NAME)

clean:
	$(RM) $(OBJS)
	$(RM) sources/*~
	$(RM) sources/*#

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY:         all clean fclean re
