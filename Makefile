C = gcc
# CFLAGS = -Wall -Werror -Wextra -pedantic -g -fsanitize=address
CFLAGS = -pedantic -g -fsanitize=address
LDFLAGS =  -fsanitize=address

SRC = cc.c cadastro_correntista.c cadastro_cc.c 
OBJ = $(SRC:.c=.o)
EXEC = main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(C) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)