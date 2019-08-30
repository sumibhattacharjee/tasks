#include<stdio.h>
void disp(int *);

void show(int *);

void main()
{
    int i;
    int m[]={6,3,9,4,4,1};
    for(i=0;i<=6;i++)
    {
        disp(&m[i]);
    }
}
void disp(int *n)
{
    show(&n);
}
void show(int *m)
{
    printf("%d", *m);
}
