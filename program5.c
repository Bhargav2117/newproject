#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/stat.h>
main()
{
	int x,y;
	x=mkdir("bhargav",0664);
	if(x<0)
	{
		printf("creation of directory fails\n");
		exit(1);
	}
	printf("created directory return value : %d\n",x);
	y=rmdir("bhargav");
	if(y<0)
	{
		printf("remove directory fails\n");
		exit(2);
	}
	printf("removed directory return value : %d\n",y);
}

