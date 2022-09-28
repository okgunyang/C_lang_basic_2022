#include <stdio.h>
#include <limits.h>
//변수의 데이터 타입
int main(){
	//데이터타입  변수명=초기값;   -> 변수의 선언 및 초기화
	//const  데이터타입  상수명=값; -> 상수의 선언 및 값
	char a=30;	//문자
	short b=50;	//단정도 정수
	int c=500;	//일반 정수
	long d=600;	//배정도 정수
	float e=3.14;	//단정도 실수
	double f=36000.127856;	//배정도 실수
	int num1=10,num2=20,num3=30;
	int g=6453600000000;  //저장(표현) 가능 범위를 벗어남 - overflow
	unsigned int h=256;	//부호 없는 값
	//char, short, int, long, long long, unsigned char, unsigned short
	//unsigned int, unsigned long, unsigned long long
	//float, double, long double 등의 데이터 타입의 값을 저장할 수 있으며,
	//해당 데이터 타입의 크기가 정해져 있어 값의 저장 범위가 다름
	const float pi = 3.14;	//상수 선언
	//pi=6.28; - pi는 상수이므로 저장된 값을 바꿀 수 없음
	printf("a=%c\n", a);
	printf("b=%d\n", b);
	printf("c=%d\n",c);
	printf("d=%ld\n",d);
	printf("e=%f\n",e);
	printf("f=%lf\n",f);
	printf("f=%u\n",h);
	printf("num1=%d, num2=%d, num3=%d\n",num1,num2,num3);
	printf("num2의 8진수 : %o\n", num2);
	printf("num2의 16진수 : %x\n", num2);
	printf("g=%d", g);
	char c1 = CHAR_MIN;	//표현 범위의 하한치(_MIN)
	char c2 = CHAR_MAX;	//표현 범위의 상한치(_MAX)
	short s1 = SHRT_MIN;
	short s2 = SHRT_MAX;
	int i1 = INT_MIN;
	int i2 = INT_MAX;
	//언더플로우(underflow) : 하한치 보다 적은 데이터 값으로 인한 저장 오류
	//오버플로우(overflow) : 상한치 보다 큰 데이터 값으로 인한 저장 오류
	return 0;		
}