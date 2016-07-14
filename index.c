#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i,n,ind;
clrscr();
printf("Array size");
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the index");
scanf("%d",&ind);
for(i=1;i<n;i++)
{
if(a[i]==ind)
{
printf("%d",a[i]);
}
}
getch();
}
