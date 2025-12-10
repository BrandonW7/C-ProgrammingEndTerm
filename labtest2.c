/*Program: Stores records of official game and avaialble to view online
Author: Brandon Wolasewicz
Date:08/04/25*/

#include <stdio.h>
#include <string.h>


#define MAX_ATHLETES 2
#define MAX_STRING 50

// defining structure for athlete information
typedef struct {
    char firstName[MAX_STRING];
    char surname[MAX_STRING];
    
    char nationality[MAX_STRING];
    char dateOfBirth[11]; // forma the: dd/mm/yyyy
    float height;
    float weight;
    char event[MAX_STRING];
} Athlete;

// fnctions to input athlete records
void inputAthleteRecords(Athlete athletes[], int num) {
    for (int i = 0; i < num; i++) {
        printf("\nEnter details for athlete %d:\n", i + 1);
        printf("First name of Athlete: ");
        scanf(" %s", athletes[i].firstName);
        printf("Surname of Athlete: ");
        scanf(" %s", athletes[i].surname);
        printf("Nationality of Athlete: ");
        scanf(" %s", athletes[i].nationality);
        printf("Date of Birth  (dd/mm/yyyy): "); //form (ddmmyyyy)
        scanf(" %s", athletes[i].dateOfBirth);
        printf("Height (in mtrs): ");
        scanf("%f", &athletes[i].height);
        printf("Weight (in kgs): ");
        scanf("%f", &athletes[i].weight);
        printf("Event: ");
        scanf(" %s", athletes[i].event);
    }
}



// function to check if paddy jim obrien is competse
void checkPaddyJimOBrien(Athlete athletes[], int num) {
    int found = 0;
    for (int i = 0; i < num; i++) {
        if (strcmp(athletes[i].firstName, "Paddy") == 0 &&
            strcmp(athletes[i].surname, "Jim") == 0) {
            found = 1;
            break;
        }
    }


    if (found)
        printf("\nPaddy Jim O'Brie is participating in this event.\n");
    else

        printf("\nPaddy Jim O'Brien is NOT participating in this event.\n");
}

int main() {
    int numAthletes;

    // step 2: person enters number of athletes at max 2
    do {
        printf("Enter number of athletes competing in alpine skiing (max 2): ");
        scanf("%d", &numAthletes);
    } while (numAthletes < 1 || numAthletes > MAX_ATHLETES);

    Athlete athletes[MAX_ATHLETES];

    // step 3: enters all athlete details using a function
    inputAthleteRecords(athletes, numAthletes);

    // Step 4: cchecks if paddy jim obrien is a participant
    checkPaddyJimOBrien(athletes, numAthletes);

    return 0;
}
