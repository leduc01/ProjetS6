//////////////////////////////////////////////////
/// Projet S6 - Sujet 4 - Algorithme Génétique ///
///              entree_sortie.h               ///
//////////////////////////////////////////////////
/// \author Groupe Sujet 4
/// \file entree_sortie.h

#ifndef __ENTREE_SORTIE_H
#define __ENTREE_SORTIE_H

#include <string>
#include <stdlib.h>
#include <iostream>  
#include <typeinfo>
#include "interface.h"
#include "génération.h"
#include "tinyexpr.h"
#include <regex>
#include <sstream>
#include <fstream>

using namespace std;

// Validation
/// \fn bool testCoherenceDonnees(string)
/// \brief Appels de différentes fonctions afin de vérifier que les valeurs données par l'utilisateurs sont valides
/// \param string nomFichier
/// \return TRUE si toutes les données sont valides, FALSE sinon.
bool testCoherenceDonnees(string nomFichier);

/// \fn bool estEntierPositif(string)
/// \brief Fonction permettant de déterminer si la valeur passée en paramètre est un entier positif ou non.
/// \param string valeur
/// \return TRUE si la valeur passé en argument est un entier positif, renvoie FALSE sinon.
bool estEntierPositif(string valeur); //MODIFICATION CDS  A JUSTIFIER (bool estEntierPositif(auto valeur))//

/// \fn bool estFloatPositif(string)
/// \brief Fonction permettant de déterminer si la valeur passée en paramètre est un nombre décimal positif ou non.
/// \param string valeur
/// \return Renvoie TRUE si la valeur passé en argument est un nombre décimal positif, renvoie FALSE sinon.
bool estFloatPositif(string valeur); //MODIFICATION CDS  A JUSTIFIER (bool estFloatPositif(auto valeur))//

/// \fn bool estProbabilite(string)
/// \brief Fonction permettant de déterminer si la valeur passée en paramètre est un nombre décimal compris entre 0 et 1 (inclus) ou non.
/// \param string valeur
/// \return Renvoie TRUE si la valeur passé en argument est un nombre décimal compris dans l'intervalle [0; 1], renvoie FALSE sinon.
bool estProbabilite(string valeur); //MODIFICATION CDS  A JUSTIFIER (bool estProbabilite(auto valeur))//

/// \fn bool estString(string)
/// \brief Fonction permettant de déterminer si la valeur passée en paramètre est une chaine de caractères.
/// \param string valeur
/// \return Renvoie TRUE si la valeur passé en argument est une chaine de caractères, renvoie FALSE sinon.
bool estString(string valeur); //MODIFICATION CDS  A JUSTIFIER bool estString(auto valeur))//

/// \fn bool estParsable(string)
/// \brief Fonction permettant de déterminer si la chaine de caractère passée en paramètre peut être lue par le parser qui effectue le calcul.
/// \param string fonction
/// \return Renvoie TRUE si la chaine de caractère est correcte, renvoie FALSE sinon.
bool estParsable(string fonction); //MODIFICATION CDS  A JUSTIFIER bool estParsable(auto valeur))//

// Lecture
/// \fn float* lireStat(FILE*)
/// \brief Fonction permettant de d'obtenir toutes les statistiques de la génération en cours.
/// \param FILE* F est un pointeur sur le fichier des statistiques
/// \return Renvoie un tableau de float contenant l'ensemble des statistique pour la génération en cours.
float* lireStat(FILE *F);	//MODIFICATION CDS  A JUSTIFIER (int[3] lireStat(File *f))//

/// \fn string* lireInfoRegen(string)
/// \brief Fonction permettant d'obtenir les informations nécessaire pour créer une nouvelle génération. 
/// \param string nomFichier 
/// \return Renvoie un tableau de chaines de caractères permettant de créer une nouvelle génération.
string* lireInfoRegen(string nomFichier);

/// \fn float* lireInitialisation(string)
/// \brief Fonction permettant d'obtenir les informations nécessaire pour créer un nouvel individu
/// \param string nomFichier 
/// \return Renvoie un tableau de float permettant de créer une nouvel individu
float* lireInitialisation(string nomFichier);

