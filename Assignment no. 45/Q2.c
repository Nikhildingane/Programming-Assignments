//Program which accept file name from user and create that file
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char Arr[50]={'\0'};
    int fd=0;

    printf("Enter file name:\n");
    scanf("%s",Arr);

    fd=creat(Arr,O_CREAT);

    if(fd==-1)
    {
        printf("Unable to create file");
        return -1;
    }
    printf("File successfully created");
    return 0;
}
