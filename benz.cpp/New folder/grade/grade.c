#include <stdio.h>
int main()
{

    // โปรแกรมตัดเกรด ข้างล่างนี้จะเป็นแบบ รวมคะแนน 3 ส่วน
    // น่าจะเป็น (คะแนนเก็บ + คะแนนสอบกลางภาค + คะแนนสอบปลายภาค)
    // เกณฑ์ในการตัดเกรดถ้าไม่ให้มาก็น่าจะตัดเกรดแบบอิงเกณฑ์ปกติ A : 80  B+ : 75  ประมาณนี้

    int a=0,b=0,c=0,sum=0;

    scanf("%d%d%d",&a,&b,&c);
    if (a>=0 && a<=30 && b>=0 && b<=30 && c>=0 && c<=40 )
    {
        sum = a+b+c;
        if (sum >=80 && sum <= 100)
        {
            printf("A");
        }
        else if (sum >= 75)
        {
            printf("B+");
        }
        else if (sum >= 70)
        {
            printf("B");
        }
        else if (sum >= 65)
        {
            printf("C+");
        }
        else if (sum >= 60)
        {
            printf("C");
        }
        else if (sum >= 55)
        {
            printf("D+");
        }
        else if (sum >= 50)
        {
            printf("D");
        }
        else if (sum <= 49 && sum >= 0)
        {
            printf("F");
        }
    }
    return 0;
}
