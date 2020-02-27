all: time

time: pi
	time ./pi

pi: pi.c
	gcc $< -Wall -Wextra -O0 -o $@

clean:
	rm -f pi
