#include<stdio.h>
#include<math.h>
int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int a[n];
    int i,j;
    int sum=0;
    int c;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            c=a[i]+a[j];
     if(c%k==0)
     {
         sum=sum+1;
     }
}
    }
    printf("%d",sum);
}
