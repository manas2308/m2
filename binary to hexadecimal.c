#include<stdio.h>
#include<math.h>
int binarytodecimal(long long binary){
	int decimal=0,base=1;
	while(binary>0){
		decimal+=(binary % 10)*base;
		binary /= 10;
		base *= 2;
	}
	return decimal;
}
void dectohex(int decimal){
	printf("hex: %X ",decimal);
}
int main(){
	long long binary;
	printf("enter : ");
	scanf("%lld",&binary);
	int decimal=binarytodecimal(binary);
	dectohex(decimal);
	return 0;
}