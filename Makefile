tempmng: tempmng.c
	gcc -o tempmng tempmng.c

test: test.c
	gcc -o test test.c

sum: sum.c
	gcc -o sum sum.c

rtest:
	rm -f test

rsum:
	rm -f sum
