#include <stdio.h>

union test1{

	int n1,n2;

};

union test2{

	int n3;
	char ch;

};

union test3{

	int n4;
	char name[20];
	float salary;
	double salary2;

};

void size_of_union(union test1 t1, union test2 t2, union test3 t3);

int main(void){

	union test1 t1;
	union test2 t2;
	union test3 t3;

	size_of_union(t1,t2,t3);

	return 0;
}

void size_of_union(union test1 t1, union test2 t2, union test3 t3){

	printf("Size of test1 = %d\n", sizeof(t1));
	printf("Size of test2 = %d\n", sizeof(t2));
	printf("Size of test3 = %d\n", sizeof(t3));

}