/// \fn float* lireScoreIndividu(string, int, int)
/// \brief Fonction permettant d'obtenir les scores pour une génération et un critère donnés.
/// \param string nomFichierPopulation
/// \param int generation donne le numéro de la génération à lire.
/// \param int indice donne l'indice du tableau des scores à lire. 
/// \return Renvoie un tableau de float contenant les scores.
float* lireScoreIndividu(string nomFichierPopulation, int generation, int indice); //MODIFICATION CDS  A JUSTIFIER (int lireScoreIndividu(String nomFichier, int generation, int indice))//

// Ecriture
/// \fn bool ecrireFichierDonnees(Interface *, string)
/// \brief Fonction permettant d'écire dans un fichier l'ensemble des données que l'utilisateur entre dans l'interface graphique.
/// \param Interface* interface
/// \param string nomFichier
/// \return Renvoie TRUE si pas d'erreur lors de l'écriture, FALSE sinon.
class Interface;
bool ecrireFichierDonnees(Interface *interface, string nomFichier); //MODIFICATION CDS  A JUSTIFIER (bool ecrireFichierDonnees(Interface interface, string file))//

/// \fn bool ecrirePopulation(Population *, string)
/// \brief Fonction permettant d'écire dans un fichier l'ensemble d'une population.
/// \param Population* P pointeur sur une population
/// \param string nomFichier fichier contenant les populations
/// \return Renvoie TRUE s'il n'y a pas eu d'erreur lors de l'écriture, FALSE sinon.

/// \fn bool calculerEcrireStats(Population *, string, string)
/// \brief Fonction permettant d'écrire les statistiques d'une population passée en paramètre dans un fichier passé en paramètre
/// \param Population* P pointeur sur une population
/// \param string nomFichierPopulation
/// \param string nomFichierStats
/// \return Renvoie TRUE s'il n'y a pas eu d'erreur lors de l'écriture, FALSE sinon.
class Population;
bool ecrirePopulation(Population *P, string nomFichier); //MODIFICATION CDS  A JUSTIFIER (bool ecrirePopulation(Population p, String nomFichier))//
bool calculerEcrireStats(Population *P, string nomFichierPopulation, string nomFichierStats); //MODIFICATION CDS  A JUSTIFIER (bool calculerEcrireStats(Population p, string file1, string file2))//

/// \fn bool ecrireFichier(string, string, string, Population *)
/// \brief Fonction permettant d'écrire 
/// \param string nomFichierSortie
/// \param string nomFichierParametr
/// \param Population *P pointeur sur la population à écrire.
/// \return Renvoie TRUE s'il n'y a pas eu d'erreur lors de l'écriture, FALSE sinon.
bool ecrireFichier(string nomFichierSortie, string nomFichierParametr, Population *P); //MODIFICATION CDS  A JUSTIFIER (bool ecrireFichier(string file1, string file2, string file3))//

//MODIFICATION CDS  A JUSTIFIER : SUPRESSION ecrireUnScore(int score, file *f)//je l'avais tellement, mais tellement dis que ca servait a rien ca aussi

/// \fn bool ecrireLatex(string, Population *)
/// \brief Fonction permettant d'écrire un fichier de résultats pour l'utilisateur au format LaTeX.
/// \param string nomFichierSortie.
/// \param Population *P pointeur sur la population à écrire.
/// \return Renvoie TRUE s'il n'y a pas eu d'erreur lors de l'écriture, FALSE sinon.
bool ecrireLatex(string nomFichierSortie, Population *P); //MODIFICATION CDS  A JUSTIFIER (bool ecrirePopulation(Population p, String nomFichier))//

/// \fn bool ecrirePostscript(string)
/// \brief Fonction permettant d'écrire un fichier de résultats pour l'utilisateur au format PostScript
/// \param string nomFichierSortie
/// \return Renvoie TRUE s'il n'y a pas eu d'erreur lors de l'écriture, FALSE sinon.
bool ecrirePostscript(string nomFichierSortie);

/// \fn bool ecrireXfig(string)
/// \brief Fonction permettant d'écrire un fichier de résultats pour l'utilisateur au format Xfig
/// \param string nomFichierSortie
/// \return Renvoie TRUE s'il n'y a pas eu d'erreur lors de l'écriture, FALSE sinon.
bool ecrireXfig(string nomFichierSortie);


#endif
