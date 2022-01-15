#include <stdio.h>

/*
	An example showing how to manipulate a members variable of type 
	integer array.
*/
struct Student
{
	char name [30];
	int  marks[5];
	int  total;
	float perc;
};

int main()
{
	struct Student student1;
	
	printf("Enter name: ");
	scanf("%s", student1.name);

	printf("Enter marks:\n");

	student1.total=0;

	for(int i=0; i < 5; i++){
		printf("Marks scored in subject %d : ",i+1);
		scanf("%d",&student1.marks[i]);
		student1.total += student1.marks[i];
	}
	printf("\nName: %s \n Total: %d \n" ,student1.name,student1.total);
	
	return 0;
}