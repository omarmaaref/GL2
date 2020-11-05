
#include "matiere.h"
#include <bits/stdc++.h>
using namespace std;
void matiere::setMatiere(string s,double Coef, double Note){
	nom=s;
	coef=Coef;
	note=Note;
}
matiere::matiere(string s,double a,double b){
matiere::setMatiere(s,a,b);
}

string matiere::getname(){
 return (nom);	
}
double matiere::getcoef(){
return(coef);
}
double matiere::getnote(){
return(note);
}
