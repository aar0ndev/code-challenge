CFLAGS=-g -Wall

all: digit_frequency.test dynamic_array_in_c.test

%.exe: %.c
	gcc -o $@ $< $(CFLAGS)

%.exe.out: %.exe
	cat $(<).in | ./$(<) | tr -d '\r' > $@

%.test: %.exe.out
	diff --color=always -N $(*).exe.exp $(<) && printf "\033[1;32m -> OK!\033[0;30m"

%.debug: %.exe
	 gdb ./$(<) 

clean:
	rm *.exe.out
	rm *.exe
	