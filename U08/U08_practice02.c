#include<stdio.h>

struct data{
	char name[100];
	int age;
	int salary;
	int printed;
};

struct data table[5];

int main(){
	for(int i=0;i<5;i++){
		scanf("%s%d%d", table[i].name, &table[i].age, &table[i].salary);
		table[i].printed = 0;
	}
	int idx;
	int age_min=100;
	int salary_min=10000000;
	printf("username  age  salary\n");
	for(int j=0;j<5;j++){
		for(int i=0;i<5;i++){
			if(table[i].age<age_min&&table[i].printed==0){
				age_min=table[i].age;
				idx=i;
			}
            if(table[i].age==age_min&&table[i].printed==0){
				if(table[i].salary<salary_min){
					salary_min=table[i].salary;
					idx=i;
				}
			}
		}
		printf("%8s%5d%8d\n", table[idx].name, table[idx].age, table[idx].salary);
		table[idx].printed=1;
        age_min=100;
	    salary_min=10000000;
	}
}