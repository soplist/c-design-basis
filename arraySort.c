main()
{
   int s[6],i,j,temp;
   printf("input 6 numbers.\n");
   for(i=0;i<6;i++)
	   scanf("%d",&s[i]);
   printf("\n");
   for(j=1;j<6;j++)
	   for(i=0;i<6-j;i++)
	      if(s[i]>s[i+1])
	      {
	         temp=s[i];
			 s[i]=s[i+1];
			 s[i+1]=temp;
	      }
   printf("the sorted number:\n");
   for(i=0;i<6;i++)
	   printf("%d ",s[i]);
}