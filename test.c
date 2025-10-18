#include <stdio.h>
int main() 
{
    int a[10]={5,3,35,2,4,6,9,32,25,54};
    int i,j,temp;
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    for(i=0;i<10;i++)
    printf("%d ",a[i]);
    return 0;
}