CC=gcc
FILES=main.c
OUT_EXE=example

build: $(FILES)
	$(CC) -o $(OUT_EXE) $(FILES)

clean:
	rm -f *.o core
	rm -f $(OUT_EXE)

rebuild: clean build
