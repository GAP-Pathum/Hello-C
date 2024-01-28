#include<stdio.h>

double BASE_SALARY = 50000.00;
double BONUS_RATE = 200.00;
double COMMISSION = 0.02;

int main(){
	int quantity;
	double price;
	
	printf("Insert the quantity of sold televisions: ");
	scanf("%d", &quantity);
	
	printf("Insert the price of the television: ");
	scanf("%lf", &price);
	
	double bonus = BONUS_RATE * quantity;
	double commission = COMMISSION * quantity * price;
	double gross_salary = BASE_SALARY + bonus + commission;
	
	printf("Gross salary of salesperson is calculating...");
	printf("Base salary: Rs. %.2f\n", BASE_SALARY);
	printf("Bonus: Rs. %.2f\n", bonus);
	printf("Commission: Rs. %.2f\n", commission);
	printf("Gross salary: Rs. %.2f\n", gross_salary);
	
	return 0;
}