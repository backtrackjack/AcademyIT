SRCS = ../srcs/main.c ../srcs/print_users.c
OBJS = $(SRCS:.c=.o)

.c.o:
	gcc -g -c $< -o $(<:.c=.o)

clean:
	rm -rf $(OBJS)
