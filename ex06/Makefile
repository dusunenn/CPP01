NAME = Harl
cc = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = main.cpp Harl.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)
$(NAME) : $(SRCS)
	$(cc) $(CXXFLAGS) $(SRCS) -o $(NAME)
%.o: %.cpp
	$(cc) $(CXXFLAGS) -c $< -o $@
clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re