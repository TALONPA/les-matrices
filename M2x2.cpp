#include "M2x2.h" 

void addition(float mat1[2][2], float mat2[2][2], float mat_add[2][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat_add[i][j] = mat1[i][j] + mat2[i][j];
		}
	}
}
void difference(float mat1[2][2], float mat2[2][2], float mat_diff[2][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat_diff[i][j] = mat1[i][j] - mat2[i][j];
		}
	}
}
void produit(float mat1[2][2], float mat2[2][2], float mat_prod[2][2]) {
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat_prod[i][j] = mat1[i][j] * mat2[i][j] - mat1[i][j] * mat2[i][j];
		}
	}
}
float determinant(float mat[2][2]) {
	float det = mat[0][0] * mat[1][1] - mat[1][0] * mat[0][1];
	return det;
}
void inverse(float mat[2][2], float inv_mat[2][2]) {
	float det = determinant(mat);
	inv_mat[0][0] = (1 / det) * mat[1][1];
	inv_mat[1][0] = (1 / det) * mat[1][0] * (-1);
	inv_mat[0][1] = (1 / det) * mat[0][1] * (-1);
	inv_mat[1][1] = (1 / det) * mat[0][0];
}
void transpose(float mat[2][2], float trans_mat[2][2]) {
	trans_mat[0][0] = mat[0][0];
	trans_mat[1][0] = mat[0][1];
	trans_mat[0][1] = mat[1][0];
	trans_mat[1][1] = mat[1][1];
}
float trace(float mat[2][2]) {
    float trace_mat = mat[0][0] + mat[1][1];
	return trace_mat;
}
