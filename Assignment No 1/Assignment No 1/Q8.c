//Q8) Write a Sample program for Structure and union

#include<stdio.h>

struct details{
	int rollno;
};

union data{
	char name[20];
};

int main(){
	struct details de;
	union data da;
	printf("Enter Your Roll Number :");
	scanf("%d",&de.rollno);

	printf("Enter Your Name :");
	scanf("%s",&da.name);
	
	printf("Roll No :%d",de.rollno);
	printf("\nName :%s",da.name);
	
	return 0;
}


