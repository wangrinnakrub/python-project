#include <bits/stdc++.h>

using namespace std;

main()
{
   //   1 ให้เขียนโปรแกรมรับข้อมูลตัวเลขจากผู้ใช้นำเข้าทางแป้นพิมพ์ ตัวเลขเป็นจำนวนจริง 2 จำนวน
   //     ให้เครื่องเปรียบเทียบเลขทั้งสอง เพื่อหาตัวที่น้อย แล้วนำมาแสดงออกทางจอภาพ 

   //        Output  : ตัวเลขที่น้อยกว่า

   //        Input   : num1 , num2 (จำนวนจริง 2 จำนวน) 

   //        Process : 1. START

   //                  2. print "Please input first number : "
   //                     input num1

   //                     print "Please input second number : "
   //                     input num2

   //                  3. if num1 < num2
   //                        print num1

   //                     if num2 < num1
   //                        print num2

   //                  4. END

   //   2 ให้ใส่ข้อมูลตัวเลขจำนวนเต็ม 2 จำนวนเข้าทางแป้นพิมพ์ แล้วมีรายการให้เลือก 3 อย่างคือ 
   //     รายการบวก รายการลบ รายการคูณ โดยผู้ใช้งานโปรแกรมสามารถเลือกรายการได้ตามต้องการ
   //     และให้แสดงผลลัพธ์ออกทางหน้าจอ

   //        Output  : ผลลัพ์ของการ + หรือ - หรือ x หรือ /

   //        Input   :  num1 , num2 (จำนวนเต็ม 2 จำนวน) , symbol(ตัวอักษร)

   //        Process : 1. START

   //                  2. print "Please input first number : "
   //                     input num1

   //                     print "Please input second number : "
   //                     input num2

   //                     print "Please input + or - or x or / : "
   //                     input symbol

   //                  3. if symbol = +
   //                     print num1 + num2

   //                     if symbol = -
   //                     print num1 - num2

   //                     if symbol = x
   //                     print num1 * num2

   //                     if symbol = /
   //                     print num1 / num2

   //                  4. END



   //        Output  : ผลลัพ์ของการ + หรือ - หรือ x หรือ /

   //        Input   :  num1 , num2 , num3 (จำนวนเต็ม 2 จำนวน)

   //        Process : 1. START

   //                  2. print "Please input first number : "
   //                     input num1

   //                     print "Please input second number : "
   //                     input num2

   //                     print "if + enter 1
   //                            if - enter 2
   //                            if x enter 3
   //                            if / enter 4 "    
   //                     input num3

   //                  3. if num3 = 1
   //                     print num1 + num2

   //                     if num3 = 2
   //                     print num1 - num2

   //                     if num3 = 3
   //                     print num1 * num2

   //                     if num3 = 4
   //                     print num1 / num2

   //                  4. END


                    
   //        Output  : ผลลัพ์ของการ + หรือ - หรือ x หรือ /

   //        Input   :  num1 , num2 , ch (จำนวนเต็ม 2 จำนวน)

   //        Process : 1. START

   //                  2. print "Please input first number : "
   //                     input num1

   //                     print "Please input second number : "
   //                     input num2

   //                     print "if + enter 1
   //                            if - enter 2
   //                            if x enter 3
   //                            if / enter 4 "    
   //                     input ch

   //                  3. switch (ch)

   //                     case 1
   //                     print num1 + num2

   //                     case 2
   //                     print num1 - num2

   //                     case 3
   //                     print num1 * num2

   //                     case 4
   //                     print num1 / num2

   //                  4. END

   //        Output  : ผลลัพ์ของการ + หรือ - หรือ x หรือ /

   //        Input   :  num1 , num2 (จำนวนเต็ม 2 จำนวน) , symbol (ตัวอักษร)

   //        Process : 1. START

   //                  2. print "Please input first number : "
   //                     input num1

   //                     print "Please input second number : "
   //                     input num2

   //                     print "Please input + or - or x or / : "
   //                     input symbol

   //                  3. switch (symbol)

   //                     case +
   //                     print num1 + num2

   //                     case -
   //                     print num1 - num2

   //                     case x
   //                     print num1 * num2

   //                     case /
   //                     print num1 / num2

   //                  4. END



   //   3 จงเขียนโปรแกรมภาษา C แปลงอุณหภูมิจากหน่วยองศาเซลเซียสเป็นองศาฟาเรนไฮต์ 
   //     กำหนดให้โปรแกรมรับค่าอุณหภูมิในหน่วยองศาเซลเซียสจากแป้นพิมพ์ และแสดงผลเป็นองศาฟาเรนไฮต์ออกทางจอภาพ

   //        Output  : อุณหภูมิเป็นองศาฟาเรนไฮต์

   //        Input   : c (จำนวนจริง)

   //        Process : 1. START

   //                  2. print "Please enter temperature : "
   //                     input c

   //                  3. print ((c * 1.8) + 32)

   //                  4. END


   //   4 ให้เขียนโปรแกรมสูตรคูณแม่ 10 และให้แสดงผลลัพท์ออกทางหน้าจอ

   //        Output  : สูตรคูณแม่ 10

   //        Input   : ไม่มี

   //        Process : 1. START

   //                  2. ลูป ( i = 1 ; i <= 12 ; i++ )
   //                        {
   //                            print i " x 10 = " i * 10 
   //                            print newline
   //                        }
     

   //                  3. END


   //   5 จงเขียนโปรแกรมคำนวณหาจำนวนเงินที่ต้องการจ่ายให้พนักงานรายวันแต่ละคน 
   //     โดยมีอัตราค่าแรงเป็น 40 บาทต่อชั่วโมง 
   //     ถ้าทำงานเกิน 8ชม. จะมีค่าล่วงเวลาคิดเป็นอัตรา 7 บาทต่อชม.

   //        Output  : เงินที่ต้องจ่ายให้พนักงาน

   //        Input   : hour (จำนวนจริง)

   //        Process : 1. START

   //                  2. print "Please enter your hour : "
   //                     input hour

   //                  3. if hour > 0 && hour <= 8
   //                       print hour * 40

   //                     if hour > 8
   //                       print 320 + (( hour - 8 ) * 7)
     

   //                  4. END

                         /*จงเขียนโปรแกรมคำนวณผลการเรียนของนักเรียน
                          มากกว่า 80 เกรด A
                          มากกว่า 70 เกรด B
                          มากกว่า 60 เกรด C
                          มากกว่า 50 เกรด D
                          น้อยกว่า 50 เกรด F*/

            //           output  : เกรดของนักเรียน
            //           input   : score(จำนวนจริง)
            //           process : 1. START

            //                     2. input score

            //                     3. ถ้า score มากกว่า 80 แต่น้อยกว่า 100
 //                                       print "เกรด A"
 //                                   ถ้า score มากกว่า 70 
 //                                       print "เกรด B"
//                                    ถ้า score มากกว่า 60 
 //                                       print "เกรด C"
 //                                   ถ้า score มากกว่า 50 
 //                                       print "เกรด D"
 //                                   ถ้า score น้อยกว่า 50 แต่มากกว่า 0
//                                       print "เกรด F"

            //                     4. END
                       
}