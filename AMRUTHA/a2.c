#include <stdio.h>
struct student
{
	char fname;
	char lname;
	int roll_no;
}s[5];
 
void main()
{
	for(int i=0;i<5;i++)
	{
		printf("enter fname:");
		scanf("%s",&s[i].fname);
		printf("enter lname:");
		scanf("%s",&s[i].lname);
		printf("enter roll no:");
		scanf("%d",&s[i].roll_no);
	}
	for (int i=0;i<=5;i++)
	{
	 	for(int j=i-1;j<5;j++)
	 	{
	 		if(s[i].roll_no>s[j].roll_no)
	 		{
	 			int temp=s[i].roll_no;
	 			s[i].roll_no=s[j].roll_no;
	 			s[j].roll_no=temp;
	 		}
	 	}
	 }
	 printf("\n Student Details:\n");
	 for (int i=0;i<5;i++)
	 {
	 	printf("\n firstname=%s",s[i].fname);
	 	printf("\n lastname=%s",s[i].lname);
	 	printf("\n roll_no=%d",s[i].roll_no);
	 }
}
