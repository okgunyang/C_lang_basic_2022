#include<stdio.h>
//조건문
/*
if(조건식) 실행문;

if(조건식) 
	실행문;
	
if(조건식)
	실행문;
else
	실행문;

if(조건식1)
	실행문1;
else if(조건식2)
	실행문2;
.....
else
	실행문n;		


if(조건식) {
	실행문1;
	실행문2;
}

if(조건식) {
	실행문1;
	실행문2;
}

if(조건식) {
	실행문1;
	실행문2;
} else {
	실행문1;
	실행문2;
}

if(조건식1) {
	실행문1;
	실행문2;
} else if(조건식2) {
	실행문1;
	실행문2;
 ....
} else {
	실행문1;
	실행문2;
}

비교/산술/논리/비트 연산자를 이용하여 조건식을 수립
>,>=,<,<=,==,!=,+,-,*,/,%,&&,||,!,&,|,^,~ 
*/
void main(){
	int jum=90;

	if(jum>=80) printf("pass");
	
	printf("\n");
		
	if(jum>=80)
		printf("pass");
	else
		printf("no pass");
	
	printf("\n");	
	
	printf("GRADE : ");
	
	if(jum>=90)
		printf("A");
	else if(jum>=80)
		printf("B");
	else if(jum>=70)
		printf("C");
	else if(jum>=60)
		printf("D");
	else
		printf("E");						
	
	int jum2=80;
	int jum3=90;
	
	printf("\n");
	
	if(jum>=80 && jum2>=80 && jum3>=80){
		printf("pass");
		printf("\n pass process please");
	} else {
		printf("no pass");
		printf("imposible process");
	}
	
	printf("\n");
	
	if(jum>=90 || jum2>=90 || jum3>=90){
		printf("part great student");
		printf("gift : book");
	}
}

