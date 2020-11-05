#ifndef ETUDIANT_H
#define ETUDIANT_H
#include <bits/stdc++.h>
#include "matiere.h"

using namespace std;


class etudiant {
	int numcarte,telephone,nbrematiere;
	double moyenne=0;

	vector<matiere> mm;
	
	public:
	etudiant(int a,int  b ,int  c,vector<matiere> tab);
	void setEtudiant(int a,int  b ,int  c,vector<matiere> matiere_tab);
	
	int  getnumcarte();
	int gettelephone();
	int getnummatiere();
	double getmoyenne();
	double calcul_moyenne();

	vector<matiere> getmatiere();
	void affiche();
	bool reussi();
	
	
	

};
#endif
