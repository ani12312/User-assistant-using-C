#include<stdio.h>
void Toh(int,char,char,char);
void  towerofhanoi()
{
    int e;
    printf("Enter the number of disks :");
    scanf("%d",&e);
    printf("\n");
    Toh(e,'A','B','C');
}
void Toh(int n,char Beg,char Aux,char End)
{
    if(n>=1){
            Toh(n-1,Beg,End,Aux);
            printf("%d Disk move %c to %c\n",n,Beg,End);
            Toh(n-1,Aux,Beg,End);
}
}
