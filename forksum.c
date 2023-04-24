#include<unistd.h>
#include<stdio.h>
int main()
{
int n,f,i,sum=0;
printf("enter number of elements");
scanf("%d",&n);
int a[n];
printf("enter numbers");
for(int i=0;i<n;i++)
scanf("%d",&a[i]);
f=fork();
if(f!=0)
{
printf("%d\t",a[i]);
}
else
{
printf("\nchild process");
for(int i=0;i<n;i++)
{
sum+= a[i];
}
printf("\n sum is %d",sum);
}
return 0;
}
