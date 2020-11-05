#ifndef FILIERE_H
#define FILIERE_H
#include <bits/stdc++.h>
#include "matiere.h"
#include "etudiant.h"
using namespace std;


class filiere {
	int id_filiere,nbre_etudiants;
	vector<etudiant> etudiants;
	
	public:
	
	filiere(int id,int nbre ,vector<etudiant> tab);
	void setFiliere(int id,int nbre ,vector<etudiant> tab);
	
	int  getid(){return (id_filiere);}
	int getnbre(){return (nbre_etudiants);}
	vector<etudiant> getetudiants(){return (etudiants);}
	void affiche();
	
	
	

};
#endif

