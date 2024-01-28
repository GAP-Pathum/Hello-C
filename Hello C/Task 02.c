#include <stdio.h>

//fuction for calculate house rent allowance
double calHRA(double basicPay){
	return 0.25 * basicPay;
}

//function for calculate perks
double calPerks(int level){
	switch(level){
		case 1:
			return 2000+1500;
		case 2:
			return 1750+1200;
		case 3:
			return 1500+1100;
		case 4:
			return 1250;
		default:
			return 0;
	}
}
 //function to calculate income tax
double calIT(double grossSalary){
	if(grossSalary <= 100000){
		return 0;
	} else if(grossSalary <= 200000){
		return 0.03*(grossSalary - 100000);
	} else if(grossSalary <= 500000){
		return 0.05*(grossSalary - 200000) + 3000;
	} else {
		return 0.08*(grossSalary - 500000) + 20000;
	}
}

int main(){
	int jobNum, level;
	double basicPay;
	
	printf("Insert executive's job number: ");
	scanf("%d", &jobNum);
	
	printf("Insert executive's level number: ");
	scanf("%d", &level);
	
	printf("Insert executive's basic pay: ");
	scanf("%lf", &basicPay);		
	
	double hra = calHRA(basicPay);
	double perks = calPerks(level);
	double grossSalary = basicPay + hra + perks;
	double incomeTax = calIT(grossSalary);
	double netSalary = grossSalary - incomeTax;
	
	printf("\nNet salary of executive's is calculating...\n");
	printf("Job Number: %d\n", jobNum);
	printf("Level: %d\n", level);
	printf("Basic Pay: Rs. %.2f\n", basicPay);
	printf("House Rent Allowance: Rs. %.2f\n", hra);
	printf("Perks: Rs. %.2f\n",perks);
	printf("Gross Salary: Rs. %.2f\n", incomeTax);
	printf("Net Salary: Rs. %2f\n", netSalary);
	
	return 0;


}