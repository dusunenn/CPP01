NAME = Harl
cc = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
src = main.cpp Harl.cpp
obj = $(src:.cpp=.o)

all : $(NAME)
$(NAME) : $(src)
	$(cc) $(CXXFLAGS) $(src) -o $(NAME)
%.o: %.cpp
	$(cc) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re