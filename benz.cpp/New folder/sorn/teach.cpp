#include<iostream>


using namespace std;

main()
{
       // วิธีประกาศตัวแปร

       // pattern   ประเภทตัวแปร  ชื่อตัวแปร  =  ค่าของตัวแปร  ;  ปล.ชื่อตัวแปรจะเป็นอะไรก็ได้
                        int         x     =       0      ;  // แต่ต้องขึ้นต้นด้วยตัวอักษร หรือ _ (underscore)
                        int b = 0;
                        int name = 0;
                        int avadakedafra = 0;
                        int num1 = 0 , num2 = 0 ;           // ประกาศหลายตัวแปรพร้อมกันใช้ , (comma)

        /*
              ! อย่าลืมใส่  ;  ทุกครั้งหลังจบคำสั่ง
        */


        // int (integer) คือ ประเภทของ จำนวนเต็ม
           int number = 0;
        // long คือ ประเภทของ จำนวนเต็ม เหมือน int
           long num3 = 15;

        // float คือ ประเภทของ จำนวนจริง
          float sum = 85.758;
        // double คือ ประเภทของ จำนวนจริง เหมือน float
          double navy = 10.5;

        // char (character) คือ ประเภทของ ตัวอักษร ตัวเลข หรือ สัญลักษณ์ 1 ตัว เหมือน รหัส ASCII ex 'A' 'a' '1' '+' '-' '*' '/'
          char first = 'A';
          char Second = 'a';
          char Third = '*';
          char teerapat = '1';
          

       // string คือ ประเภทของ สายตัวอักษร หรือ ข้อความที่มีมากกว่า 1 ตัวอักษร
       // char ชื่อตัวแปร [จำนวนที่รับได้]
          char text[100] = "HelloSawaddekub";


        // bool (boolean) คือ ประเภทของ ค่าความจริง มี จริง(1) หรือ เท็จ(0)
          bool wasdwdafaf = 0;
          bool naemnameamnenma = 1;



        // Input & Output

        // Input
        // ในการรับค่านั้นเราจะใช้ฟังก์ชัน scanf ในการรับค่า โดยการรับค่าเรามักจะหมายถึงการรับค่าจากคีย์บอร์ด
        //           scanf("ประเภทของตัวแปรที่รับมา", &ชื่อตัวแปร)
        //           ตัวอย่าง
                     int number1 = 0, number2=0;
                     scanf("%d%d",&number1,&number2);

        // รับค่าตัวเลข ใช้ %d
                int num = 0;
                scanf("%d" ,&num);

                long num4 = 0;
                scanf("%d",&num4);

        // รับค่าจำนวนจริง ใช้ %f

                float num5 = 0;
                scanf("%f",&num5);

                double num6 = 0;
                scanf("%f",&num6);


        // รับค่า char ใช้ %c

                char nam;
                scanf("%c",&nam);

        // รับค่า string ใช้ %s

                char oo[10];
                scanf("%s",&oo);



        // Output
        // ในการแสดงผลในภาษา C ฟังก์ชันที่ใช้คือฟังก์ชัน printf ซึ่งเป็นฟังก์ชันที่สามารถแสดงข้อมูลประเภทต่างๆออกทางหน้าจอภาพได้
        //      printf("ข้อความ");
                printf("Hello");

        // แสดงค่าตัวเลข ใช้ %d
                int num8 = 0;
                printf("%d",num8);

                printf("Your num8 is %d baht",num8);
        //      สมมุติ num8 เป็น 300 ก็จะเป็น
        //      Your num8 is 300 baht

                long num9 = 0;
                printf("%d",num4);

        // แสดงค่าจำนวนจริง ใช้ %f

                float num10 = 0;
                printf("%f",num5);

                double num11 = 0;
                printf("%f",num6);

        // %.3f คือ print ทศนิยม 3 ตำแหน่ง
                double kantaphit = 14.5675;
                printf("%.3f",kantaphit);

        // แสดงค่า char ใช้ %c

                char nam1=0;
                printf("%c",nam);

        // แสดงค่า string ใช้ %s

                char texttt[100];
                printf("%s",texttt);




}
