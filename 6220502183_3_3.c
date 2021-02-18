#include<stdio.h>

int main()
{
    int k,i=2;

    scanf("%d",&k);
    if (k==1)
    {
        printf("1\n");
    }
    while (k !=1)
    {
        while(k%i==0)
        {
            printf("%d\n",i);
            k=k/i;
        }
        i++;
    }
    
    printf("0");
    
}