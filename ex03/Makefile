NAME = ex03
CC   = c++
CCFLAG = -Wall -Wextra -Werror -std=c++98
DEBUG_FLAG = -DDEBUG=0

SRCS = 	src/main.cpp \
		src/AMateria.cpp \
		src/Ice.cpp \
		src/Cure.cpp \
		src/Fire.cpp \
		src/Air.cpp \
		src/Character.cpp \
		src/MateriaSource.cpp \
		src/ICharacter.cpp \
		src/IMateriaSource.cpp \
		src/Environment.cpp

HEADS =  inc/AMateria.hpp \
		 inc/Ice.hpp \
		 inc/Cure.hpp \
		 inc/Fire.hpp \
		 inc/Air.hpp \
		 inc/Character.hpp \
		 inc/MateriaSource.hpp \
		 inc/ICharacter.hpp \
		 inc/IMateriaSource.hpp \
		 inc/Environment.hpp

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