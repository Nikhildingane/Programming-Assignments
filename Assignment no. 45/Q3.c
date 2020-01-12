//Program which accept file name from user and read all data from that file and display contents on screen
#include<stdio.h>
#include<fcntl.h>

int main()
{
    char name[20]={'\0'};
    char content[100]={'\0'};
    int fd=0;
    printf("Enter the file name:\n");
    scanf("%s",name);

    fd=open(name,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }
    printf("File successfully opened\n");
    if(read(fd,content,sizeof(content))<0)
    {
        printf("Unable to read file");
    }
    else
    {
        printf("Files content is :\n%s",content);
    }
    close(fd);
    return 0;
}
