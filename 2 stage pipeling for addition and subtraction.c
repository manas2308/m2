#include<stdio.h>
void fetch(int *num1, int *num2){
	*num1=8;
	*num2=10;
}
int execute(int num1,int num2){
	return num1+num2;
}
int main(){
	int num1,num2,result;
	fetch(&num1, &num2);
	result=execute(num1,num2);
	int clock_cycles_per_operation=2;
	int total_clock_cycles=clock_cycles_per_operation;
	printf("Addition of %d and %d: %d\n", num1, num2, result);
    printf("Total clock cycles needed: %d\n", total_clock_cycles);
}