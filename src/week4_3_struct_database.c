/*
 * week4_3_struct_database.c
 * Author: Viktorija Skrinda
 * Student ID: 241ADC006
 * Description:
 *   Simple in-memory "database" using an array of structs.
 *   Students will use malloc to allocate space for multiple Student records,
 *   then input, display, and possibly search the data.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define struct Student with fields name, id, grade
struct Student {
char name[50];
int id;
float grade;
};

int main(void) {
    int n;
    struct Student *students = NULL;

    printf("Enter number of students: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid number.\n");
        return 1;
    }

    // Allocate memory for n Student structs using malloc
    students = malloc(n * sizeof(struct Student));
    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    // Read student data in a loop
    for (int i = 0; i < n; i++){
        printf("Enter student's name %d: ", i + 1);

        while (getchar() != '\n');
        fgets(students[i].name, sizeof(students[i].name), stdin);
        students[i].name[strcspn(students[i].name, "\n")] = '\0';

        printf("Enter student's ID %d: ", i + 1);
        scanf("%d", &students[i].id);

        printf("Enter student's grade %d: ", i + 1);
        scanf("%f", &students[i].grade);   
    }

    // Display all student records in formatted output
    printf("\nID\tName\t\tGrade\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%-10s\t%.1f\n", students[i].id, students[i].name, students[i].grade);
    }

    // Optional: Compute average grade or find top student
    float sum = 0.0;
    int best_index = 0;
    for (int i = 0; i < n; i++) {
        sum += students[i].grade;
        if (students[i].grade > students[best_index].grade) {
            best_index = i;
        }
    }
    printf("\nAverage grade: %.2f\n", sum / n);
    printf("Top student: %s (ID: %d) with grade %.1f\n",
           students[best_index].name, students[best_index].id, students[best_index].grade);


    // Free allocated memory
    free(students);

    return 0;
}
