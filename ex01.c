#include <stdio.h>
//기본 입출력
//기본 출력 함수 : printf("출력할 내용")
//기본 입력 함수 : scanf("입력할 데이터타입문자코드", &변수명)
void main(){
	printf("Hello, C language\nHi~!");	//출력
	char name[30];	//문자배열(문자열) 변수 선언
	int age;
	//scanf("your name : %s",&name);	//문자열 입력
	scanf("your age : %d",&age);	//숫자 정수 입력
	printf("your is %d and %s",age,name);
	/*
	형식문자코드(Format Character)
	%s : 문자배열 - ※
	%c : 하나의 문자 - ※
	%d : (10진수)정수형 - ※
	%ld : long 10진 정수
	%u : 부호 없는 10진 정수
	%o : 8진수 - ※
	%x : 16진수 - ※
	%f : 실수 - ※
	%lf : double 실수
	%e, %g, %p
	*/
}