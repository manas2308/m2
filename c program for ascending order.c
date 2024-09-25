#include<stdio.h>
void bubblesort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}
int main(){
	int n;
	printf("enter the integers: \n");
	scanf("%d",&n);
	int arr[n];
	printf("enter the %d integers: ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bubblesort(arr,n);
	printf("the updated array in ascending order is: ");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}