#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct {
    char name[50];
    int age;
    float gpa;
} Student;
Student* create_student_list(int n){
    Student *studs = (Student*) malloc(n*sizeof(Student));
    return studs;
}

void add_student(Student *studs , int index, char *name , int age , float gpa){
    strcpy(studs[index].name , name);
    studs[index].age = age;
    studs[index].gpa = gpa;
}

void display_student(Student *studs , int size){
    for(int i = 0 ; i<size ; i++){
        printf("%s\t%d\t%f\n", studs[i].name,studs[i].age, studs[i].gpa);
    }
}

void free_student_list(Student *studs){
    free(studs);
}

int main(){
    int n =3;
    Student *s = create_student_list(n);
    add_student(s , 0 , "Ahmed" , 19 , 10);
    add_student(s , 1 , "Anas" , 17 , 9.0);
    add_student(s , 2 , "Fatima" , 11 , 8.0);
    display_student(s , n);
    free_student_list(s);
}

