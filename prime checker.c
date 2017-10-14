#include<stdio.h>
#include<math.h>

int main(){
	int num;
	
	scanf("%d",&num);
	
	int isPrime = 1;
	
	int i;
	for(i=2;i<=sqrt(num);i++){
		if(num%i == 0){
			isPrime = 0;
			break;
		}
	}
	if(isPrime && num > 1){
		printf("The number is a prime.");
	} else{
		printf("The number is not a prime.");
	}
	
	return 0;
}
