#include<stdio.h>
#include<conio.h>
int main()
{
    int a[50],b[50],c[50],i,n;
    printf("Enter the size of array :\t");
    scanf("%d",&n);
    printf("\nEnter %d elements in first array :\n",n);
    for(i=1;i=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter the %d elements in second array :\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=1;i<=n;i++)
    {
        c[i]=a[i]+b[i];
    }
    printf("\nSum of these two array is :\n");
    for(i=1;i<=n;i++)
    {
        printf("%d ",c[i]);
    }
    getch();
}
