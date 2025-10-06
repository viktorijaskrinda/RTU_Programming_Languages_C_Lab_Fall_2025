/*
 * week4_2_struct_student.c
 * Author: Viktorija Skrinda
 * Student ID: 241ADC006
 * Description:
 *   Demonstrates defining and using a struct in C.
 *   Students should define a 'Student' struct with fields like name, id, and grade.
 *   Then create a few instances and print them.
 */

#include <stdio.h>
#include <string.h>

// Define struct Student with fields: name (char[]), id (int), grade (float)
struct Student {
char name[50];
int id;
float grade;
};

int main(void) {
    // Declare one or more Student variables
    struct Student first;
    struct Student second;

    // Assign values manually
    strcpy(first.name, "Finick Wobley");
    first.id = 1943;
    first.grade = 7.8;

    strcpy(second.name, "Petunia Tarakanovna");
    second.id = 1945;
    second.grade = 9.9;

    // Print struct contents using printf
    printf("Student 1: %s, ID: %d, Grade: %.1f\n", first.name, first.id, first.grade);
    printf("Student 2: %s, ID: %d, Grade: %.1f\n", second.name, second.id, second.grade);

    return 0;
}
