MKDIR_P = mkdir -p

SOURCE = $(wildcard *.c)
DIR_BIN = bin
BINS = $(patsubst %.c, $(DIR_BIN)/%, $(SOURCE))

C_FLAGS =

all:$(BINS)

$(BINS): $(DIR_BIN)/%: %.c
	${MKDIR_P} $(DIR_BIN)
	gcc -Wall -g ${C_FLAGS} -I ./ $< -o $@

.PHONY:clean
clean:
	rm $(BINS) -f
