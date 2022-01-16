CC = c++
CPPFLAGS = -Wall -Werror -Wextra -std=c++98

NAME = phonebook

SRC = main.cpp Contact.cpp PhoneBook.cpp
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