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
	
	int a[m][n], c[m+2][n+2], v[3][3];
	srand(time(NULL));
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j] = rand()%255;
			printf("%d	", a[i][j]);
		}
		printf("\n\n");
	}
	for(int i=1;i<m+1;i++){
		for(int j=1;j<n+1;j++){
			c[i][j] = a[i-1][j-1];
		}
	}
	for(int i=0;i<m+2;i++){
		c[0][i]= 0;
	}
	for(int i=0;i<m+2;i++){
		c[m+1][i]= 0;
	}
	for(int i=0;i<n+2;i++){
		c[i][0]= 0;
	}
	for(int i=0;i<n+2;i++){
		c[i][n+1]= 0;
	}
	printf("3'e 3'luk filtreyi giriniz.\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("v[%d][%d]=",i,j);
			scanf("%d", &v[i][j]);
		}
	}
	printf("Sikistirilmis matris:\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			a[i][j] = v[0][0]*c[i][j] + v[0][1]*c[i][j+1] + v[0][2]*c[i][j+2] + v[1][0]*c[i+1][j] + v[1][1]*c[i+1][j+1] + v[1][2]*c[i+1][j+2] + v[2][0]*c[i+2][j] + v[2][1]*c[i+2][j+1] + v[2][2]*c[i+2][j+2];
			printf("%d	", a[i][j]);
		}
		printf("\n\n");
	}
}
