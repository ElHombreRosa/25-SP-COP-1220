#include <stdio.h>

union Person {
    char firstname[50];
    char lastname[50];
    int age;
    int tenure;
};
// one element at a time - union 
int main(void){
    union Person student =
    {
        "John",
        "Smith",
        52,
        15
    };
    

    printf("Structure Data - \n"
            "*****************\n"
            "First Name: %s\n"
            "LastName: %s\n"
            "Age: %d\n"
            "Tenure: %d yrs\n",student.firstname, student.lastname,
            student.age, student.tenure);

    return 0;
}