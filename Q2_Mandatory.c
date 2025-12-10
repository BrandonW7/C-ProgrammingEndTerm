#include <stdio.h>

#define TOTAL_PASSENGERS 2

// structures
struct PassengerDetails {
    char airlineName[50];
    int flightNumber;
    char surname[50];
    char seatNumber[5];
    char destination[50];
    int numberOfBags;
};


// function to enter data
void enterAllPassengerDetails(struct PassengerDetails passengers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\nEnter details for Passenger %d:\n", i + 1);

        printf("Enter Airline Name: ");
        scanf(" %s[\n]", passengers[i].airlineName);

        printf("Enter Flight Number: ");
        scanf("%d", &passengers[i].flightNumber);
    
        printf("Enter Passenger Surname: ");
        scanf(" %s[\n]", passengers[i].surname);

        printf("Enter Seat Number (e.g., 12A): ");
        scanf(" %s[\n]", passengers[i].seatNumber);

        printf("Enter Destination: ");
        scanf(" %s[\n]", passengers[i].destination);

        printf("Enter Number of Bags: ");
        scanf("%d", &passengers[i].numberOfBags);
        }
}

// function to display data of passengers
void displayAllPassengerDetails(struct PassengerDetails passengers[], int size) {
    for (int i = 0; i < size; i++) {
        printf("\n--- Passenger %d Information ---\n", i + 1);
        printf("Airline Name: %s\n", passengers[i].airlineName);
        printf("Flight Number: %d\n", passengers[i].flightNumber);
        printf("Surname: %s\n", passengers[i].surname);
        printf("Seat Number: %s\n", passengers[i].seatNumber);
        printf("Destination: %s\n", passengers[i].destination);
        printf("Number of Bags: %d\n", passengers[i].numberOfBags);
    }
}
// main shows the struct of details
int main() {
    struct PassengerDetails passengers[TOTAL_PASSENGERS];

    enterAllPassengerDetails(passengers, TOTAL_PASSENGERS);
    displayAllPassengerDetails(passengers, TOTAL_PASSENGERS);

    return 0;
}
