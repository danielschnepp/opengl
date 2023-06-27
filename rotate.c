#include <stdio.h>
#include <math.h>


int main(int argc, char *argv[]){

	//Initialisation

	int i = 0;							//Pour l'incrémentation
	int j = 0;							//Pour l'incrémentation
	float angle = 0;
	float x = 0;
	float y = 0;
	float z = 0;
	float c = 0;
	float s = 0;
	float t = 0;
	float matrice [4][4] = { 0 };

	sscanf(argv[1],"%f",&angle);	
	sscanf(argv[2],"%f",&x);	
	sscanf(argv[3],"%f",&y);	
	sscanf(argv[4],"%f",&z);
	
	//Convertion des degrés en radians

	angle = angle / 180 * M_PI;

	//Suite de l'initialisation

	c = cos(angle);
	s = sin(angle);
	t = 1 - c;
	
	matrice [0][0] = t * x * x + c;
	matrice [0][1] = t * x * y - s * z;
	matrice [0][2] = t * x * z + s * y;
	matrice [0][3] = 0;
	matrice [1][0] = t * x * y + s * z;
	matrice [1][1] = t * y * y + c;
	matrice [1][2] = t * y * z - s * x;
	matrice [1][3] = 0;
	matrice [2][0] = t * x * y - s * z;
	matrice [2][1] = t * y * z + s * x;
	matrice [2][2] = t * z * z + c;
	matrice [2][3] = 0;
	matrice [3][0] = 0;
	matrice [3][1] = 0;
	matrice [3][2] = 0;
	matrice [3][3] = 1;

	//Affichage des résultats

	for(i = 0;i < 4;i++){
		for(j = 0;j < 4;j++){
			printf("%f ",matrice[j][i]);
		}
		printf("\n");
	}
	printf("\n");
	return 0;
}


