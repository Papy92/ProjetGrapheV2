#ifndef  SOM
#define SOM 0
#include "CArc.h"

#define numero_negatif 301
#define indice_incorrecte 302
#define destination_incoh�rente 303
#define argument_null 304
#define echec_malloc 305
#define liste_vide 306
#define arc_introuvable 307
#define arc_existant 308

class CSommet {

private:
			/*************
			 * ATTRIBUTS *
			 *************/

	/*Numero du sommet*/
	unsigned int uiSOMNumero;

	/*Nombre d'arcs arrivant au sommet*/
	unsigned int uiSOMNbArcArrivant;

	/*Liste des arcs arrivant au sommet*/
	CArc** ppARCSOMArcArrivant;

	/*Nombre d'arc sortant du sommet*/
	unsigned int uiSOMNbArcSortant;

	/*Liste des arcs sortant au sommet*/
	CArc** ppARCSOMArcSortant;

public:

			/*****************
			 * CONSTRUCTEURS *
			 *****************/
	
	/*********************************************************
	Constructeur par d�faut de la classe CSommet
	*********************************************************/
	CSommet();

	/*********************************************************
	Constructeur de recopie de la classe CSommet
	prenant en param�tre un CSommet
	*********************************************************/
	CSommet(CSommet& SOMSommet);

	/*********************************************************
	Constructeur de recopie de la classe CSommet
	prenant en param�tre un entier
	*********************************************************/
	CSommet(int iNumeroSommet);

			/***************
			 * DESTRUCTEUR *
			 ***************/

	/*********************************************************
	Destructeur de la classe CFichier
	*********************************************************/
	~CSommet();

			/***********
			 * GETTERS *
			 ***********/

	/*********************************************************
	Retourne le numero du sommet
	*********************************************************/
	unsigned int SOMLireNumeroSommet();

	/*********************************************************
	Retourne le nombre d'arc arrivant au sommet
	*********************************************************/
	unsigned int SOMLireNombreArcArrivant();

	/*********************************************************
	Retourne l'arc arrivant � l'indice iIndice 
	du tableau des arcs arrivant
	*********************************************************/
	CArc* SOMLireArcArrivant(int iIndice);

	/*********************************************************
	Retourne le nombre d'arc sortant du sommet
	*********************************************************/
	unsigned int SOMLireNombreArcSortant();

	/*********************************************************
	Retourne l'arc sortant � l'indice iIndice
	du tableau des arcs sortant
	*********************************************************/
	CArc* SOMLireArcSortant(int iIndice);

			/***********
			 * SETTERS *
			 ***********/

	/*********************************************************
	Modifie le numero du sommet
	*********************************************************/
	void SOMModifierNumeroSommet(int iNumero);

	/*********************************************************
	Ajoute un arc dans la liste des arcs arrivants
	*********************************************************/
	void SOMAjouterArcArrivant(CArc* pARCArc);

	/*********************************************************
	Modifie l'arc ayant pour destination iAncienDestination par 
	iNouvelleDestination dans la liste des arcs arrivants
	*********************************************************/
	void SOMModifierArcArrivant(int iAncienDestination, int iNouvelleDestination);

	/*********************************************************
	Supprime l'arc � l'indice iIndice dans la liste des arcs arrivants
	*********************************************************/
	void SOMSupprimerArcArrivant(int iDestination);

	/*********************************************************
	Ajoute un arc dans la liste des arcs sortants
	*********************************************************/
	void SOMAjouterArcSortant(CArc* pARCArc);

	/*********************************************************
	Modifie l'arc � l'indice iIndice dans la liste des arcs sortants
	*********************************************************/
	void SOMModifierArcSortant(int iAncienDestination, int iNouvelleDestination);

	/*********************************************************
	Supprime l'arc � l'indice iIndice dans la liste des arcs sortants
	*********************************************************/
	void SOMSupprimerArcSortant(int iDestination);

			/************
			 * METHODES *
			 ************/

	/*********************************************************
	Inverse l'orientation de tous les arcs reli�s au sommet
	*********************************************************/
	CSommet& SOMInverserArrivantPartant();

	/*********************************************************
	Recherche l'indice de l'arc arrivant de destination iDestination
	*********************************************************/
	int SOMRechercheIndiceArcArrivant(int iDestination);

	/*********************************************************
	Recherche l'indice de l'arc sortant de destination iDestination
	*********************************************************/
	int SOMRechercheIndiceArcSortant(int iDestination);

			/**************
			 * SURCHARGES *
			 **************/

	/*********************************************************
	Surcharge de l'op�rateur d'affectation pour la classe CSommet
	*********************************************************/
	CSommet& operator=(CSommet& SOMSommet);
};

#endif // SOM