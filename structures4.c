#include <stdio.h>       // modiying structures
struct employee {
    char name[100];
    int age;
    float salary;
};
void modify (struct employee *e){
    e-> age += 30;
    e-> salary += 10000; 
}
int main () {
    struct employee e1 = {"XYZ",15,20000};
    printf("Age before modification : %d\n",e1.age);
    printf("Salary before modification : %.3f\n",e1.salary);
    modify(&e1);
    printf("Age after modification : %d\n",e1.age);
    printf("Salary after modification : %.3f\n",e1.salary);
    return 0;
}