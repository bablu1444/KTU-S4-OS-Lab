#include <unistd.h>
#include <stdio.h>

int main()
{
 int x=fork();
 if (x==0)
  printf("child process created\n");
  printf("%d");
 else
  printf("parent process created\n");
 return 0; 
}
