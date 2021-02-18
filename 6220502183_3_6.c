#include<stdio.h>
#include<string.h>

int funtion2(int x)
{
    int i;
    char a[555],z[555];
    itoa(x,a,10);

    strcpy(z,a);
    strrev(z);

    if (!strcmp(z,a))
    {
        return 1;
    }
    return 0;
    
}
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
        if (funtion (i)&&funtion2(i))
        {
            max=i;
            break;
        }
    }
    min=max;
     for ( i = a; i>1 ; i--)
    {
        if (funtion (i)&&funtion2(i))
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