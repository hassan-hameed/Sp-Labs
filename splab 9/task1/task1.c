#include<fcntl.h>
#include<stdio.h> 
int main()
{
char arr[1024];
int fd1 = open("/etc/passwd",O_RDONLY);
int fd2 =dup(fd1);
int n;
	for( ; ; )
	{
		n= read(fd2,arr,1023);
		if(n<=0){
			close(fd1);
			close(fd2);
			return 0;
		}		
	write(1,arr,n);
	}
return 0;
}

