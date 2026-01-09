#include<stdio.h>
#include<string.h>

struct Student{
    char name[10];
    int id;
};

int main() {
    struct Student s1 = {"Sandip", 0001};
    struct Student s2;
    s2.id = 0002;
    strcpy(s2.name, "Ram");

    printf("Name: %s, Id: %d", s1.name, s1.id);
    printf("\nName: %s, Id: %d", s2.name, s2.id);

    // pointer

    struct Student* ptr = &s1;
    ptr->id = 003;

    printf("\nId = %d", s1.id);

    return 0;
    

}   