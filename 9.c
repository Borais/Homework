#include <stdio.h>
#include <stdlib.h>

int main()
{
int x;
scanf("%d" ,&x);
float a[x];
int i;
float SrAr=0;
float s1=0;
float k=0;
for( i=0; i<x; i++)
{
printf("a[%d]=" , i);
scanf("%f", &a[i]);
if (a[i]>0)
{s1 = s1+a[i];
k++;}
}
SrAr = s1/k;
printf("%f \n", s1);
printf("%f \n", k);
printf("%f \n", SrAr);
return 0;
}
