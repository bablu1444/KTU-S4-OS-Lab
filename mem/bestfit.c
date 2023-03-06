#include <stdio.h>
int main()
{
    int noofprocess, noofblocks, block[10], process[10], allocation[10], flag[10], min=99999, i,j;
    printf("enter the number of block");
    scanf ("%d",&noofblocks);
    printf("Enter the size of block");    
    for( i=0;i<noofblocks;i++)
    { 
        scanf("%d",&block[i]);
    }
    printf("Enter number of process");
    scanf("%d",&noofprocess);
    printf("Enter size of process");
    for(i=0;i<noofprocess;i++)
    {
        scanf("%d",&process[i]);
        flag[i]=0;
    }

    for(i=0;i<noofprocess;i++)
    {
        for( j=0;i<noofblocks;j++)
        {
            if (block[j]=process[i])
            {
                allocation[i]=j+1;
                block[j]=block[j]-process[i];
                flag[i]=1;
                break;
            }
        }
    }

    printf("\n After allocation: \n");
    for(i=0;i<noofprocess;i++)
    {
        if(flag[i]==1)
        printf("%d\t\t%d\t\t%d\n",i=1,process[i], allocation[i]);
        else
        {
            printf("%d\t\t%d",i+1,process[i]);
            printf("\t cant be allocated\n");
        }
    }
}