CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Buro

all: $(NAME)

SRCDIR = srcs/

SRCS = $(SRCDIR)main.cpp $(SRCDIR)Bureaucrat.cpp

BIN_DIR = bin

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

OBJS = $(SRCS:$(SRCDIR)%.cpp=$(BIN_DIR)/%.o)

$(BIN_DIR)/%.o: $(SRCDIR)%.cpp | $(BIN_DIR)


$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -rf $(BIN_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re