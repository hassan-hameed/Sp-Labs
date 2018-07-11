#include<fcntl.h>
int main()
{	
	char buff[1024]
	int fd1 = open("ErrFile.txt",O_WONLY);
	char arr[]="error";
	if(fd1==-1)
	{
		int fd2= open("ErrFile.txt", O_CREAT | OWRONLY | ORDONLY);
		write( fd2, arr, 6);
	}
	else
	{
		int n;
		for(;;)
		{
			n= read(fd1 , buff , 1023);
			if( n<=0)
				{
					close(fd1);
					retun 0;
				}
				write( fd1, buff ,n);
				
		}
	}
}
