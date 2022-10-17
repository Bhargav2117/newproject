#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
main()
{
	int ret;
	ret=open("bhargav.txt",O_CREAT,0664);
	if(ret<0)
	{
		printf("create open file fails\n");
		exit(0);
	}
	printf("return value of open : %d\n",ret);
	close(ret);
}
