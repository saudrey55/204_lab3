#include<stdio.h>

int funtion (int x)
{
    int i;
    if (x==1)
    {
        return 0;
    }
    
    for ( i = 2; i < x; i++)
    {
        if (x%i==0)
        {
           return x/i;
        }
    }
    return 1;
}
int main()
{
    int a,ch,i,z;
    scanf("%d",&a);
    z=a;
    ch=1;
    for ( i = 0; i < 3; i++)
    {
        z=funtion(z);
    }
    if (z==1)
    {
        printf("%d is a Lucky Number.",a);
    }
    else
        printf("%d is not a Lucky Number.",a);
    
    
}