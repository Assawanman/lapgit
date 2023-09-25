#include <stdio.h>
int main()
{
	int base,round,num=0;
	printf("Enter my base:");		scanf("%d",&base);
    printf("Enter round:");			scanf("%d",&round);
    do{
	    num++;
		printf("\n%dx%d=%d",base,num,base*num);
	}while(num<=round);
    return 0;
}
