// #include<stdio.h>

// int main()
// {
//      /*ให้เขียนโปรแกรมรับค่าจำนวนเหรียญบาท เหรียญห้าบาท เหรียญสิบบาท และแสดงผลออกมาเป็นจำนวนเงินทั้งหมด*/

//     int num1 = 0;
//     int num5 = 0;
//     int num10 = 0;
//     int sum = 0;

//     printf("Please enter your 1 bath coin : ");
//     scanf(" %d",&num1);
//     printf("Please enter your 5 bath coin : ");
//     scanf(" %d",&num5);
//     printf("Please enter your 10 bath coin : ");
//     scanf(" %d",&num10);
//     sum = num1 + ( num5 * 5 ) + ( num10 * 10 );
//     printf("%d",sum);

//     return 0;
// }

#include <stdio.h>

int main(){

    // เขียนโปรแกรมรับเลขจำนวนเต็ม 10 ตัว แล้วหาว่าเลขที่รับมา มีค่าน้อยกว่าหรือเท่ากับ 50 หรือไม่
    // desciption ถ้าน้อยกว่าหรือเท่ากับ 50 ให้ปริ้นท์ข้อความ น้อยกว่าหรือเท่ากับ 50 ถ้ามากกว่า 50 ให้ปริ้นท์เลขตัวนั้นออกมา

    int num;
    for (int i = 1; i <= 10; i++)
    {
        printf("Enter num %d : ",i);
        scanf("%d",&num);

        if(num>50){
            printf("Your number is %d\n",num);
        }else
        {
            printf("Your number is equal or below 50\n");
        }
    }

    return 0;

}
