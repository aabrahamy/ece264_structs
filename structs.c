#include <stdio.h>

#define NUM_STUDENTS 10

struct student {
    int id;
    char name[20];
    float gpa;
};

int main() {
    struct student students[NUM_STUDENTS] = {
        {1,  "Alice", 3.5},
        {2,  "Bob",   3.2},
        {3,  "Carol", 3.9},
        {4,  "David", 2.8},
        {5,  "Eve",   3.7},
        {6,  "Frank", 3.0},
        {7,  "Grace", 3.6},
        {8,  "Hank",  2.9},
        {9,  "Ivy",   3.8},
        {10, "Jack",  3.1}
    };

    struct student *ptr = students;

    printf("ID   Name        GPA\n");
    printf("----------------------\n");

    //To do: print all student data to the table
    //hint: use a for loop and a printf statement
    int i;

    for (i = 0; i < 10; i++) {
        printf("%-2d    %-17s%.1f\n",(ptr+i)->id, (ptr+i)->name, (ptr+i)->gpa);
    }

    return 0;
}
