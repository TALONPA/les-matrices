#include <iostream>

#include "M2x2.h"
#include "M3x3.h"

int main(int argc, char** argv)
{
	float mat1[2][2], mat2[2][2], mat_add[2][2], det, trace_mat, mat_diff[2][2], mat_prod[2][2], mat[2][2], inv_mat[2][2], trans_mat[2][2];
	float mat11[3][3], mat22[3][3], mat_add1[3][3], trace_matu, mat_diff1[3][3], mat_prod1[3][3], matu[3][3], trans_matu[3][3];
	int ordre, nbre, i, j;
	std::cout << "Quel est l'ordre des matrices que vous voullez manipuler" << std::endl;
	std::cout << "2- ordre deux\n3- ordre trois.\nReponse:  " << std::endl;
	std::cin >> ordre;
	if (ordre == 2) {
		std::cout << "Vous voullez effectuer des operations sur une (1) ou deux (2) matrices" << std::endl;
		std::cout << "1- deux matrices\n2- une matrice.\nReponse:  " << std::endl;
		std::cin >> nbre;
		if (nbre == 1) {
			// reccupperation des elements des deux matrices.
			std::cout << "Veuiller entrer les elements de la 1ere matrice." << std::endl;
			for (i = 0; i < 2; i++) {
				for (j = 0; j < 2; j++) {
					std::cout << "Entrer l'element de ligne:  " << i << " et de colonne:  " << j << std::endl;
					std::cin >> mat1[i][j];
				}
			}
			std::cout << "Veuiller entrer les elements de la 2eme matrice." << std::endl;
			for (i = 0; i < 2; i++) {
				for (j = 0; j < 2; j++) {
					std::cout << "Entrer l'element de ligne:  " << i << " et de colonne:  " << j << std::endl;
					std::cin >> mat2[i][j];
				}
			}
			std::cout << "la somme de ces deux matrice est: " << std::endl;
			// cette fonction addition permet de calculer la sommes des deux matrices mat1 et mat2.
			// Qui donne une matrice mat_add.
			addition(mat1, mat2, mat_add);
			for (i = 0; i < 2; i++) {
				std::cout << "|";
				for (j = 0; j < 2; j++) {
					std::cout << mat_add[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
			// cette fonction difference permet de calculer la difference des deux matrices mat1 et mat2.
			// Qui donne une matrice mat_diff.
			std::cout << "la difference de ces deux matrice est: " << std::endl;
			difference(mat1, mat2, mat_diff);
			for (i = 0; i < 2; i++) {
				std::cout << "|";
				for (j = 0; j < 2; j++) {
					std::cout << mat_diff[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
			// cette fonction produit permet de calculer le produit des deux matrices mat1 et mat2.
			// Qui donne une matrice mat_prod.
			std::cout << "le produit de ces deux matrice est: " << std::endl;
			produit(mat1, mat2, mat_prod);
			for (i = 0; i < 2; i++) {
				std::cout << "|";
				for (j = 0; j < 2; j++) {
					std::cout << mat_prod[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
		}
		else {
			// Reccuperation des elements de la matrice.
			std::cout << "Entrer les elements de la matrice." << std::endl;
			for (i = 0; i < 2; i++) {
				for (j = 0; j < 2; j++) {
					std::cout << "Entrer l'element de ligne:  " << i << " et de colonne:  " << j << std::endl;
					std::cin >> mat[i][j];
				}
			}
			// Cette fonction determinant permet de calculer le determinant de la matrice mat.
			det = determinant(mat);
			std::cout << "Le determinant de cette matrice est:  " << det << std::endl;
			if (det == 0) {
				std::cout << "l'inverse de cette matrice n'existe pas." << std::endl;
			}
			else {
				// Cette fonction inverse permet de calculer l'inverse de la matrice mat.
				inverse(mat, inv_mat);
				std::cout << "L'inverse de cette matrice est: " << std::endl;
				for (i = 0; i < 2; i++) {
					std::cout << "|";
					for (j = 0; j < 2; j++) {
						std::cout << inv_mat[i][j] << " ";
					}
					std::cout << "|";
					std::cout << std::endl;
				}
			}
			// Cette fonction transpose permet de calculer la transposee de la matrice mat.
			transpose( mat, trans_mat);
			std::cout << "La transposee de cette matrice est: " << std::endl;
			for (i = 0; i < 2; i++) {
				std::cout << "|";
				for (j = 0; j < 2; j++) {
					std::cout << trans_mat[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
			// Cette fonction trace permet de calculer la trace de la matrice mat.
			trace_mat = trace(mat);
			std::cout << "La trace de cette Matrice est: " << trace_mat << std::endl;
		}
	}
	else if (ordre == 3) {
		std::cout << "Vous voullez effectuer des operations sur une (1) ou deux (2) matrices" << std::endl;
		std::cout << "1- deux matrices\n2- une matrice.\nReponse:  " << std::endl;
		std::cin >> nbre;
		if (nbre == 1) {
			// reccupperation des elements des deux matrices.
			std::cout << "Veuiller entrer les elements de la 1ere matrice." << std::endl;
			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++) {
					std::cout << "Entrer l'element de ligne:  " << i << " et de colonne:  " << j << std::endl;
					std::cin >> mat11[i][j];
				}
			}
			std::cout << "Veuiller entrer les elements de la 2eme matrice." << std::endl;
			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++) {
					std::cout << "Entrer l'element de ligne:  " << i << " et de colonne:  " << j << std::endl;
					std::cin >> mat22[i][j];
				}
			}
			// cette fonction addition1 permet de calculer la sommes des deux matrices mat11 et mat22.
			// Qui donne une matrice mat_add1.
			std::cout << "la somme de ces deux matrice est: " << std::endl;
			addition1(mat11, mat22, mat_add1);
			for (i = 0; i < 3; i++) {
				std::cout << "|";
				for (j = 0; j < 3; j++) {
					std::cout << mat_add1[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
			// cette fonction difference1 permet de calculer la difference des deux matrices mat11 et mat22.
			// Qui donne une matrice mat_diff1.
			std::cout << "la difference de ces deux matrice est: " << std::endl;
			difference1(mat11, mat22, mat_diff1);
			for (i = 0; i < 3; i++) {
				std::cout << "|";
				for (j = 0; j < 3; j++) {
					std::cout << mat_diff1[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
			// cette fonction produit1 permet de calculer le produit des deux matrices mat11 et mat22.
			// Qui donne une matrice mat_prod1.
			std::cout << "le produit de ces deux matrice est: " << std::endl;
			produit1(mat11, mat22, mat_prod1);
			for (i = 0; i < 3; i++) {
				std::cout << "|";
				for (j = 0; j < 3; j++) {
					std::cout << mat_prod1[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
		}
		else {
			// Reccuperation des elements de la matrice.
			std::cout << "Entrer les elements de la matrice." << std::endl;
			for (i = 0; i < 3; i++) {
				for (j = 0; j < 3; j++) {
					std::cout << "Entrer l'element de ligne:  " << i << " et de colonne:  " << j << std::endl;
					std::cin >> matu[i][j];
				}
			}
			// Cette fonction determinant1 permet de calculer le determinant de la matrice matu.
			det = determinant1(matu);
			std::cout << "Le determinant de cette matrice est:  " << det << std::endl;
			// Cette fonction transpose1 permet de calculer la transposee de la matrice matu.
			transpose1(matu, trans_matu);
			std::cout << "La transposee de cette matrice est: " << std::endl;
			for (i = 0; i < 3; i++) {
				std::cout << "|";
				for (j = 0; j < 3; j++) {
					std::cout << trans_matu[i][j] << " ";
				}
				std::cout << "|";
				std::cout << std::endl;
			}
			// Cette fonction trace1 permet de calculer la trace de la matrice matu.
			trace_matu = trace1(matu);
			std::cout << "La trace de cette Matrice est: " << trace_matu << std::endl;
		}
	}
	else {
		std::cout << "Entrer un entier qui est soit 2 soit 3" << std::endl;
	}
	return 0;
}