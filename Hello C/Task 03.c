#include <stdio.h>

int MAX_STUDENTS = 2;

int main(){
	char names[MAX_STUDENTS][50];
	int marks[MAX_STUDENTS][4];
	int totalMarks[MAX_STUDENTS];
	
	for(int i=0; i<MAX_STUDENTS; ++i){
		printf("Insert name of student %d: ",i+1);
		scanf("%s", names[i]);
		
		printf("Insert marks for student %d (all subjects): ",i+1);
		for(int j=0; j<4; ++j){
			scanf("%d", &marks[i][j]);
		}
	}
for(int i=0; i<MAX_STUDENTS; ++i){
	totalMarks[i] = 0;
	for (int j=0; j<4; ++j){
		totalMarks[i] += marks[i][j];
	}
}
printf("\nRank List:\n");
printf("-----------------------------------------------------\n");
printf("Student Name\t|\tTotal Marks\t|\tRank\n");
printf("-----------------------------------------------------\n");

for(int i=0; i<MAX_STUDENTS; ++i){
	int rank =1;
	for(int j=0; j<MAX_STUDENTS; ++j){
		if(totalMarks[j] > totalMarks[i]){
			rank++;
		}
	}
	printf("%-15s\t|\t%-12d\t|\t%d\n", names[i], totalMarks[i], rank);
}
return 0;
}