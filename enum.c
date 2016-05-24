main()
{
	enum color {red,yellow,blue,white,black};
	enum color m,n,k,pri;
	int total,loop;
	total=0;
	for(m=red;m<=black;m++)
	{
		for(n=red;n<=black;n++)
			if(m!=n)
		    {
			    for(k=red;k<=black;k++)
					if((k!=m)&&(k!=n))
				    {
					    total=total+1;
						printf("%-4d",total);
						for(loop=1;loop<=3;loop++)
						{
							switch(loop)
							{
								case 1:pri=m;break;
								case 2:pri=n;break;
								case 3:pri=k;break;
								default:break;
							}
							switch(pri)
							{
								case red:printf("%-10s","red");break;
								case yellow:printf("%-10s","yellow");break;
								case blue:printf("%-10s","blue");break;
								case white:printf("%-10s","white");break;
								case black:printf("%-10s","black");break;
								default:break;
							}
							printf("\n");
						}
					}
					printf("\ntotal:%5d\n",total);
			}
	}
}