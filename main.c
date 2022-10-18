#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//프로토 타입 선언 해줘야함
int inc(int counter); //프로토타입 
 
int main(int argc, char *argv[]) {
	int i=10;
	printf("함수 호출 전 i=%d\n",i);
	inc(i);
	printf("함수 호출 후 i=%d\n",i);
	return 0;
}

int inc(int counter){
	counter++;
	return counter;
}
