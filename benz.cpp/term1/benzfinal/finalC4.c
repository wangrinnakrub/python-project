#include<stdio.h>

float area=0;

void triangle()
{
    float h,l;
    printf("Input high : ");
    scanf("%f",&h);
    printf("Input low : ");
    scanf("%f",&l);

    area = 0.5*h*l;
    printf("Area of triangle = %.2f",area);

}
void square()
{
    float fs,ss;
    printf("Input first side : ");
    scanf("%f",&fs);
    printf("Input second side : ");
    scanf("%f",&ss);

    area = fs*ss;
    printf("Area of square = %.2f",area);

}
void circle()
{
    float r;
    printf("Input radius : ");
    scanf("%f",&r);

    area = 3.14*r*r;
    printf("Area of circle = %.2f",area);

}
int main()
{
    char name[100],triangle1[100]="triangle",square1[100]="square",circle1[100]="circle";
    printf("Please choose : ");
    scanf("%s",&name);
    if (strcmp(name,triangle1)==0)
    {
        triangle();
    }
    if (strcmp(name,square1)==0)
    {
        square();
    }
    if (strcmp(name,circle1)==0)
    {
        circle();
    }

    return 0;
    
}