main()
{
	float average(float x,float y,float z);
	float ave,a[3]={89.0,76.4,95.6};
	ave=average(a[0],a[1],a[2]);
	printf("average=%5.2f",ave);
}

float average(float x,float y,float z)
{
    return ((x+y+z)/3.0);
}