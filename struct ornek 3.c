#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct{
	char ad[10];
	char soyad[10];
	double kimlik_no;
	char baba[10];
	char anne[10];
	int yas;
}kimlik;

void bastir(kimlik atama){
	printf("adi:%s\nsoyadi:%s\nanne adi:%s\nbaba adi:%s\ntc numarasi:%.0lf\nyasi:%d",atama.ad,atama.soyad,atama.anne,atama.baba,atama.kimlik_no,atama.yas);
}

int main(){
	printf("lutfen bilgilerinizi giriniz!!!\nAdiniz:");
	kimlik atama;
	scanf("%s",atama->ad);
	printf("Soyadiniz:");
	scanf("%s",atama.soyad);
	printf("Anne adi:");
	scanf("%s",atama.anne);
	printf("Baba adi:");
	scanf("%s",atama.baba);
	printf("TC kimlik no:");
	scanf("%lf",&atama.kimlik_no);
	printf("Yasiniz:");
	scanf("%d",&atama.yas);
	
	bastir(atama);
}
