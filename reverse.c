#include <stdio.h>

void stur()
{
   char c;
   if((c=getchar())!='\n')
	   stur();
   putchar(c);
}

void main()
{
   stur();
}