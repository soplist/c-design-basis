#define PI 3.1415926
#define S(r) PI*r*r

main()
{
   float a,area;
   a=4.8;
   area=S(a);
   printf("r=%f\narea=%f\n",a,area);
}