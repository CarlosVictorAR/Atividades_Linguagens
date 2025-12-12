#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct{
	char name[50];
	float salary;
	char dateOfBirth[10];
	int active;
}Employee;
//global
int quantity;

void add_employee(Employee *list){
	for (int i = 0; i < quantity; i++){
		if (!list[i].active){
			printf("\n--Adding Employee--\n");
			printf("Name: ");
			scanf("%s",list[i].name);
			printf("Salary: ");
			scanf("%f",&list[i].salary);
			printf("Date of Birth: [mm/dd/yyyy]: ");
			scanf("%s",list[i].dateOfBirth);
			printf("Added Succesfully\n");
			//marca como ativo
			list[i].active = 1;
			return;
		}
	}
	//Se tiver cheio avisa
	printf("\nFull list, remove anyone\n");
}
void remove_employee(Employee *list, int number){
	number = number - 1;
	if (number < quantity && number >= 0){
		if (!list[number].active){
			printf("\nThere is no employee to remove it\n");
			return;
		}
		printf("\nEmployee Succesfully removed\n");
		list[number].active = 0;
		return;
	}
	printf("\nEnter a value in the range [1 - %d]\n",quantity);
}
void print_employees(Employee *list){
	printf("\n--Printing employees--\n");
	for (int i = 0; i < quantity; i++){
		if (list[i].active){
			printf("Employee %d\n",i+1);
			printf("Name: %s\n",list[i].name);
			printf("Salary: %.2f\n",list[i].salary);
			printf("Date of birth: %s\n",list[i].dateOfBirth);
		}
		printf("\n");
	}
	printf("\n--Printed all--\n");
}
void create_vector(int tam){
	quantity = tam;
}

int main(){
	create_vector(2);
	Employee list[quantity];

	add_employee(list);
	add_employee(list);
	print_employees(list);
	remove_employee(list, 1);
	return 0;
}


