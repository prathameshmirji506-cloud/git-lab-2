#include <stdio.h>
struct date
{ 	
	int dob;
	int mob;
	int yob;
};
struct employee
{
	char name[20];
	int id;
	float salary;
	struct date bd;
}s;

void main()
{
	printf("enter

