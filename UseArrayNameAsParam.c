main()
{
	float average(float x[3]);
	float ave,a[3]={89.0,76.4,95.6};
	ave=average(a);
	printf("average=%5.2f",ave);
}

float average(float x[3])
{
    return ((x[0]+x[1]+x[2])/3.0);
}