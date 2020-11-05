#include <bits/stdc++.h>
#include "string.h"
#include "matiere.h"
#include "matiere.cpp"
#include "etudiant.cpp"
#include "filiere.cpp"

#include "etudiant.h"
#include "filiere.h"
using namespace std;
int main(){
	etudiant dali(1,321,3,{{"math",4,17},{"phy",3,20},{"arabe",1,14}});
	etudiant omar(2,2,3,{{"math",4,11},{"phy",3,2},{"arabe",1,19}});
	etudiant samir(3,3,3,{{"math",4,0},{"phy",3,0.25},{"arabe",1,10}});
	
	
	
	etudiant rafika(4,4,3,{{"math",4,1},{"phy",3,15},{"arabe",1,20}});
	
	
	
	filiere eco(1,2,{rafika,samir});
	filiere math(1,2,{dali,omar});
	cout<<"etudiants du filiere eco";
	cout<<"\n";
	eco.affiche();
	vector<matiere> liste_des_matiere_eco = (eco.getetudiants()[0]).getmatiere();
	for (auto i:liste_des_matiere_eco)
	cout<<i.getname()<<" ";
	cout<<"\n";
	
	cout<<"etudiants du filiere math";
	cout<<"\n";
	math.affiche();
	vector<matiere> liste_des_matiere_math = math.getetudiants()[0].getmatiere();
	for (auto i:liste_des_matiere_math)
	cout<<i.getname()<<" ";
	cout<<"\n"; 
	
	double m1=dali.getmoyenne();
	double m2=omar.getmoyenne();
	double m3=samir.getmoyenne();
	double m4=rafika.getmoyenne();
	cout<<(dali.reussi()?"reussi":"redoublant")<<"\n";
	cout<<(omar.reussi()?"reussi":"redoublant")<<"\n";
	cout<<(samir.reussi()?"reussi":"redoublant")<<"\n";
	cout<<(rafika.reussi()?"reussi":"redoublant")<<"\n";
	


	
return 0;
}
