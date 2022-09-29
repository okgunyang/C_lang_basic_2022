#include <stdio.h>
/*
do~while
초기값부여문
do {
	반복실행문장;
	[증감식;]
} while(조건식);
*/
void main() {
	int i=0;
	while(i<0) {
		printf("Hello %d\n", i);
		i++;
	}
	printf("\n*************\n");
	i=0;
	do {
		printf("Hello %d\n", i);
		i++;
	} while(i<0);
	
	int num=0;
	i=0;
	printf("\n number : ");
	scanf("%d", &num);
	do {
		printf("Hello %d\n", i);
		i++;
	} while(i<num);	
}