#include <stdio.h>
//순서도를 반드시 만들 것.
//5명의 번호, 국어, 영어, 수학을 배열변수로 입력받아
//개인 총점, 개인 평균, 개인 학점, 개인 석차를 계산하고,
//모든 사람의 점수와 총점, 평균, 학점, 석차를 출력하고,
//과목별 총점, 과목별 평균, 과목별 최대값, 과목별 최소값을 출력
/*
번호		국어	영어	수학	총점	평균	학점	석차	
----------------------------------------------
1 ....
.....
----------------------------------------------
총점	
평균
최대값
최소값
*/
void main(){
	//5명의 번호, 국어, 영어, 수학
	int jum[5][4] = {{1,90,80,70},{2,100,90,80},{3,80,75,80},{4,90,100,100},{5,75,100,85}};
	int tot[5] = {0,0,0,0,0};	//개인별 총점
	float avg[5] = {0.0f,0.0f,0.0f,0.0f,0.0f};	//개인별 평균
	char hak[5] = {'A','A','A','A','A'};	//학점
	int rank[5] = {1,1,1,1,1};	//석차
	int hap[3] = {0,0,0};	//과목별 합계
	float py[3] = {0.0f, 0.0f, 0.0f};	//과목별 평균
	int max[3] = {0,0,0};	//과목별 최대값
	int min[3] = {100,100,100};	//과목별 최소값
	
	for(int i=0;i<5;i++){
		for(int j=1;j<=3;j++){
			tot[i]+=jum[i][j]; 
			hap[j-1]+=jum[i][j];
		}
		avg[i] = (float) tot[i] / 3;
		if(avg[i]>=90) hak[i]='A';
		else if(avg[i]>=80) hak[i]='B';
		else if(avg[i]>=70) hak[i]='C';
		else if(avg[i]>=60) hak[i]='D';
		else hak[i]='F';
	}
	//석차 : 석차를 구하는 사람의 총점과 나머지 사람의 총점을 반복하여 비교한 후
	//석차를 구하는 사람의 총점이 더 작으면, 석차는 밀린다(증가)
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(tot[i]<tot[j]) ++rank[i];
		}
	}
	printf("number\t\tkor\teng\tmat\ttot\tavg\thak\trank\n");
	printf("---------------------------------------------------------------------\n");
	for(int i=0;i<5;i++){
		printf("%d\t\t%d\t%d\t%d\t%d\t%.2f\t%c\t%d\n", jum[i][0], 
		jum[i][1],jum[i][2],jum[i][3],tot[i],avg[i],hak[i],rank[i]);
	}
	
	//과목별 평균
	for(int i=0;i<3;i++){
		py[i] = (float) hap[i] / 5;
	}
	
	//과목별 최대/최소값
	//최대 : 점수를 피비교되는 점수와 비교하여 피비교되는 점수가 더 크면, 최대 점수는 피비교되는 점수가 됨
	//최소 : 점수를 피비교되는 점수와 비교하여 피비교되는 점수가 더 작으면, 최소 점수는 피비교되는 점수가 됨
	for(int i=0;i<3;i++){	//무슨 과목?
		for(int j=0;j<5;j++){ //몇 번째 사람?
			if(max[i] < jum[j][i+1]) max[i] = jum[j][i+1];
			if(min[i] > jum[j][i+1]) min[i] = jum[j][i+1];
		}
	}
	printf("---------------------------------------------------------------------\n");
	printf("total of part\t%d\t%d\t%d\n",tot[0],tot[1],tot[2]);
	printf("average of part\t%.2f\t%.2f\t%.2f\n",avg[0],avg[1],avg[2]);
	printf("max of part\t%d\t%d\t%d\n",max[0],max[1],max[2]);
	printf("min of part\t%d\t%d\t%d\n",min[0],min[1],min[2]);
}