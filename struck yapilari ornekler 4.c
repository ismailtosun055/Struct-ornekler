#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct dersler{
	char ders1[20];
	char ders2[20];
	char ders3[20];
	char ders4[20];
	int sinif;
	float puan;
};

void bastir(struct dersler atama){
	printf("\ngirdigin bilgiler;\nderslerin;\n");
	printf("ders1:%s\n",atama.ders1);
	printf("ders2:%s\n",atama.ders2);
	printf("ders3:%s\n",atama.ders3);
	printf("ders4:%s\n",atama.ders4);
	printf("sinifin:%d\n",atama.sinif);
	printf("aldigin puanin:%.3f",atama.puan);
}

int main(){
	printf("lutfen sinifini ve puanini ve derslerini gir.\n");
	struct dersler atama;
	printf("ders 1:");
	scanf("%s",atama.ders1);
	printf("ders 2:");
	scanf("%s",atama.ders2);
	printf("ders 3:");
	scanf("%s",atama.ders3);
	printf("ders 4:");
	scanf("%s",atama.ders4);
	printf("sinifin:");
	scanf("%d",&atama.sinif);
	printf("puanin:");
	scanf("%f",&atama.puan);
	
	bastir(atama);
	return 0;
}
