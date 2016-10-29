#include <stdio.h>

int main(int argc, char** argv)
{
int x;
int b=0;
int sp=0;
int i=0;
double middleAlg;
printf("Enter size of array: ");
scanf("%d", &x);
int a[x];
    while(i<x)
    {
        scanf("%d", &a[i]);
        if (a[i]>0)
        {
            sp=sp+a[i];
            b++;
        }
        i++;
    }
    middleAlg=sp/b;
    printf("%f", middleAlg);
    return 0;
}
