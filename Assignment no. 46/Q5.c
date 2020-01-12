#include<stdio.h>
#include<fcntl.h>
#include<malloc.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//  Name        :   DisplayN
//  Input       :   character address,integer
//  Output      :   none
//  Description :   display n numbers of byte from file
//  Author      :   Nikhil
//  Date        :   01/11/2019
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayN(char FName[],int iSize)
{
    int fd=0,iRet=0;
    char *buffer=NULL;

    if(FName==NULL)
    {
        printf("File name is null");
        return;
    }

    fd=open(FName,O_RDONLY);

    if(fd==-1)
    {
        printf("Unable to open file");
        return -1;
    }

    buffer=(char *)malloc(sizeof(char)*iSize);

    if((iRet=read(fd,buffer,iSize))>0)
    {
        write(1,buffer,iRet);
    }
    else
    {
        printf("Unable to read data");
    }
    close(fd);
}

//Entry point function : main()
int main()
{
    char FileName[30];
    int iRet=0;
    int iLength=0;

    printf("Enter the file name:\n");
    scanf("%s",FileName);

    fflush(stdin);
    printf("Enter the number of characters:\n");
    scanf("%d",&iLength);

    DisplayN(FileName,iLength);

    return 0;                       // return to operating system
}



