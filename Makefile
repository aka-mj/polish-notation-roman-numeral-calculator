PATHU = tests/unity/
PATHS = src/
PATHT = tests/
PATHB = build/

AR = ar
CC = clang-5.0
CFLAGS = -Wall -I$(PATHU) -I$(PATHS) -I$(PATHT) -g -O0


%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: src/libroman.a src/calc

src/libroman.a: src/roman.o
	$(AR) rcs $@ $?

src/calc: src/calc.o src/libroman.a
	$(CC) $(CFLAGS) $? -o $@

#test: tests/main.o tests/arabic2roman.o tests/roman2arabic.o tests/add.o tests/sub.o src/libroman.a
test: $(PATHU)unity.o $(PATHT)add.o $(PATHT)sub.o $(PATHT)roman2arabic.o $(PATHT)arabic2roman.o $(PATHT)main.o $(PATHS)libroman.a
	$(CC) $(CFLAGS) -static $? -o tests/testme
	./tests/testme

clean:
	rm -f $(PATHT)*.o
	rm -f $(PATHT)testme
	rm -f $(PATHU)*.o
	rm -f $(PATHS)*.a
	rm -f $(PATHS)*.o
	rm -f $(PATHS)calc

.PHONY: all test clean
