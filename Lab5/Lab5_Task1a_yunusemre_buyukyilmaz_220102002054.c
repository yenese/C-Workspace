#include <stdio.h>

struct employee 
{
	int age;
	int ID_number;
	int salary_information;
	
};



int main()
{
	struct employee employee1 = {28, 22010, 20000};
	struct employee employee2 = {32, 22020, 35000};
	
	printf("Employee1 : %d %d %d \n",employee1.age, employee1.ID_number, employee1.salary_information);
	printf("Employee2 : %d %d %d \n",employee2.age, employee2.ID_number, employee2.salary_information);

	return 0;
}
