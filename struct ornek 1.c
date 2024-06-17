#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct ogrenci{
	char ad[10];
	char soyad[10];
	int yas;
};

int main(){
	struct ogrenci atama;
	strcpy(atama->ad,"ismail");
	strcpy(atama.soyad,"tosun");
	atama.yas=20;
	
	printf("Ogrencinin bilgileri;\nAdi:%s\nSoyadi:%s\nYasi:%d",atama.ad,atama.soyad,atama.yas);
	
	return 0;
}
