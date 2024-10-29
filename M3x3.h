#ifndef __M3x3_H_INCLUDED__
#define __M3x3_H_INCLUDED__
void addition1(float mat11[3][3], float mat22[3][3], float mat_add1[3][3]);
void difference1(float mat11[3][3], float mat22[3][3], float mat_diff1[3][3]);
void produit1(float mat11[3][3], float mat22[3][3], float mat_prod1[3][3]);
float determinant1(float matu[3][3]);
void transpose1(float matu[3][3], float trans_matu[3][3]);
float trace1(float matu[3][3]);
#endif 