#include<fcntl.h>
int main()
{	
	char buff[1024];
	int fd1 = open("ErrFile.txt",O_WRONLY);
	char arr[]="error";
	if(fd1==-1)
	{
		int fd2= open("ErrFile2.txt", O_CREAT | O_WRONLY | O_RDONLY);
		write( fd2, arr, 6);
	}
	else
	{
		int n;
		int fd2= open("ErrFile2.txt", O_CREAT | O_WRONLY | O_RDONLY);
		for(;;)
		{
			n= read(fd1 , buff , 1023);
			if( n<=0)
				{
					close(fd1);
					return 0;
				}
				write( fd2, buff , n);
				
		}
	}
}
