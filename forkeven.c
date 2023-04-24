#include <unistd.h>
#include <stdio.h>

int main()
{
 int n,f,sum=0;
 printf("Enter no of elements: ");
 scanf("%d",&n);
 int a[n];
 printf("Enter the elements: \n");
 for(int i=0;i<n;i++)
  scanf("%d",&a[i]);
 f=fork();
 if(f!=0)
 {
  printf("parent process\n");
  for(int i=0;i<n;i++)
  {
   if (a[i]%2==0)
    sum+=a[i]; 
  }
  printf("sum of even number is %d\n",sum);
 }
 else
 {
  printf("\nchild process\n");
  for(int i=0;i<n;i++)
  {
   if (a[i]%2!=0)
    sum+=a[i]; 
  }
  printf("sum of odd number is %d\n",sum);
 }
 return 0; 
}
