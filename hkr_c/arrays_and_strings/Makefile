CFLAGS=-g -Wall

%.exe: %.c
	gcc -o $@ $< $(CFLAGS)

%.exe.out: %.exe
	cat $(<).in | ./$(<) | tr -d '\r' > $@

all: digit_frequency.exe

test: digit_frequency.exe.out
	diff --color=always -N digit_frequency.exe.exp digit_frequency.exe.out && printf "\033[1;32m -> OK!\033[0;30m"

debug: digit_frequency.exe
	 gdb ./$(<) 

clean:
	rm *.exe.out
	rm *.exe
	