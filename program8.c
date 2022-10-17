#include<stdio.h>
#include<dirent.h>
main(int argc,char *argv[])
{
	struct dirent * node;
	DIR *fd;
	if(argc==2)
	{
		fd=opendir(argv[1]);
		printf("return value of open directory : %p\n",fd);
		while(node=readdir(fd))
		{
			printf("%s\t",node->d_name);
		}
		closedir(fd);
		printf("\n");
	}
	else
	{
		printf("give proper no.of argments\n");
	}
}

