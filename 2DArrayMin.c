#define N 3
main()
{
   int s[N][N],m[N],i,j;
   printf("input numbers.\n");
   for(i=0;i<N;i++)
	   for(j=0;j<N;j++)
	      scanf("%d",&s[i][j]);
   for(i=0;i<N;i++)
   {
	   m[i]=s[i][0];
	   for(j=1;j<N;j++)
		   if(m[i]>s[i][j])
		      m[i]=s[i][j];
   }
   printf("min is: ");
   for(i=0;i<N;i++)
	   printf("%d\n",m[i]);
}