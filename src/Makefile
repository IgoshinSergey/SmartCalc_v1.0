PROJECT_NAME=SmartCalc-1.0
CC=gcc
CFLAGS=-Wall -Werror -Wextra -std=c11
GCOV=--coverage
OS=$(shell uname -s)

ifeq ($(OS), Linux)
	LEAK_CHECK=valgrind --tool=memcheck --leak-check=yes
	OPEN_CMD=xdg-open
	ADD_LIB=-lpthread -lcheck_pic -lrt -lm -lsubunit
else ifeq ($(OS), Darwin)
	LEAK_CHECK=leaks -atExit --
	OPEN_CMD=open
	ADD_LIB=-lm -lcheck -lpthread
endif

all: install unistall dvi dist test gcov_report clean

install: clean
	mkdir build
	cd build && cmake ../qt/
	cd build && make
	build/SmartCalc

unistall:
	rm -rf build/

dvi: clean
	cd dvi && latex info.tex
	cd dvi && dvipdf info.dvi
	rm dvi/info.log dvi/info.aux

dist: clean
	mkdir $(PROJECT_NAME)
	cp -r calculations $(PROJECT_NAME)
	cp -r dvi $(PROJECT_NAME)
	cp -r qt $(PROJECT_NAME)
	cp Makefile $(PROJECT_NAME)
	tar -cvzf $(PROJECT_NAME).tgz $(PROJECT_NAME)
	rm -rf $(PROJECT_NAME)

test: clean
	$(CC) $(CFLAGS) -c calculations/*.c $(ADD_LIB)
	$(CC) $(CFLAGS) -c unit_tests/*.c $(ADD_LIB)
	$(CC) *.o -o test $(ADD_LIB)
	./test
	rm -rf *.o test

leaks: clean
	$(CC) $(CFLAGS) -c calculations/*.c $(ADD_LIB)
	$(CC) $(CFLAGS) -c unit_tests/*.c $(ADD_LIB)
	$(CC) *.o -o leaks_test $(ADD_LIB)
	$(LEAK_CHECK) ./leaks_test
	rm -rf *.o leaks_test

gcov_report: clean
	$(CC) $(CFLAGS) -c calculations/*.c $(ADD_LIB) $(GCOV)
	$(CC) $(CFLAGS) -c unit_tests/*.c $(ADD_LIB) $(GCOV)
	$(CC) *.o -o test $(ADD_LIB) $(GCOV)
	./test
	lcov -c -d . -o gcov_test.info
	rm *.gcda *.gcno *.o
	genhtml -o report gcov_test.info
	chmod 777 report/*
	$(OPEN_CMD) ./report/index.html

clang:
	cp ../materials/linters/.clang-format .
	clang-format -i calculations/*.c calculations/*.h
	clang-format -i unit_tests/*.c unit_tests/*.h
	clang-format -i qt/*.cpp qt/*.h
	rm -rf .clang-format

clean:
	rm -rf *.o build/ report/ \
	test *.info *.out *.gcno *.gcda \
	dvi/info.dvi dvi/info.pdf \
	SmartCalc-1.0 SmartCalc-1.0.tgz
