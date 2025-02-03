#include<stdio.h>
struct student {
	char name[30];
	int rollno;
	int marks[5];
	int total;
};
int main(){
	printf("==================================\n");
	printf("||    STUDENT RANKING SYSTEM    ||\n");
	printf("==================================\n");
	int size,i,j;
	printf("Enter the number of students:");
	scanf("%d",&size);
	struct student  s[size];
	for(i=0;i<size;i++){
		s[i].total=0;
		printf("Enter student %d name:",i+1);
		scanf(" %[^\n]s", s[i].name);
		printf("Enter rollno:");
		scanf(" %d",&s[i].rollno);
    	printf("Enter the subject marks:");
		for(j=0;j<5;j++) {
			scanf("%d",&s[i].marks[j]);
			s[i].total +=s[i].marks[j];
		}
	}
	for(i=0;i<size-1;i++){
		for(j=i+1;j>size;j++){
			if(s[i].total<s[j].total){
			    int temp=s[i].total;
			    s[i].total=s[j].total;
			    s[j].total=temp;
	        } 
        }    
    }
    printf("\nRank\tRollno\tName\ttotal\n");
    printf("==========================\n");
   for (i=0;i<size;i++){
	printf("%d\t%d\t%-15s\t%d\n",i+1,s[i].rollno,s[i].name,s[i].total);
   }
}

