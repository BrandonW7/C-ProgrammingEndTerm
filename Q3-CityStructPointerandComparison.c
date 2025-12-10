#include <stdio.h>
#include <string.h>

struct city {
    char name[30];
    int population;
    float rainfall;
    float sunshine;
};

int main() {
    struct city cities[3];
    struct city *ptr;

    // Input 3 cities
    for (int i = 0; i < 3; i++) {
        printf("\nEnter details for city %d:\n", i + 1);
        ptr = &cities[i];

        printf("City name: ");
        fgets(ptr->name, sizeof(ptr->name), stdin);
        ptr->name[strcspn(ptr->name, "\n")] = '\0';

        printf("Population: ");
        scanf("%d", &ptr->population);

        printf("Annual rainfall (mm): ");
        scanf("%f", &ptr->rainfall);

        printf("Annual sunshine (hrs): ");
        scanf("%f", &ptr->sunshine);
        getchar();
    }

    // Display
    printf("\n--- City Details ---\n");
    for (int i = 0; i < 3; i++) {
        ptr = &cities[i];
        printf("City: %s | Pop: %d | Rainfall: %.1fmm | Sunshine: %.1fhrs\n",
               ptr->name, ptr->population, ptr->rainfall, ptr->sunshine);
    }

    // Compare
    int max_rain_idx = 0, min_sun_idx = 0;
    for (int i = 1; i < 3; i++) {
        if (cities[i].rainfall > cities[max_rain_idx].rainfall)
            max_rain_idx = i;
        if (cities[i].sunshine < cities[min_sun_idx].sunshine)
            min_sun_idx = i;
    }

    printf("\nCity with highest rainfall: %s (%.1fmm)\n",
           cities[max_rain_idx].name, cities[max_rain_idx].rainfall);
    printf("City with lowest sunshine: %s (%.1f hrs)\n",
           cities[min_sun_idx].name, cities[min_sun_idx].sunshine);

    return 0;
}
