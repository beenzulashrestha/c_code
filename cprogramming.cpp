#include<stdio.h>
#include<string.h>

int main()
{
	double math,english,cprogram,account,microp,totalmarks,percentage,gpa;
	
	int rollnumber;
	char name[50],faculty[50],email[50],gender[50],resulr[50];
	
	printf("Enter your rollnumber \n");
	scanf("%d",rollnumber);
	printf("enter your name\n");
	scanf("%s",name);
	printf("enter your email\n");
	scanf("%s",email);
	printf("enter your faculty\n");
	scanf("%s",faculty);
	printf("enter your gender\n");
	scanf("%c ",gender);
	printf("enter your subject marks\n");
	printf("1. english\n2. math\n3. account\n4. c programming\n5. microprocessor\n");
	
	scanf("%lf%lf%lf%lf%lf", &english,&math,&account&cprogram&microp);
	
	totalmarks = english+math+account+cprogram+microp;
	percentage = totalmarks/5;
	
	if((percentage >=85))
	{
		gpa = 4.0;
		
	}
	else if ((percentage <85)&&(percentage >=60))
	{
		gpa = 3.0:
			
	}
	else if((percentage <60)&&(percentage >=40))
	{
		gpa = 2.0;
	}
	else {
		gpa = 0.0;
	}
	
	//disp;aying result printf("\n\n");
	
	printf("**************************");
	printf("\nresult\n");
	printf("Student Name: %s", name);
	printf("\n");
	printf("Student Rollnumber: %d", rollnumber);
	printf("Student Faculty: %s", faculty);
	printf("Student Email: %s", email);
	printf("Student Gender: %c", grnder);
	printf("\n");
	printf("Total marks: %lf", totalmarks);
	printf("\n");
	printf("percentage: %lf", percentage);
	printf("\n");
	printf("Gpa: %lf", gpa);
	printf("\n\n");
	
	
	
	if((english<40)||(math<40)||(account<40)||(cprogram<40)||(microp<40))
	{
		strcpy(result,"Failed");
		printf("Result Status: %s", result);
		printf("\n");
		{
			else
		}
		strcpy(result,"Passed");
		printf("Result Status: %s",result);
		printf("\n");
		
	}
	
	
	
	
	printf("\n**********************");
	
	return 0:
		
}

