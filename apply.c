#include <stdio.h>

int main(int argc, char *argv[]){
	int exit = 0;
	int i = 0;
	int j = 0;
	int k = 1;
	int t = 0;
	float matrice [4][4] = { 0.0 };
		float tab_depart [4] = { 0.0 };
		float tab_arrivee [4] = { 0.0 };

	/*lecture valeurs */

	for(i = 0;i < 4; i++){
		for(j = 0;j < 4;j++){
			sscanf(argv[k],"%f",&matrice[j][i]);
			k++;
		}
	}
	while(1) {
		for(t = 0;t < 3;t++){
			exit = scanf("%f",&tab_depart[t]);
			if (exit == EOF) break;
		}
		if (exit == EOF) break;
		tab_depart [3] = 1.0;

		/*Calcul de multiplication de matrice*/
		
		for(i = 0;i < 4;i++){
			tab_arrivee[i] = 0;
			for(j = 0;j < 4;j++){
				tab_arrivee[i] += matrice[j][i] * tab_depart[j];
			}
		}
					
		/*affichage résultat*/
	
		/*for(i = 0;i < 4;i++){
			for(j = 0;j < 4;j++){
				printf("%3.3f ",matrice[j][i]);
			}
			printf("\n");
		}
		printf("\n");*/
		for(t = 0;t < 3;t++){
			printf("%3.3f ",tab_arrivee[t]);
		}
		printf("\n");
		
	}
	return 0;
}

