main()
{
   int men=0,women,children;
   while(men++<9)
   {
	   women=0;
	   while(women++<12)
	   {
		   children=36-women-men;
		   if(4*men+3*women+children/2==36)
		   {
			   printf("men is %d\n",men);
			   printf("women is %d\n",women);
			   printf("children is %d\n",children);
		   }
	   }
   }
}