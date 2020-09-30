#include<stdio.h>
int main()
{
int i,n;
printf("Enter the number of Elements :- ");
scanf("%d",&n);

int a[n];

printf("\nEnter the numbers :- ");
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
printf("\n");

for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
int temp,j=0;

for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
printf("\n");
for(i=0;i<n;i++)
{
    printf("%d ",a[i]);
}
    return 0;
}
