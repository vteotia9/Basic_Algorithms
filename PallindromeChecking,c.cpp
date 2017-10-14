#include<stdio.h>
#include<string.h>

int isPallindrome(char str[]){
	int len = strlen(str),i,j;
	
	for(i=0,j=len-1;i < j;i++,j--){
		if(str[i] != str[j])
			return 0;
	}
	return 1;
}
int main(){
	char str[100010];
	
	gets(str);
	if(isPallindrome(str))
		printf("The string is a Pallindrome");
	else
		printf("The string is not a Pallindrome");
		
	return 0;
}
