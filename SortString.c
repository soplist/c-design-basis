#include <string.h>

main()
{
    char *name[]={"Visual Basic","Asp.net","Happy","Internet","Outlook Express","Chinese"};
	int i,j,k,n=6;
	char *temp;
	for(i=0;i<n-1;i++)
	{
		k=i;
		for(j=i+1;j<n;j++)
			if(strcmp(name[k],name[j])<0)
			    k=j;
		if(k!=i)
		{
			temp=name[i];
			name[i]=name[k];
			name[k]=temp;
		}
	}
	for(i=0;i<n;i++)
		printf("%s\n",name[i]);
}