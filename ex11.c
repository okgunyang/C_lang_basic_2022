#include<stdio.h>
//구구단을 출력하는 문제
//이중 for문을 활용하여 아래와 같이 구구단을 출력
/*
2*1=2		3*1=3....... 
2*2=4		.......
*/
void main(){
	printf("*********************************\n");
	printf("\t\tGUGUDAN \n");
	printf("*********************************\n");
	for(int i=1;i<10;i++){
		for(int j=2;j<10;j++){
			printf("%d*%d=%d\t",j,i,i*j);	
		}
		printf("\n");
	}
}
