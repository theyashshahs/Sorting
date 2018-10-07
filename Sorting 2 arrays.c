#include <stdio.h>
int main()
{
int n=0,m=0;
printf("Enter number of elements in array A :- ");
scanf("%d",&n);
int a[n];
int i=0,j=0;
printf("Enter the elements :- \n");

for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}

printf("Enter number of elements in array B :- ");
scanf("%d",&m);

int b[m];
int c[m+n];

printf("Enter the elements :- \n");
for(i=0;i<m;i++)
{
   scanf("%d",&b[i]);
}

int k=0;
    j=0;
for(i=0;i<=m+n;i++)
{
if(a[j]<b[k])
{
c[i]=a[j];
j++;
}
else if(a[j]>b[k])
{
c[i]=b[k];
k++;
}
else
{
    c[i]=a[j];
    i++;
    j++;
    c[i]=b[k];
    k++;
}
}
    printf("\n");
    for(i=0;i<m+n;i++)
{
    printf("%d ",c[i]);
}
    printf("\n");
}

