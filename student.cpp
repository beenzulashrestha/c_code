#include<stdio.h>

int main()
{
	
	int rollnumber;
	char name[50], faculty[50], hobbies[50], email[50]; 
	char gender;
	
	printf("enter your rollnumber /n");
	scanf("%d", & rollnumber);
	printf("enter your name");
	scanf("%s", & name);
	printf("enter your faculty");
	scanf("%s", & faculty);
	printf("enter your hobbies");
	scanf("%s", &hobbies);
	printf("enter your email");
	scanf("%s", & email);
	printf("enter your gender");
	scanf("% c", & gender);
	
	printf("My details /n");
	printf("Rollnumber= %d", rollnumber);
	printf("Name= %s", name);
	printf("Faculty= %s", faculty);
	printf("Hobbies= %s", hobbies);
	printf("Email= %s", email);
	printf("Gender= %c", gender);
	return 0;
}
