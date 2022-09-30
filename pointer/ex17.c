#include <stdio.h>
//포인터 : 데이터가 있는 주소를 저장하여 간접 접근하도록 하여 많은 양의 데이터를
//히프(heap)와 같은 곳에 별도록 저장하여 활용하는 방안
//포인터 선언 : 타입*  포인터이름;
//포인터의 초기화 : *포인터이름 = 주소; 
//포인터==히프 
int main(void){
	int a = 1004;
	int *pt1 = &a; 
	int *ppt1 = &pt1;
	printf("\na=%d",a);
	printf("\npt1=%d",pt1);	//pt1:a의 주소 
	printf("\n*pt1=%d",*pt1);//*pt1:a의 데이터 
	return 0;
}
