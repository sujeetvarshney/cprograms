#include<stdio.h>

int main()
{
   int i,j;
   printf("Started...\n");
   
   for(j=1;j<=3;j++)
   {
   for(i=1;i<=10;i++)
   {
      if(i==6)
      break;
      printf("%d ",i*i);
   }
   if(j==2)
   break;
   printf("\n");
}

   return 0;
}

//break is a jump statement that takes control out of the loop
//in this case, it will stop the loop when i is 6 
//takes control of the loop

//break can be given inside (for, while,do while, switch case)

