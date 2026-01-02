NAME = Harl
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
src = main.cpp Harl.cpp
OBJS = $(src:.cpp=.o)

all : $(NAME)
$(NAME) : $(src)
	$(CXX) $(CXXFLAGS) $(src) -o $(NAME)
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re