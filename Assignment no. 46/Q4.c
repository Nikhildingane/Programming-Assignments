#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountChar
//  Input       :   character address,character
//  Output      :   integer
//  Description :   count frequency of character from file
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountChar(char FName[],char Ch)
{
    int i=0,iCnt=0,fd=0,iRet=0;
    char buffer[BLOCKSIZE];

    if(FName==NULL)
    {
        printf("File name is null");
        return -2;
    }

    fd=open(FName,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }

    while((iRet=read(fd,buffer,BLOCKSIZE))!=0)
    {
        for(i=0;i<iRet;i++)
        {
            if(buffer[i]==Ch)
            {
                iCnt++;
            }
        }
    }
    close(fd);
    return iCnt;
}

//Entry point function : main()
int main()
{
    char FileName[30];
    int iRet=0;
    char cValue;

    printf("Enter the file name:\n");
    scanf("%s",FileName);

    fflush(stdin);
    printf("Enter character:\n");
    scanf("%c",&cValue);

    iRet=CountChar(FileName,cValue);

    printf("\nFrequency is :\n%d",iRet);
    return 0;                       // return to operating system
}


