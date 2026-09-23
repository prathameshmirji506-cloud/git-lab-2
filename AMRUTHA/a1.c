#include <stdio.h>
int insert(int a[],int n,int item,int pos)
{
int i;
if (pos>=n||pos<0){
printf("Invalid position");
return 0;
}
else{
for(i=n-1;i>=pos;i--){
a[i+1]=a[i];
}
a[pos]=item;
printf("element inserted");
}
return 0;
}

void delete(int a[],int n,int pos){
int i ;
if (pos>=n||pos<0){
printf("Invalid position");
}
printf("item deleted=%d",a[pos]);
for (i=pos;i<n;i++){
a[i+1]=a[i];}}

void traverse(int a[],int n){
int i;
printf("arrray element:");
for (i=0;i<n;i++);
printf("%d",a[i]);
}

void main()
{
	int a[20];int n,i,pos,item,choice;
    printf("number of elements:");
	scanf("%d",&n);
	printf("enter the elements:");
	for (i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
   }
	printf("\n1.INSERTION");
	printf("\n2.DELETION");
	printf("\n3.TRAVERSE");
	printf("\n4.EXIT");
	printf("\nenter choice:");
	scanf("%d",&choice);

	
		switch (choice)
		{
			case 1:
			{
			printf("enter pos and item to insert");
			scanf("%d ",&pos);
			scanf("%d",&item);
			insert(a,n,item,pos);
			break;
			}
			case 2:
			{
			printf("enter the positon to delete:");
			scanf("%d",&pos);
			delete(a,n,pos);
			break;
			}
			case 3:
			{
			traverse(a,n);
			break;
			}
			case 4: 
			{
			printf("exit");
			break;
			}
			default:{
			printf("invalid choice");
			break;
}}}
