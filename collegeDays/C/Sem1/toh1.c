
#include <stdio.h>

void toh(int,char,char,char);

void toh(int n,char frompeg,char topeg,char auxpeg)
	{ 
	  if(n==1)
	    { printf("\nMove disk 1 from peg %c to peg %c \n",frompeg,topeg);
	      return;
	    }
	  toh(n-1,frompeg,auxpeg,topeg);
	  
	  printf("\nMove disk %d from peg %c to peg %c",n,frompeg,topeg);
	
	  toh(n-1,auxpeg,topeg,frompeg);
	}
main()
	{ int n;
	  printf("Enter the number of disks : ");
	  scanf("%d",&n);
	  printf("The Tower of Hanoi involves the moves :\n\n");
	  toh(n,'A','C','B');
	  return 0;
	}

