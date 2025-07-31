#include<stdio.h>

int main()
{

int ar[10];
int found=0,se;

printf("Enter 10 values in sorted order\n");
for(int i=0;i<10;i++)
{
scanf("%d",&ar[i]);
}

printf("Enter ele to search");
scanf("%d",&se);

int f=0,L=9,mid;

while(f<=L)
{
    mid=(f+L)/2;
    if(ar[mid]==se)
    {
    found=1;
    printf("Found at position %d",mid+1);
    break;
    }
    else if(ar[mid]<se)
    {
    f=mid+1;
    }
    else
    {
    L=mid-1;
    }
}

if(found==0)
{
	printf("Not found");
}

return 0;
}