#include <stdio.h>
//while
/*
초기값부여;   ----- 1
while(조건식) {	-----  2
	증감식;	----- 3
	반복실행문;  ----- 4
}

증감식과 반복실행문의 위치는 로직에 따라 바뀔 수 있으며,
무한루프인 경우 조건식을 true로 함
*/
void main(){
	int a=0, sum=0;
	while(a<100){
		a++;
		printf("Hello~! %d\n", a);
		sum+=a;
		printf("result %d : %d\n", a, sum);
	}	
	printf("\n\n");
	a=100;
	sum=0;
	while(a>0){
		sum+=a;
		printf("result %d : %d\n", a, sum);
		a--;
	}
	
	a=0;
	sum=0;
	while(a>=0){
		a++;
		sum+=a;
		printf("result %d : %d\n", a, sum);
		if(a>=10) break;
	}
	
	a=0;
	while(a<=100){
		a+=2;
		printf("even number : %d\n");
	}

	a=0;
	while(a<=100){
		a++;
		if(a%2==0) printf("even number : %d\n");
	}
	
	int su[4][3] = {{60,40,30},{80,60,70},{90,50,80},{70,80,60}};
	
	a=0;
	int b=0;
	while(a<4){
		b=0;
		printf("%d, ", a);
		while(b<3){
			if(b==0) printf("%d", su[a][b]);	
			else printf(", %d", su[a][b]);
			++b;
		}
		++a;
		printf("\n");
	}
}