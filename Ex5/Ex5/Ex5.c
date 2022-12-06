//-----------------------------------------------------------------------------------//
// Nom du projet 		: Ex5
// Nom du fichier 		: Ex5.c
// Date de cr�ation 	: 29.11.2022
// Date de modification : xx.xx.20xx
//
// Auteur 				: JAR (J�r�my Affolter)
// Modificateur			: 
//
// Description          : Lire exercice 5 pour avoir la description
//
//
// Remarques			: 
//----------------------------------------------------------------------------------//
//-- directive pr�processeur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

// D�moGit

//--- librairie standart ---//
#include <stdio.h>                  // entr�e - sortie

////--- librairie perso ---//
//#include "MesFonctions.h"

//-- definition --// 
//#define LIMITE_MAX	10


//-- d�claration de constantes --// 
//const char VERSION_PROJET = 1;


//-- programme principal --// 
void main()
{
	//-- d�claration de variables locales --//
	char valUtilisateur = 'a';
	int valUtilisateurNum = 0;

	do
	{
		//-- messgae pour utilisateur --// 
		printf("\nChoisisser un programme a demmarer: A ou B, Q pour Quitter\n");

		//-- r�cuperation valeur utilisateur --// 
		scanf("%c", &valUtilisateur);

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

		//-- Test de la lettre --//
		switch (valUtilisateur)
		{
			case 'A':
			case 'a':
				// Entr�e d'une valeur entre 1 et 9
				printf("Entrez une valeur entre 1 et 9\n");
				scanf("%i", &valUtilisateurNum);

				//-- nettoyer le bufferclavier --// 
				while ((getchar() != '\n') && (getchar() != EOF));
				break;
			case 'B':
			case 'b':
				//
				break;
			default:
				// Valeur erron�e
				printf("Le programme va se fermer");
				break;
		}
	}
	while (valUtilisateur == 'a' || valUtilisateur == 'A' || valUtilisateur == 'b' || valUtilisateur == 'B');
}