#include<stdio.h>

struct Person{
    char name[10];
    int age;
};

void PrintPerson(struct Person p){
    printf("Name: %s, Age: %d", p.name, p.age);
}

int main() { 
    struct Person p1 = {"Sandip", 21};
    PrintPerson(p1);
    
    return 0;

}