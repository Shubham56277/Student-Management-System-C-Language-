#include <stdio.h>
#include <stdlib.h>
#include<sting.h>
struct Student {
int roll;
char name[100];
float marks;
};

// here i will Declare the functions here
void addstudent();
void displaystudents();
void searchstudent();
void updatestudent();
void deletestudent();

int main() {
int choice;
// i will use wile loop with condition 1 for looping the menu
while(1) { 
printf("====== Student Management System ======\n");
printf("1. Add student\n");
printf("2. Display Student\n");
printf("3. Search Student\n");
printf("4. Update student\n");
printf("5. Delete STudent\n");
printf("0. Exit\n");
printf("Enter choice: ");
scanf("%d", &choice);
if (choice==0) { printf("Program Exited Successfully.\n"); break; }
switch(choice) {
case 1: addstudent(); break;
case 2: displaystudents(); break;
case 3: searchstudent(); break;
case 4: updatestudent(); break;
case 5: deletestudent(); break;
default: printf("Invalid choice!\n");
  }
}
return 0;
}



