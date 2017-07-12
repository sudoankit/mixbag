#include<stdio.h>
#define SIZE 40
main()
{

	struct tt {
	int foo;
	char bt[SIZE];
        
	};

	struct tt po;
        po.foo = 4;
	po.bt = "yolo";

	printf("YOLO %s",po.bt);

}
