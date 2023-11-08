#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SCIENTISTS 100

struct Scientist {
    char name[100];
    char birthdate[20];
    char achievements[1000];
};

int main() {
    struct Scientist scientists[MAX_SCIENTISTS];
    char filename[100], name[100], *line;
    int num_scientists = 0, i;
    FILE *fp;

    // Prompt the user for the filename of the input file
    printf("Enter the name of the input file: ");
    scanf("%s", filename);

    // Open the input file for reading
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file %s\n", filename);
        exit(1);
    }
    else
    {
    	fp=fopen(filename,"r");
    // Read each line of the input file and store it in the scientists array
    while ((line = fgets(NULL, 0, fp)) != NULL && num_scientists < MAX_SCIENTISTS) {
        sscanf(line, "%[^,],%[^,],%[^\n]", scientists[num_scientists].name,
               scientists[num_scientists].birthdate, scientists[num_scientists].achievements);
        num_scientists++;
    }

    // Close the input file
    fclose(fp);
   }

    // Prompt the user for the name of the scientist to search for
    printf("Enter the name of the scientist to search for: ");
    scanf("%s", name);

    // Search for the scientist in the scientists array
    for (i = 0; i < num_scientists; i++) {
        if (strcmp(scientists[i].name, name) == 0) {
            // Found the scientist, print their details
            printf("Name: %s\nBirthdate: %s\nAchievements: %s\n",
                   scientists[i].name, scientists[i].birthdate, scientists[i].achievements);
            break;
        }
    }

    if (i == num_scientists) {
        // Didn't find the scientist
        printf("Scientist not found.\n");
    }

    return 0;
}
