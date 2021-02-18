#include<stdio.h>

int funtion (int x)
{
    int i;

    for ( i = 2; i < x; i++)
    {
        if (x%i==0)
        {
           return 0;
        }
    }
    return 1;
}
int main()
{
    int a,ch,max,min,i;
    scanf("%d",&a);
    
    for ( i = a; ; i++)
    {
        if (funtion (i))
        {
            max=i;
            break;
        }
    }
    min=max;
     for ( i = a; i>1 ; i--)
    {
        if (funtion (i))
        {
            min=i;
            break;
        }
    }
    if (a-min>max-a)
    {
        printf("%d",max);
    }
    else
    printf("%d",min);
}