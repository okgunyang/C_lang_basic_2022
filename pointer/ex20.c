#include <stdio.h>
int local(int num){
	num+=10;
	return num;
}
int main(void){
	int var = 10;
	printf("\n변수 var의 초기값 : %d", var);
	printf("\nlocal() 함수 호출 후의 변수 var의 값은 %d 임\n", local(var));
	//local(값) 형태로 호출하여 local함수에 값을 전달하여 연산한 후 다시 값을 전달
	//받게 됨 => 값에 의한 전달(Call by value) 
	return 0; 
}
