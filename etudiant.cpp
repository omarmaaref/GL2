#include "etudiant.h"
#include "matiere.h"
#include <bits/stdc++.h>
using namespace std;


etudiant::etudiant(int a,int  b ,int  c,vector<matiere> tab)
{
		setEtudiant(a,b,c, tab);
	}
	void etudiant::setEtudiant(int a,int  b ,int  c,vector<matiere> tab){
	numcarte=a;
	telephone=b;
	nbrematiere=c;
	mm=tab;
	}
	
	
	int  etudiant::getnumcarte(){return(numcarte);}
	int etudiant::gettelephone(){return(telephone);}
	int etudiant::getnummatiere(){return(nbrematiere);}
	double etudiant::getmoyenne(){return (calcul_moyenne());}
	vector<matiere> etudiant::getmatiere(){ return (mm);}

	void etudiant::affiche(){
	cout<<numcarte<<telephone<<nbrematiere<<moyenne;
	}
	double etudiant::calcul_moyenne(){
	double note=0,c=0;
	
	for (int i=0;i<(int) mm.size();i++){
		note+=mm[i].getnote()*mm[i].getcoef();
		c+=mm[i].getcoef();
		}	
	moyenne=note/c;
	return moyenne;
	}
	
	bool etudiant::reussi(){

	return (calcul_moyenne()>10);
		}
	
	
	
