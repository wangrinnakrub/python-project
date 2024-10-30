#include <bits/stdc++.h>

int main()
{
    /* เขียนโปรแกรมรับจำนวนสินค้าและราคาสินค้า ถ้าซื้อน้อยกว่า 5 ชิ้น ลดราคา 8%
    ถ้าซื้อมากกว่าหรือเท่ากับ 5 ชิ้น ลดราคา 12% และแสดงผลราคาที่ต้องจ่ายหลังจากลดราคาแล้ว */

    int product = 0;
    double cost = 0, sum = 0;

    printf("Enter amount of your product = ");
    scanf("%d", &product);

    for (int i = 1; i <= product; i++)
    {
        printf("Enter your %d product cost = ", i);
        scanf("%lf", &cost);
        sum = sum + cost;
    }

    if (product < 5)
    {
        printf("You have to pay %.2lf baht", sum * 0.92);
    }
    else if (product >= 5)
    {
        printf("You have to pay %.2lf baht", sum * 0.88);
    }

    return 0;
}
