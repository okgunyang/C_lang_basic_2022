#include <stdio.h>
//looping : for, while, do~while
/*
조건이 만족하는 동안 초기값 부터 증감식에 따라 반복 수행
for(초기식;조건식;증감식){
	반복할구문;
}
*/
void main(){
	int sum=0;
	for(int i=0;i<=100;i++){
		sum+=i;
	}
	printf("\nfrom 1 to 100\'s plus total : %d\n", sum);
	sum=0;
	for(int i=0;i<=100;i+=2){
		sum+=i;
	}
	printf("\nfrom 1 to 100\'s even number plus total1 : %d\n", sum);
	sum=0;
	for(int i=0;i<=100;i++){
		if(i%2==0) sum+=i;
	}
	printf("\nfrom 1 to 100\'s even number plus total2 : %d\n", sum);
	sum=0;
	for(int i=0;i<=100;i++){
		if(i%2!=0) continue;
		sum+=i;
	}
	printf("\nfrom 1 to 100\'s even number plus total3 : %d\n", sum);
	
	sum=0;
	for(int i=0;i<=100;i+=3){
		sum+=i;
	}
	printf("\n multiple of three number -> plus total : %d\n", sum);
	printf("\n\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	
	printf("\n\n");
	for(int i=0;i<4;i++){
		for(int j=0;j<=3-i;j++){
			printf("*");
		}
		printf("\n");
	}
	printf("\n\n");
	
	for(int i=100;i>=0;i--){	//from 100 to 1
		printf(i);
		printf("\n");
	}
	printf("\n\n");
	
	//infinite loop : always condition true
	sum=0;
	for(int i=0;i>=0;i++){ //for(;;) { }
		if(i>100) break;
		sum+=i;
	}
		
	int su[4][3] = {{60,40,30},{80,60,70},{90,50,80},{70,80,60}};	
	for(int c=0;c<4;c++){
		printf("%d, ", c);
		for(int d=0;d<3;d++){
			if(d==0) printf("%d", su[c][d]);	
			else printf(", %d", su[c][d]);
		}
		printf("\n");
	}	
}