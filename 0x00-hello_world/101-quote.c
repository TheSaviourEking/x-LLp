#include <stdio.h>
#include <unistd.h>
/**
*A C program that prints exactly.
*main: prints exactly and that piece of art is useful"
return:Always 0
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
