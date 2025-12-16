NAME = sed
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp
obj = $(SRCS:.cpp=.o)

all : $(NAME)
$(NAME) : $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re