//Program  which accept file name from user and open that file in read mode

#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Arr[30]={'\0'};
    int fd=0;

    printf("Enter file name:\n");
    scanf("%s",Arr);

    fd=open(Arr,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }
    printf("file successfully opened with fd %d",fd);
    close(fd);
    return 0;                       // return to operating system
}

