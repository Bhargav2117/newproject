#include<stdio.h>
#include<signal.h>
#include<unistd.h>
void my_handler(int sig_num);
main()
{
	struct sigaction rm;
	rm.sa_handler=my_handler;
	rm.sa_flags=0;
	sigaction(SIGINT,&rm,0);
	while(1)
	{
		printf("%d\t ",getpid());
	}
}
void my_handler(int sig_num)
{
	printf("received signal is : %d\n",sig_num);
	sleep(2);
}
