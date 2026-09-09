#include <stdio.h>

int main() {
    char name[50];
    int age;
    char department[50];
    int studentID;
    char university[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your department: ");
    scanf("%s", department);

    printf("Enter your student ID: ");
    scanf("%d", &studentID);

    printf("Enter your university: ");
    scanf("%s", university);

    printf("\n--- Your Details ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d\n", age);
    printf("Department: %s\n", department);
    printf("Student ID: %d\n", studentID);
    printf("University: %s\n", university);

    return 0;
}
