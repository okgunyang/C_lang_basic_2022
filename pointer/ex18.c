#include <stdio.h>
int main(void){
	int num1 = 1234;
	double num2 = 3.14;
	int* pt_num1 = &num1; //포인터에 대입연산할 경우는 주소를 넣어야 함. 
	double* pt_num2 = &num2;	//&변수 => 주소 연산자 
	
	//1) pt_num1에 대한 크기를 출력
	printf("\n포인터의 크기 : %d",sizeof(pt_num1)); 
	//2) pt_num1이 가리키고 있는 주소를 출력
	printf("\npt_num1이 가진 주소 : %#x", pt_num1);
	//3) pt_num2가 가리키고 있는 주소를 출력
	printf("\npt_num2이 가진 주소 : %#x", pt_num2);
	//4) pt_num1이 가리키고 있는 주소의 위치에 저장된 값을 출력
	printf("\npt_num1의 주소가 가리키고 있는 데이터 : %d", *pt_num1);
	//5) pt_num2이 가리키고 있는 주소의 위치에 저장된 값을 출력 
	printf("\npt_num2의 주소가 가리키고 있는 데이터 : %f", *pt_num2);
	return 0;
}
