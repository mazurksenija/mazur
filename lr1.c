int _tmain(int argc, _TCHAR* argv[])
{   int k,l;
	  printf("Input k:");
	  scanf("%d", &k);
	  printf("Input l:");
	  scanf("%d", &l);
	  if(k%l==0){

	   printf("  %d",k);
	   printf(" |");
	   printf("%d ",l);

	   printf("\n -%d |---",k);
	   printf("\n  ---");   printf("  %d ",k/l);
	   printf("\n   0");
	   }
	  else     printf("Uncorrect input! :(");
	  getch();
	return 0;

}
