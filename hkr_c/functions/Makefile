CFLAGS=-g


%.exe: %.c
	gcc -o $@ $< $(CFLAGS)

%.exe.out: %.exe
	cat $(<).in | ./$(<) | tr -d '\r' > $@

all: querying_the_document.exe

test: querying_the_document.exe.out
	diff --color=always querying_the_document.exe.exp querying_the_document.exe.out && printf "\033[1;32m -> OK!\033[0;30m"

debug: querying_the_document.exe
	 gdb ./$(<) 

clean:
	rm *.exe.out
	rm *.exe
	