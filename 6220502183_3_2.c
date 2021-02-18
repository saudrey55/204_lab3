#include<stdio.h>

int main()
{
    int a,i,b[48]={0},d,c,max;

    scanf("%d",&a);

    for ( i = 0; i < a; i++)
    {
        scanf("%d %d",&d,&c);

        b[d-1]+=c;
    }
    max=0;
    for ( i = 1; i < 48; i++)
    {
        if (b[max]<b[i])
        {
            max=i;
        }
        
    }
    
    printf("%d %d",max+1,b[max]);
}