#include <bits/stdc++.h>
#include <string>
#ifndef MATIERE_GUARD
#define MATIERE_GUARD
using namespace std;
class matiere {
	string nom;
	double coef,note;
	public:
	matiere(string a,double b, double y);

	void setMatiere(string a,double b ,double c);
	
	string  getname();
	double getcoef();
	double getnote();
	
	
	

};
#endif
