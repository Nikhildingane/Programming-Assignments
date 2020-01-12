#include<stdio.h>
#include<fcntl.h>
#define BLOCKSIZE 1024

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   CountWhite
//  Input       :   character address
//  Output      :   integer
//  Description :   count white spaces from file
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountWhite(char FName[])
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
            if(buffer[i]==' ')
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
    printf("Enter the file name:\n");
    scanf("%s",FileName);
    iRet=CountWhite(FileName);
    printf("\nNumber of white spaces is:\n%d",iRet);
    return 0;                       // return to operating system
}


