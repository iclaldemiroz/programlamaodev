#include<stdio.h>
#include<string.h>
int main(){
	int harfSayisi=0;
	int sesliHarfSayisi=0;
	char kelime[10];
	char sesliHarf[] = {'a','e','i','o','u'};
	
	printf("Kucuk harf kullanarak ve Turkce karakter kullanmadan bir kelime giriniz: ");
	scanf("%s",kelime);
	
	for(int i=0; i<strlen(kelime);i++){
        if (isalpha(harf[i])) {
            harfSayisi++;
	}
}
	printf("%d tane sesli harfi vardýr.",sesliHarf,kelime);
	for(int i=0;i<strlen(kelime);i++) {
		for(int j=0;j<=5;j++) {
			if(kelime[i]==sesliHarf[j]) {
				sesliHarfSayisi++ ;
			}
		}
	}
	printf("girilen kelimenin %d tane harfi var.",harfSayisi);
	
	printf("%d tane sesli harfi vardýr.",sesliHarf,kelime);
	
	
	
	return 0;
}
