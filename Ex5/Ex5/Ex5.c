//-----------------------------------------------------------------------------------//
// Nom du projet 		: Ex5
// Nom du fichier 		: Ex5.c
// Date de création 	: 29.11.2022
// Date de modification : xx.xx.20xx
//
// Auteur 				: JAR (Jérémy Affolter)
// Modificateur			: 
//
// Description          : Lire exercice 5 pour avoir la description
//
//
// Remarques			: 
//----------------------------------------------------------------------------------//
//-- directive préprocesseur pour supprimer certains warining --//
#pragma warning(disable : 4996)		//-- warning concernant les scanf

// DémoGit

//--- librairie standart ---//
#include <stdio.h>                  // entrée - sortie

////--- librairie perso ---//
//#include "MesFonctions.h"

//-- definition --// 
//#define LIMITE_MAX	10


//-- déclaration de constantes --// 
//const char VERSION_PROJET = 1;


//-- programme principal --// 
void main()
{
	//-- déclaration de variables locales --//
	char valUtilisateur = 'a';
	int valUtilisateurNum = 0;

	do
	{
		//-- messgae pour utilisateur --// 
		printf("\nChoisisser un programme a demmarer: A ou B, Q pour Quitter\n");

		//-- récuperation valeur utilisateur --// 
		scanf("%c", &valUtilisateur);

		//-- nettoyer le bufferclavier --// 
		while ((getchar() != '\n') && (getchar() != EOF));

		//-- Test de la lettre --//
		switch (valUtilisateur)
		{
			case 'A':
			case 'a':
				// Entrée d'une valeur entre 1 et 9
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
				// Valeur erronée
				printf("Le programme va se fermer");
				break;
		}
	}
	while (valUtilisateur == 'a' || valUtilisateur == 'A' || valUtilisateur == 'b' || valUtilisateur == 'B');
}