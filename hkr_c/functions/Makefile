CFLAGS=-g -Wall
SOURCES=$(wildcard *.c)

all: test

build: $(addsuffix .exe,$(basename $(SOURCES))) 

test: $(addsuffix .test,$(basename $(SOURCES)))

%.exe: %.c
	gcc -o $@ $< $(CFLAGS)

%.exe.out: %.exe
	cat $(<).in | ./$(<) 2> $(<).err | tr -d '\r' > $@
	[ -s $(<).err ] || rm $(<).err

%.test: %.exe.out
	diff --color=always -N $(*).exe.exp $(<) && printf "\e[1;32m -> OK! ($(*))\n\e[0;0m" && touch $(@) || rm -f $(@)


%.debug: %.exe
	 gdb ./$(<) 

clean:
	rm -f *.test
	rm -f *.exe.out
	rm -f *.exe
	rm -f *.err
	