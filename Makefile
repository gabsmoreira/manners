all: manners

manners.tab.c manners.tab.h:	manners.y
	bison -d manners.y

lex.yy.c: manners.l manners.tab.h
	flex manners.l

manners: lex.yy.c manners.tab.c manners.tab.h
	gcc -o manners manners.tab.c lex.yy.c

clean:
	rm manners manners.tab.c lex.yy.c manners.tab.h
