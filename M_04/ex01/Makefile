CC = c++
CPPFLAGS = -Wall -Wextra -Werror -Wshadow -Wno-shadow -std=c++98

NAME = brain

SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp WrongAnimal.cpp WrongCat.cpp Brain.cpp
DIR = ./objects/
OBJS = $(addprefix $(DIR), $(SRC:.cpp=.o))

all: $(NAME)

$(DIR)%.o: %.cpp
	@mkdir -p $(DIR)
	$(CC) $(CPPFLAGS) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) $(CPPFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -rf $(DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: fclean all re clean