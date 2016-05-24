#include <stdio.h>
#define SIZE 10

main()
{
	int a[SIZE]={5,3,2,6,1,7,4,9,8,11};
	int i,x,n,pos;
	n=SIZE;
	printf("original numbers:\n");
	for(i=0;i<n;i++)
		printf("%3d",a[i]);
	printf("\nplease input x:");
	scanf("%d",&x);
	for(pos=0;pos<n;pos++)
		if(a[pos]==x)
		   break;
	if(pos<n)
	{
		for(i=pos;i<n-1;i++)
			a[i]=a[i+1];
		n=n-1;
		printf("numbers after delete:\n");
		for(i=0;i<n;i++)
			printf("%3d",a[i]);
	}
	else
		printf("%d nonentity\n",x);
}