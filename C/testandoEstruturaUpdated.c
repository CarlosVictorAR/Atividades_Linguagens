#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct employee{
	char name[50];
	float salary;
	char dateOfBirth[15];
	int active;
} Employee;
//global    
int quantity;
void add_employee_dataBase(Employee *list){
	FILE *csv;
	csv = fopen("C:/Users/carlo/OneDrive/Documentos/employees.csv", "r");

	if (!csv){
		printf("Error opening file\n");
		return;
	}//se for NULL sai da funçao
	char line[100];
    int j = 0;
	while (fgets(line, sizeof(line), csv)){
		//while pega as linhas enquanto tem valores nelas
		if (!list[j].active){
			char *token;
			token = strtok(line,";");
			for (int i = 0; i < 3; i++){
                if (token != NULL){
                    switch(i){
                        case 0:
                            token[strcspn(token, "\r\n")] = '\0';
                            strcpy(list[j].name, token);
                            break;
                        case 1:
                            list[j].salary = atof(token);
                            break;
                        case 2:
                            token[strcspn(token, "\r\n")] = '\0';
                            strcpy(list[j].dateOfBirth, token);
                            break;
                    }
                }
				token = strtok(NULL, ";");
			}
            list[j++].active = 1;
		}
	}
	fclose(csv);
}
void save_employee_dataBase(Employee *list){
	FILE *csv;
	csv = fopen("C:/Users/carlo/OneDrive/Documentos/employees.csv", "w");
	if (!csv){
		printf("Error opening file\n");
		return;
	}
	for (int i = 0; i < quantity; i++){
		if (list[i].active){
			fprintf(csv, "%s;%.2f;%s\n", list[i].name, list[i].salary, list[i].dateOfBirth);
		}
	}   
	fclose(csv);
}
void add_employee(Employee *list){
	for (int i = 0; i < quantity; i++){
		if (!list[i].active){
			printf("\n--Adding Employee--\n");
            fflush(stdin);
			printf("Name: ");
			scanf("%s",list[i].name);
			printf("Salary: ");
			scanf("%f",&list[i].salary);
			printf("Date of Birth: [mm/dd/yyyy]: ");
            fflush(stdin);
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
	create_vector(4);
	Employee list[quantity];

	for (int i = 0; i < quantity; i++){
		list[i].active = 0;
		list[i].name[0] = '\0';
		list[i].dateOfBirth[0] = '\0';
		list[i].salary = 0.0f;
	}
    add_employee_dataBase(list);
	char resposta;;
	do {
		printf("\n--Employee Management System--\n");
		printf("Choose an option:\n");
		printf("a - Add Employee\n");
		printf("r - Remove Employee\n");
		printf("p - Print Employees\n");
		printf("x - exit program\n");
		scanf(" %c", &resposta);
		switch(resposta){
			case 'a':
				add_employee(list);
				break;
			case 'r':
				int number;
				printf("Enter the employee number to remove: ");
				scanf("%d", &number);
				remove_employee(list, number);
				break;
			case 'p':
				print_employees(list);
				break;
			case 'x':
				save_employee_dataBase(list);
				printf("Exiting program...\n");
				break;
			default:
				printf("Invalid option, try again.\n");
		}
	}
	while (resposta != 'x');
	return 0;
}


