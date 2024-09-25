#include<stdio.h>
int main(){
	int n,greatest;
	printf("enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elments: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	greatest=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>greatest){
			greatest=arr[i];
		}
	}
	printf("the greatest number is : %d",greatest);
	return 0;
}