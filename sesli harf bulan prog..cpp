#include<stdio.h>
#include<string.h>

#define MAX_LEN 100

int main(){
	char text[MAX_LEN];
	printf("Enter a text: ");
	gets(text);
	
	int count=0;
	int lenght=strlen(text);
	for(int i=0; i<lenght; i++){
		char c= text[i];
		if(c=='a'|| c=='e' || c=='i' || c=='o' || c=='u' || c=='A'|| c=='E' || c=='I' || c=='O' || c=='U'){
			count++;
		}
	}
	printf("Number of vowels: %d\n",count);
	return 0;
}
