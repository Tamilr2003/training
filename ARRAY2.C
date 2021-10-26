#include<stdio.h>
#include<conio.h>
int a[2][2]={{1,2},{2,3}};
int i,j;
void main()
{
clrscr();
printf("%d\n",a[1][1]);
printf("%d",a[1][0]);

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
     printf("\narr [%d][%d]: ",i,j);
     scanf("\n%d",&a[i][j]);
    }
}




for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
     printf("%d ",a[i][j]);

    }
    printf("\n");
}
getch();
}

