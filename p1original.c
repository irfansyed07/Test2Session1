#include <stdio.h>
#include <math.h>
void input(float *x1, float*y1, float *x2, float *y2)
{
    printf("enter the coordinates x1,y1,x2,y2");
    scanf("%f %f %f %f", x1, y1, x2, y2);
}
void distance(float x1, float y1, float x2, float y2, float *area)
{
    float z;
    z = ((x2-x1)(x2-x1)+(y2-y1)(y2-y1));
    *area = sqrt(z);
}
void output(float x1, float y1, float x2, float y2, float area)
{
    printf("the distance between the coordinates %.1f %.1f and %.1f %.1f is %.1f",x1,y1,x2,y2,area);
}
int main()
{
    float x1,x2,y1,y2,area;
    input(&x1,&y1,&x2,&y2);
    distance(x1,x2,y1,y2,&area);
    output(x1,y1,x2,y2,area);
    return 0;
}