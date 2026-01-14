#include <stdio.h>
#include <stdlib.h>
#include<string.h>
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

//---------------------------------------------function for add student-------------------------------------------------------------
  void addstudent() {
    FILE *fileptr, *temp;
    struct Student s;
    int roll;
    int found =0;
    fileptr = fopen("student.dat","ab");
    if (fileptr == NULL) {
      printf("File error\n");
      return;
    }
  
printf("Enter Roll No: ");
scanf("%d", &s.roll);

printf("Enter Name: ");
scanf(" %[^\n]", s.name); // reads the entire line of input (including spaces)
//-----------------------------------------------------------------------------------
//alternative for scaning full line including space is using fgets 
/* 
printf("Enter Name: ");
getchar();
fgets(s.name, sizeof(s.name), stdin);
-> to remove newline added by fgets 
s.name[strcspn(s.name, "\n")] = '\0';  
*/
//-----------------------------------------------------------------------------------    
printf("Enter Marks: ");
scanf("%f", &s.marks);
    
fwrite(&s, sizeof(s), 1, fileptr);
fclose(fileptr);
printf("Student added successfully.\n");
}

//------------------------------------------function for display student-------------------------------------------------------------
void displaystudents() {
    FILE *fileptr;
    struct Student s;

    fileptr = fopen("student.dat", "rb");
    if (fileptr == NULL) {
        printf("No records found.\n");
        return;
    }

    printf("\nRoll\tName\t\tMarks\n");
    printf("------------------------------------\n");

    while (fread(&s, sizeof(s), 1, fileptr)) {
        printf("%d\t%s\t\t%.2f\n", s.roll, s.name, s.marks);
    }

    fclose(fileptr);
}

void searchstudent() {
    printf("under const\n");
}

void updatestudent() {
    printf("under const\n");
}

void deletestudent() {
    printf("under const\n");
}


