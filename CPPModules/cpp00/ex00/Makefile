CPP := c++
CPP_FLAGS := -Wall -Wextra -Werror
CPP_AFLAGS := -std=c++98

HEADER :=
# EXT_LIB :=

AR := ar
AR_FLAGS := rcs
# > ar rcs Replace, Don't Warn, Create Archive 

SRC := megaphone.cpp
OBJ := $(SRC:.cpp=.o)

NAME := megaphone

# rules $(NAME), all, clean, fclean, re

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CPP_FLAGS) $(CPP_AFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CPP) $(CPP_FLAGS) $(CPP_AFLAGS) -c $< -o $@


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re 