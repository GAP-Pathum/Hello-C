#include <stdio.h>
#include <string.h>

struct Vehicle {
	char regNum[20];
	char model[20];
	char brand[20];
	char owner[20];
};

void addVehicle(struct Vehicle vehicles[], int *totalVehicles) {
    printf("Enter Registration Number: ");
    scanf("%s", vehicles[*totalVehicles].regNum);

    printf("Enter Model: ");
    scanf("%s", vehicles[*totalVehicles].model);

    printf("Enter Brand: ");
    scanf("%s", vehicles[*totalVehicles].brand);

    printf("Enter Owner: ");
    scanf("%s", vehicles[*totalVehicles].owner);

    (*totalVehicles)++;
    printf("Vehicle details added successfully!\n");
}

void displayVehicles(const struct Vehicle vehicles[], int totalVehicles) {
    if (totalVehicles == 0) {
        printf("No vehicles in the database.\n");
        return;
    }

    printf("\nVehicle Details:\n");
    printf("---------------------------------------------------------------------------------------------\n");
    printf("| %-20s | %-20s | %-20s | %-20s |\n", "Registration Number", "Model", "Brand", "Owner");
    printf("---------------------------------------------------------------------------------------------\n");

    for (int i = 0; i < totalVehicles; ++i) {
        printf("| %-20s | %-20s | %-20s | %-20s |\n", vehicles[i].regNum, vehicles[i].model,
               vehicles[i].brand, vehicles[i].owner);
    }

    printf("---------------------------------------------------------------------------------------------\n");
}

void findTotalVehicles(int totalVehicles) {
    printf("Total number of vehicles in the company: %d\n", totalVehicles);
}

int main() {
    struct Vehicle vehicles[100];
    int totalVehicles = 0;
    int choice;

    do {
        printf("\nVehicle Management System\n");
        printf("1. Add Vehicle Details\n");
        printf("2. Display Vehicle Details\n");
        printf("3. Find Total Number of Vehicles\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addVehicle(vehicles, &totalVehicles);
                break;
            case 2:
                displayVehicles(vehicles, totalVehicles);
                break;
            case 3:
                findTotalVehicles(totalVehicles);
                break;
            case 4:
                printf("Exiting the program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}