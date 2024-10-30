#include <stdio.h>

int main() {
  int number, prime = 0;
  printf("กรุณากรอกตัวเลข : ");
  scanf("%d", &number);
  
  if( number == 0 || number == 1 ) prime = 1;

  for( int i=2; i<=(number/2); i++ ) {
    if( number % i == 0 ) {
		prime = 1;
      	break;
    }
  }

  if( prime == 0 ) {
	printf("%d เป็นจำนวนเฉพาะ", number);
  } else {
    printf("%d ไม่ใช้จำนวนเฉพาะ", number);
  }
  
  return 0;
}