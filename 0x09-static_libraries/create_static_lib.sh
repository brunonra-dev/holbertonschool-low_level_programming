find *.c -exec gcc -c {} \;
find *.o -exec ar -crs libmy.a -c {} \;
