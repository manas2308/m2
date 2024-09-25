#include<stdio.h>
int main(){
	int n,smallest;
	printf("enter the size: ");
	scanf("%d",&n);
	int arr[n];
	printf("enter the elements: ");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	smallest=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]<smallest){
			smallest=arr[i];
		}
	}
	printf("smallest number: %d\n",smallest);
	return 0;
}