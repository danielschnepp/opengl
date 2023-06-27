#include <stdio.h>


int main(int argc, char *argv[]){
	int i; 									//Variable d'incrémentation
	int j; 									//Variable d'incréméntation
	int k;									//Variable d'incrémentation
	float x;
	float y;
	float z;
	float matrice [4][4] = { 0 };

	/*Convertissement des valeurs char en float*/

	sscanf(argv[1],"%f", &x);
	sscanf(argv[2],"%f", &y);
	sscanf(argv[3],"%f", &z);

	/*Initialisation de la matrice*/

	for(i = 0;i < 4;i++){
		matrice [i][i] = 1;
	}
	matrice [3][0] = x;	
	matrice [3][1] = y;	
	matrice [3][2] = z;
	for(j = 0;j < 4;j++){
		for(k = 0;k < 4;k++){
			printf("%f ", matrice [k][j]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}
