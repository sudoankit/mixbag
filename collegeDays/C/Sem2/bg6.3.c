#include<stdio.h>
main(){
	int i=2,n,sum=0;
	int usr_res;
	printf("Which control statement do you want to use for looping the program? \n");
	printf("1.while \t 2.do-while \t 3.for \n");
	scanf("%d",&usr_res);


	if(usr_res == 1){
		//while statement loop//

		while(i < 100){
			sum = sum + i;
			i = i+ 3;
		}
		printf("The value of sum is %d (using while loop) \n",sum);

	}

	if(usr_res == 2){
	       //do while loop/

	       do {
			sum = sum +i;
			i = i +3;
		}while(i <100);

		printf("The value of sum is %d (using do-while loop) \n",sum);

	}

	if(usr_res == 3){

	      for(i = 2; i < 100; i=i+3){
		sum = sum + i;
	      }
	      printf("The value of sum is %d (using for loop) \n",sum);
	   }
}
