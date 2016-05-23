main()
{
   int m=1;
   long n=1;
   loop:if(m>10)
	      printf("n!=%ld\n");
        else
	    {
			n*=m;
			m++;
			goto loop;
		}
}