#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct{
    char Employee_name[100];
    char Employee_number[10];
    int age ;
    float salary;
} Employee;

Employee* create_employees_list(int size){
    Employee * a = (Employee*)malloc(size*sizeof(Employee));
    return a;
}

void add_Employee(Employee *a , int index , char *name , char *phone_number , int age , float salary){
    strcpy(a[index].Employee_name,name);
    strcpy(a[index].Employee_number,phone_number);
    a[index].age = age;
    a[index].salary = salary;
}

void show_Employee(Employee *a , int size){
    for(int i = 0 ; i<size ; i++){
        printf("%s\t%s\t%d\t%f\n", a[i].Employee_name , a[i].Employee_number , a[i].age , a[i].salary);
    }
}

void free_Employee_list(Employee *a){
    free(a);
}

int main(){
    int n =3;
    Employee *s = create_employees_list(n);
    add_Employee(s , 0 , "Tom" , "7905810432", 19 , 10000000);
    add_Employee(s , 1 , "Robert" ,"8090722006", 17 , 1000000);
    add_Employee(s , 2 , "John" ,"9044587225" ,  11 , 100000);
    show_Employee(s , n);
    free_Employee_list(s);
}
