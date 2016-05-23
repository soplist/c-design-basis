 main()
{
   int m,j=0;
   for(m=100;m<=150;m++)
   {
	   if(m%3==0)
		   continue;
	   printf("%4d",m);
	   j++;
	   if(j%10==0)
		   printf("\n");
   }
}