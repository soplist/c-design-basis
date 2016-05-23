main()
{
   int r;
   float s;
   for(r=1;r<=10;r++)
   {
	   s=3.14*r*r;
	   printf("r=%d s=%8.2f\n",r,s);
	   if(s>100)
		   break;
   }
}