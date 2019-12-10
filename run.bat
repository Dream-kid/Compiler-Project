flex flx.l
bison -d bison.y
gcc lex.yy.c bison.tab.c -o app
app