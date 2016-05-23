main()
{
   int m,n,a;
   for(m=1;m<=6;m++)
   {
      printf("%2c\n",' ');
      for(a=1;a<=6-m;a++)
		  printf("%2c",' ');
	  for(n=1;n<=m*2-1;n++)
	  {
		  printf("%2d",m);
		  if(n>m*2-1)
			  printf("%2c\n",' ');
	  }
   }
   
   
}