#include <stdio.h>

// Define a structure for passenger travel details
struct PassengerDetails {
    char airlineName[50];
    int flightNumber;
    char surname[50];
    char seatNumber[5];
    char destination[50];
    int numberOfBags;
};

// Function to enter passenger data
void enterPassengerDetails(struct PassengerDetails *passenger) {
    printf("Enter Airline Name: ");
    scanf(" %[^\n]", passenger->airlineName);

    printf("Enter Flight Number: ");
    scanf("%d", &passenger->flightNumber);

    printf("Enter Passenger Surname: ");
    scanf(" %[^\n]", passenger->surname);

    printf("Enter Seat Number (e.g., 12A): ");
    scanf(" %s", passenger->seatNumber);

    printf("Enter Destination: ");
    scanf(" %[^\n]", passenger->destination);

    printf("Enter Number of Bags: ");
    scanf("%d", &passenger->numberOfBags);
}

// Function to display passenger data
void displayPassengerDetails(struct PassengerDetails passenger) {
    printf("\n--- Passenger Information ---\n");
    printf("Airline Name: %s\n", passenger.airlineName);
    printf("Flight Number: %d\n", passenger.flightNumber);
    printf("Surname: %s\n", passenger.surname);
    printf("Seat Number: %s\n", passenger.seatNumber);
    printf("Destination: %s\n", passenger.destination);
    printf("Number of Bags: %d\n", passenger.numberOfBags);
}

int main() {
    struct PassengerDetails passenger1, passenger2;

    printf("Enter details for Passenger 1:\n");
    enterPassengerDetails(&passenger1);

    printf("\nEnter details for Passenger 2:\n");
    enterPassengerDetails(&passenger2);

    displayPassengerDetails(passenger1);
    displayPassengerDetails(passenger2);

    return 0;
}
