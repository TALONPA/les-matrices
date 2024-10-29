#include "M3x3.h"

void addition1(float mat11[3][3], float mat22[3][3], float mat_add1[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat_add1[i][j] = mat11[i][j] + mat22[i][j];
		}
	}
}
void difference1(float mat11[3][3], float mat22[3][3], float mat_diff1[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat_diff1[i][j] = mat11[i][j] - mat22[i][j];
		}
	}
}
void produit1(float mat11[3][3], float mat22[3][3], float mat_prod1[3][3]) {
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			mat_prod1[i][j] = mat11[i][j] * mat22[i][j] + mat11[i][j] * mat22[i][j] + mat11[i][j] * mat11[i][j];
		}
	}
}
float determinant1(float matu[3][3]) {
	float det = (matu[0][0]) * ((matu[1][1] * matu[2][2]) - (matu[1][2] * matu[2][1])) - (matu[0][1]) * ((matu[1][0] * matu[2][2]) - (matu[1][2] * matu[2][0])) + (matu[0][1]) * ((matu[1][0] * matu[2][1]) - (matu[1][1] * matu[2][0]));
	return det;
}
void transpose1(float matu[3][3], float trans_matu[3][3]) {
	trans_matu[0][0] = matu[0][0];
	trans_matu[0][1] = matu[1][0];
	trans_matu[0][2] = matu[2][0];
	trans_matu[1][0] = matu[0][1];
	trans_matu[1][1] = matu[1][1];
	trans_matu[1][2] = matu[2][1];
	trans_matu[2][0] = matu[0][2];
	trans_matu[2][1] = matu[1][2];
	trans_matu[2][2] = matu[2][2];
}
float trace1(float matu[3][3]) {
	float trace_matu = matu[0][0] + matu[1][1] + matu[2][2];
	return trace_matu;
}