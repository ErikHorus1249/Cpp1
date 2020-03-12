#include<stdio.h>

void daonguoc(){
	char c;
	scanf("%c",&c);
	if(c != '\n'){
	daonguoc();
	}
	else
	{
		printf("%c",c);
	}
		
	}

int main(){
	daonguoc();
	
}
