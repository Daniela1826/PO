#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
	float matriz1[10][10];
	float matriz2[10][10];
	float matriz3[10][10];
	int a1, a2, b1, b2, c1, c2, i, j, k;
	FILE *fp;
	
	// Lendo a matriz1
	fp = fopen("matriz1.txt", "r");
	if (fp == NULL){
		return 0;
	}
	fscanf(fp, "%d %d", &a1, &a2);
	for(i=0; i<a1; i++){
		for(j=0; j<a2; j++){
			fscanf(fp, "%f", &matriz1[i][j]);
		}
	}
	fclose(fp);
	
		// Lendo a matriz2
	fp = fopen("matriz2.txt", "r");
	if (fp == NULL){
		return 0;
	}
	fscanf(fp, "%d %d", &b1, &b2);
	for(i=0; i<b1; i++){
		for(j=0; j<b2; j++){
			fscanf(fp, "%f", &matriz2[i][j]);
		}
	}
	fclose(fp);
	
	//Somando as duas matrizes: C= a+b
	if (a1!= b1){
		printf("Matrizes Incompatíveis");
		return 0;
	}
	c1= a1;
	c2= b2;
	for(i =0; i<c1; i++){
		for(j = 0; j<c2; j++){
			matriz3[i][j]= 0.0;
			for(k=0; k<a2; k++){
				matriz3[i][j] += matriz1[i][k] + matriz2[k][j];
			}
		}
	}
	
	//Gravando matriz 3
	fp = fopen("matriz3.txt", "w");
	if(fp == NULL){
		return 0;
	}
	fprintf(fp, "%d %d\n", c1, c2);
	for(i = 0; i<c1; i++){
		for(j=0; j<c2; j++){
			fprintf(fp, "%.3f", matriz3[i][j]);
		}
	fprintf(fp, "\n");
	}
	fclose(fp);
	
	return 0;
}
