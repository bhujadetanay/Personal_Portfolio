#include <stdio.h>
#include <math.h>
float sine(float degree)
{
    float radian;
    radian = (degree) * (3.1415926536 / 180);
    float value = sin(radian);
    return value;
}
int main()
{

    float f1, f2, f3;
    float d1, d2, d3;
    printf("-------------PROGRAM BASED ON LAMI'S THEOREM-------------\n");
    int operator;
initial:
    printf("Enter 1 if you want calculation of forces \nEnter 2 of you want calcution of angles : ");
    scanf("%d", &operator);
    printf("\n\n\n\n");
    switch (operator)
    {
    case 1:
        printf("Enter force which is given : ");
        scanf("%f", &f3);
        printf("Enter angle opposite to force 1 : ");
        scanf("%f", &d1);
        printf("Enter angle opposite to force 2 : ");
        scanf("%f", &d2);
        printf("Enter the angle opposite to the given force : ");
        scanf("%f", &d3);
        float three_sixty = d1 + d2 + d3;
        if (three_sixty != 360)
        {
            printf("invalid shit");
            return 0;
        }

        float f3dsin;
        float s3, s2, s1;
        s3 = sine(d3);
        s2 = sine(d2);
        s1 = sine(d1);
        f3dsin = f3 / s3;
        f2 = f3dsin * s2;
        f1 = f3dsin * s1;
        printf("Force 1 = %f\nForce 2 = %f", f1, f2);
        break;
    case 2:
        printf("Enter force number 1 : ");
        scanf("%f", &f1);
        printf("Enter force number 2 : ");
        scanf("%f", &f2);
        printf("Enter force number 3 : ");
        scanf("%f", &f3);
        printf("Enter degree opposite of force 2 : ");
        scanf("%f", &d2);
        float ss2;
        ss2 = sine(d2);
        float f2dsin = f2 / ss2;
        float sin1 = f1 / f2dsin;
        float arcs1 = asin(sin1);

        printf("\n\n\nthe angle opposite of F1 is %f", arcs1 * 57.296 * 2);
        printf("\nand the angle opposite to F3 is %f ", (360 - (arcs1 * 57.296 * 2) - d2));
        break;
    }
switch_wala_label:
    char switches;
    printf("\nenter q to quit and r to restart : ");
    scanf("%c", &switches);
    if (switches == 'q')
    {
        return 0;
    }
    else if (switches == 'r')
    {
        goto initial;
    }
    goto switch_wala_label;

    return 0;
}
