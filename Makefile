CF = gcc -Wall -Werror -Wextra

all: colleen grace sully

colleen:
	$(CF) Colleen.c -o Colleen

grace:
	$(CF) Grace.c -o Grace

sully:
	$(CF) Sully.c -o Sully

.PHONY: clean fclean re

clean:
	@rm Colleen Grace Grace_kid.c Grace_kid.js Sully Sully_* tmp_Colleen

re: fclean all
