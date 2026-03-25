NAME = ex01
CC   = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
DEBUG_FLAG = -DDEBUG=0

SRCS = 	src/Animal.cpp \
		src/Cat.cpp \
		src/Dog.cpp \
		src/Brain.cpp \
		src/WrongAnimal.cpp \
		src/WrongCat.cpp \
		src/main.cpp

HEADS =  inc/Animal.hpp \
		 inc/Cat.hpp \
		 inc/Dog.hpp \
		 inc/Brain.hpp \
		 inc/WrongAnimal.hpp \
		 inc/WrongCat.hpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CCFLAG) $(OBJS) -o $(NAME)

%.o: %.cpp $(HEADS)
	$(CC) $(CCFLAG) $(DEBUG_FLAG) -c $< -o $@

debug: DEBUG_FLAG = -DDEBUG=1
debug:	fclean all

clean:
	rm -rf $(OBJS)
fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re debug