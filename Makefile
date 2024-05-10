C = gcc
# CFLAGS = -Wall -Werror -Wextra -pedantic -g -fsanitize=address
CFLAGS = -pedantic -g 
# LDFLAGS =  -fsanitize=address
LDFLAGS = 

SRC = cc.c cadastro_correntista.c cadastro_cc.c le_dados_correntista.c manipula_arquivos.c
OBJ = $(SRC:.c=.o)
EXEC = cc.exe

all: $(EXEC)

$(EXEC): $(OBJ)
	$(C) $(LDFLAGS) -o $@ $(OBJ) $(LBLIBS)

clean:
	rm -rf $(OBJ) $(EXEC)