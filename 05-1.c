#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
int main() {
	int fd;
	size_t size;
	char string[] = "Privet mir";
	(void)umask(0);
	if((fd = open("mylife", O_WRONLY | O_CREAT, 0666)) < 0){
		printf("Cant\'t open file\n");
		exit(-1);
	}
	size = write(fd, string, 10);
	if(size != 10);{
		printf("Can\'t write all string\n");
		exit(-1);
	}
	if(close(fd) < 0){
		printf("Can\'t close file\n");
	}
	return 0;
}
