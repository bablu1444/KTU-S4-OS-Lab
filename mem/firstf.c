#include<stdio.h>
  void main()
{
int no_of_process,no_of_blocks,block[10],process[10],allocation[10],flag[10],i,j;
printf("enter no of blocks");
scanf("%d",&no_of_blocks);
printf("enter size of each block");
for(i=0;i<no_of_blocks;i++)
{
scanf("%d",&block[i]);
}
printf("enter no of process");
scanf("%d",&no_of_process);
printf("enter size of each process");
for(i=0;i<no_of_process;i++)
{
scanf("%d",&process[i]);
flag[i]=0;
}
//insert piece of code for first case check

for(i=0;i<no_of_process;i++)
{
for(j=0;j<no_of_blocks;j++)
{
if(block[j]>=process[i])
{
allocation[i]=j+1;
block[j]=block[j]-process[i];
flag[i]=1;
break;
}
}
}
printf("\n after allocation\n\n");
printf("\n");
for(i=0;i<no_of_process;i++)
{
if(flag[i]==1)
printf("%d\t\t%d\t\t%d\n",i+1,process[i],allocation[i]);
else
{
  printf("%d\t\t%d",i+1,process[i]);
  printf("\tcan't be allocated\n");
}
}
}




