#include<stdio.h>

int main()
{
   int i,j;
   printf("Started...\n");
   
   for(i=1;i<=10;i++)
   {
      if(i%3==0)
      continue;
      printf("%d ",i*i);
   }
   
   switch(i)
   {
      case 10:
      printf("hello");
      // continue; //can not given inside switch statement
      case 20:
      printf("world");
      break;
   }
   return 0;
}

//continue is a jump statement that takes control to next iteration of the loop
//in this case, it will skip the current iteration and continue with the next iteration of the loop
//takes control to next iteration of the loop

//continue can be given inside (for, while,do while) in loop only

