#include <stdio.h>
#include <stdbool.h>
//연산 : 산술, 관계(비교), 논리, 대입, 증감, 이진(비트),....
void main(){
	int num1=10;
	int num2=20;
	int num3=32;
	printf("num1+num2=%d\n",num1+num2);
	printf("num1-num2=%d\n",num1-num2);
	printf("num1*num2=%d\n",num1*num2);
	printf("num2/num1=%d\n",num2/num1);
	printf("num3%num1=%d\n",num3%num1);	//나머지
	
	printf("num1>num2=%d",num1>num2);	//초과
	printf("\n");
	printf("num1<num2=%d",num1<num2);	//미만
	printf("\n");
	printf("num1>=num2=%d",num1>=num2);	//이상
	printf("\n");
	printf("num1<=num2=%d",num1<=num2);	//이하
	printf("\n");
	printf("num1==num2=%d",num1==num2);	//같다
	printf("\n");
	printf("num1!=num2=%d",num1!=num2);	//같지 않다
	printf("\n");
	int sample = (num1>num2) ? 1 : 0;	//삼항 연산자
	printf("sample=%d\n",sample);
	printf("AND 논리");
	printf("num1>num2 && num2>num3 : %d\n", num1>num2 && num2>num3);
	printf("num1<num2 && num2>num3 : %d\n", num1<num2 && num2>num3);
	printf("num1>num2 && num2<num3 : %d\n", num1>num2 && num2<num3);
	printf("num1<num2 && num2<num3 : %d\n", num1<num2 && num2<num3);
	printf("OR 논리");
	printf("num1>num2 || num2>num3 : %d\n", num1>num2 || num2>num3);
	printf("num1<num2 || num2>num3 : %d\n", num1<num2 || num2>num3);
	printf("num1>num2 || num2<num3 : %d\n", num1>num2 || num2<num3);
	printf("num1<num2 || num2<num3 : %d\n", num1<num2 || num2<num3);
	printf("NOT 논리");
	printf("!(num1>num2) : %d\n", !(num1>num2));
	printf("!(num1<num2) : %d\n", !(num1<num2));
	//삼항 연산자를 이용한 true/false 출력
	printf("(num1<num2) : %s\n", (num1<num2) ? "true" : "false");
	bool b1 = true;		//stdbool.h 인클루드해야함
	bool b2 = false;
	printf((num1>num2) ? b1 : b2);
	printf("대입연산자");
	printf("num1+=2 : %d", num1+=2);	//num1=num1+2;
	printf("num1-=3 : %d", num1-=3);	//num1=num1-3;
	printf("num1*=3 : %d", num1*=3);
	printf("num1/=2 : %d", num1/=2);
	printf("num1%=4 : %d", num1%=4);
	printf("증감연산자");
	printf("num2++ : ", num2++);	//20
	printf("++num3 : ", ++num3);	//33
	printf("num2-- : ", num2--);	//21
	printf("--num2 : ", --num3);	//32
	printf("비트연산자");
	//&(AND), |(OR), ^(XOR), ~(NOT), >>(오른쪽시프트), <<(왼쪽시프트)
	num1=20;
	num2=40;
	//num1&num2
}