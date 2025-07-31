#include<stdio.h>

int main()
{

int ar[10],se;
int found=0;

printf("Enter 10 values");
for(int i=0;i<10;i++)
{
scanf("%d",&ar[i]);
}

printf("Enter ele to search");
scanf("%d",&se);

for(int i=0;i<10;i++)
{
	if(ar[i]==se)
	{
	found=1;
	printf("Found at position %d",i+1);
    break;
	}

}

if(found==0)
{
	printf("Not found");
}

return 0;
}
