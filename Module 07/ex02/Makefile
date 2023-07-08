NAME		= $(shell pwd | sed 's!.*/!!')
CC			= c++
CFLAGS		= -g -Wall -Wextra -Werror
CPPFLAGS	= -std=c++98
FILES		= main.cpp

OBJ = $(FILES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $@ $(CPPFLAGS) $(CFLAGS)

%.o: %.cpp
	$(CC) -c $< $(CPPFLAGS) $(CFLAGS)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re