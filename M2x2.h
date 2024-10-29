#ifndef __M2x2_H_INCLUDED__
#define __M2x2_H_INCLUDED__
void addition(float mat1[2][2], float mat2[2][2], float mat_add[2][2]);
void difference(float mat1[2][2], float mat2[2][2], float mat_diff[2][2]);
void produit(float mat1[2][2], float mat2[2][2], float mat_prod[2][2]);
float determinant(float mat[2][2]);
void inverse(float mat[2][2], float inv_mat[2][2]);
void transpose(float mat[2][2], float trans_mat[2][2]);
float trace(float mat[2][2]);
#endif 