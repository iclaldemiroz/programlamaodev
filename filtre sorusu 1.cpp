#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	printf("Kaca kaclik bir matris isteniyor?\n");
	
	int m,n;
	printf("Satir sayisi: ");
	scanf("%d", &m);
	printf("Sutun sayisi: ");
	scanf("%d", &n);
	
	int a[m][n], b[m-2][n-2], v[3][3];
	srand(time(NULL));
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j] = rand()%255;
			printf("%d	", a[i][j]);
		}
		printf("\n\n");
	}
	
	printf("3'e 3'luk filtreyi giriniz.\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("v[%d][%d]=",i,j);
			scanf("%d", &v[i][j]);
		}
	}
	
	printf("Sikistirilmis matris:\n");
	for(int i=0;i<m-2;i++){
		for(int j=0;j<n-2;j++){
			b[i][j] = v[0][0]*a[i][j] + v[0][1]*a[i][j+1] + v[0][2]*a[i][j+2] + v[1][0]*a[i+1][j] + v[1][1]*a[i+1][j+1] + v[1][2]*a[i+1][j+2] + v[2][0]*a[i+2][j] + v[2][1]*a[i+2][j+1] + v[2][2]*a[i+2][j+2];
			printf("%d	", b[i][j]);
		}
		printf("\n\n");
	}	
	
	return 0;
}






