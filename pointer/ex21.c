#include <stdio.h>
//참조(주소)에 의한 전달(call bt reference)
int local(int* num){
	*num+=10;
	return *num;
} 
int main(void){
	int var = 10;
	printf("\n변수 var=%d", var);
	printf("\nlocal() 함수 호출 후의 var의 결과값 : %d",local(&var));
	//int* num = &var;
	//포인터를 사용하면, 배열과 같은 기본타입(primitive)이 아닌 참조타입(reference)로
	//활용할 수 있어서 메모리 활용도가 높아진다. 
	int arr[2][3] = {{10,20,30},{40,50,60}};
	int *array1 = &arr;	//주소(참조)에 의한 전달 
	printf(*array1); 
	return 0;
}
