CWARN = -Wall -Wextra -Wpedantic

debug: main.c
	gcc $(CWARN) -g -o $@ $^

release: main.c 
	gcc $(CWARN) -O2 -o $@ $^