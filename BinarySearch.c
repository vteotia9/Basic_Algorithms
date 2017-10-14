#include<stdio.h>

int search(int lo,int hi,int arr[],int x){
	if(lo > hi)
		return 0;
	
	int mid = (lo+hi)/2;
	if(arr[mid] == x)
		return 1;
	if(arr[mid] > x)
		return search(lo,mid-1,arr,x);
	else 
		return search(mid+1,hi,arr,x);
}
int main(){
	int n,arr[100010],x,i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&arr[i]);
	scanf("%d",&x);
	
	if(search(0,n-1,arr,x))
		printf("Number present.");
	else 
		printf("Number not present");
		
	return 0;
}
