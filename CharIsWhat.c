#include<stdio.h>
#include<conio.h>

main()
{
   char c;
   printf("please input a character:\n");
   c=getchar();
   if((c>='a'&&c<='z')||(c>='A'&&c<='Z'))
	   printf("\nit is character.\n");
   else if(c>='0'&&c<='9')
	   printf("\nit is number.\n");
   else
       printf("\nit is a special character.\n");
}