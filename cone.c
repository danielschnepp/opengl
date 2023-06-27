#include <stdio.h>
#include <math.h>

float sommet[3] = { 0, 0, 1 };
float base[3] = { 0 };
float point[3] = { 0 };

float degres_to_radians(float angle){
	return angle * M_PI / 180;
}

int main(int argc, char *argv[]){
	int i;
	int j;
	int nb_pts = 0;
	float dist_pt = 0;

	sscanf(argv[1],"%d",&nb_pts);

	for (i = 0;i <= nb_pts;i++){
		float angle = 360.0 / nb_pts * i;
		float x = cos(degres_to_radians(angle)) * 1;
		float y = sin(degres_to_radians(angle)) * 1;
		float z = 0;

		if (i > 0) {	
			printf("%f %f %f\n ", point[0], point[1], point[2]);
			printf("%f %f %f\n ", base[0], base[1], base[2]);
			printf("%f %f %f\n ", x, y, z);

			printf("%f %f %f\n ", point[0], point[1], point[2]);
			printf("%f %f %f\n ", x, y, z);
			printf("%f %f %f\n ", sommet[0], sommet[1], sommet[2]);
		}

		point[0] = x;
		point[1] = y;
		point[2] = z;


	}
	return 0;
}

