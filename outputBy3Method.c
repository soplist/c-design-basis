main()
{
   int *p,i,a[10]={1,2,3,4,5,6,7,8,9,10};
   for(i=0;i<10;i++)
	   printf("%d",a[i]);
   printf("\n");
   for(i=0;i<10;i++)
	   printf("%d",*(a+i));
   printf("\n");
   for(p=a;p<a+10;p++)
	   printf("%d",*p);
}