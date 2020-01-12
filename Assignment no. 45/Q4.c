//Program which accept file name from user and display size of file

#include<stdio.h>
#include<fcntl.h>

int main()
{
    int fd=0,iCnt=0;
    char name[20]={'\0'};
    char content[100]={'\0'};

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
        while(content[iCnt]!='\0')
        {
            iCnt++;
        }
        printf("Size of file is : \n%d",iCnt);
    }

    close(fd);

    return 0;
}
