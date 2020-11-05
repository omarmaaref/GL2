#include "filiere.h"
#include "etudiant.h"
#include <bits/stdc++.h>
using namespace std;


filiere::filiere(int id,int nbre ,vector<etudiant> tab){
		setFiliere(id,nbre,tab);
	}
	
	void filiere::setFiliere(int id,int nbre ,vector<etudiant> tab){
	id_filiere=id;
	nbre_etudiants=nbre;
	etudiants=tab;
	}
	
	void filiere::affiche(){	
	for (int i=0;i<(int) etudiants.size();i++){
		cout<<"id du l etudiant est "<<etudiants[i].getnumcarte()<<" ";	
	}
	cout<<"\n";}

	
	
	

