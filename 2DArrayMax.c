main()
{
   int m,n,row=0,column=0,max;
   int s[3][4]={{1,2,3,4},{9,8,7,6},{-10,10,-5,2}};
   max=s[0][0];
   for(m=0;m<=2;m++)
	   for(n=0;n<=3;n++)
	      if(s[m][n]>max)
	      {
	         max=s[m][n];
			 row=m;
			 column=n;
	      }
	printf("max=%d,row=%d,column=%d\n",max,row,column);
}