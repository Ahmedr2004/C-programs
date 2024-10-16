#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
    char name[100];
    char address[100];
} details;

details* create_name_list(int size){
    details * a = (details*)malloc(size*sizeof(details));
    return a;
}

void add_name(details *a , int index , char *name , char *phone_number){
    strcpy(a[index].name,name);
    strcpy(a[index].address,phone_number);
    }

void show_name(details *a , int size){
    for(int i = 0 ; i<size ; i++){
        printf("%s\t%s\n", a[i].name , a[i].address );
    }
}

void sort_name(details *a , int size){
    details temp;
    for(int i = 0 ; i<size ; i++){
        for(int j = i+1 ; j<size ; j++){
            if(strcmp(a[i].name,a[j].name)>0)
            {
                strcpy(temp.name,a[i].name);
                strcpy(temp.address, a[i].address);
                strcpy(a[i].name, a[j].name);
                strcpy(a[i].address , a[j].address);
                strcpy(a[j].name , temp.name);
                strcpy(a[j].address , temp.address);
            }
        }
    }
    printf("After sorting\n");
    for(int i = 0 ; i<size ; i++){
        printf("%s\t%s\n", a[i].name , a[i].address);
    }
}

void free_name_list(details *a){
    free(a);
}

int main(){
        int n =3;
    details *s = create_name_list(n);
    add_name(s , 0 , "Robert" , "Time Square , New York City , United States");
    add_name(s , 1 , "James" ,"Street 7 , Lisbon , Portugal");
    add_name(s , 2 , "Ahmed" ,"187 Chandralok Colony , ALIGANJ , LUCKNOW");
    show_name(s , n);
    sort_name(s,n);
    free_name_list(s);
}
