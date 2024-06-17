#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	float x_ekseni;
	float y_ekseni;
}nokta;

int main(){
	nokta atama;
	atama.x_ekseni=2;
	atama.y_ekseni=1;
	
	printf("%.2f x ekseni %.2f y ekseni noktalari.",atama.x_ekseni,atama.y_ekseni);
	
	return 0;
}
