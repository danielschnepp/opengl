#include <stdio.h>

int main (int argc, char *argv[]){
	float tab [4][4] ={ 0 };
	float s;
	int i;
	int j;
	sscanf(argv[1],"%f", &s);
	for(i = 0;i < 4;i++){
		tab[i][i] = s ;
	}
	for(i = 0;i < 4;i++) {
		for(j = 0;j < 4;j++) {
			printf("%f ",tab[j][i]);
		}
		printf("\n");
	}
        return 0;
}
