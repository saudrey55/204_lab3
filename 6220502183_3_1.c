#include<stdio.h>

int main()
{
  int n[5][4],i,j,a[20],max,z;

  for ( i = 0; i <5; i++)
  {
    for ( j = 0; j < 4; j++)
      {
          scanf("%d",&n[i][j]);
          a[i]=a[i]+n[i][j];
          if(a[i]>max)
          {
           max =a[i];
            z=i;
          }
      }
  }
 printf("%d %d",z+1,max);
  
}