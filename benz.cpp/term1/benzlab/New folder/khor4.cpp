#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main(void)
{
    int choice;
    float radius, area;
    float height, width;
    
    printf("Select Menu 1 or 2 : ");
    scanf("%d", &choice);
    if (choice == 1)
    {
        printf("Calculate circle area \n");
        printf("Enter Radius : ");
        scanf("%f", &radius);
        area = PI * radius * radius;
        printf("Circle Area = %f ", area);
    }
    else if (choice == 2)
    {
        printf("Calcualte square area \n");
        printf("Enter Width : ");
        scanf("%f", &width);
        printf("Enter Hight : ");
        scanf("%f", &height);
        area = width * height;
        printf("Square area = %f \n ", area);
    }
    else
    {
        printf("Select only 1 or 2 \n");
    }

    return (0);
}
