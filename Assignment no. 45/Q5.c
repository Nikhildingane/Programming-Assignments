// Program which accept file name from user and one string from user. Write that string at the end of file

#include<stdio.h>
#include<fcntl.h>
#include<string.h>

int main()
{
    int fd=0;
    char name[30]={'\0'};
    char content[100]={'\0'};

    printf("Enter the file name:\n");
    scanf("%s",name);

    fd=open(name,O_RDWR|O_APPEND,0777);

    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }

    printf("File successfully opened\n");

    printf("Enter string to write on file:\n");
    fflush(stdin);
    scanf("%[^'\n']s",content);

    fflush(stdin);
    if(write(fd,content,strlen(content))<0)
    {
        printf("Unable to write contents on file");
    }
    else
    {
        printf("Content successfully written on file");
    }
    close(fd);
    return 0;
}
