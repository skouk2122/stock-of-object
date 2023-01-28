#include "ArticleEnSolde.h"
#include <iostream>
using namespace std;

ArticleEnSolde::ArticleEnSolde():Article()
{
	cout<<"constructeur par default de la class ArticleEnSolde"<<endl;
	remise=0;
}

ArticleEnSolde::~ArticleEnSolde()
{
	cout<<"destructeur de la class ArticleEnSolde"<<endl;
}

void ArticleEnSolde::SetRemise(double r){
    remise=r;
};

double ArticleEnSolde::GetPrix(){
    return (prix-prix/remise);
}

ArticleEnSolde::ArticleEnSolde(string n , double p , double r):Article(n,p)
{
	cout<<"constructeur usuel de la class ArticleEnSolde"<<endl;
	remise=r;
}

void ArticleEnSolde::Afficher(){
	
	Article::Afficher();
	cout<<name<<" apres l remise "<<remise<<" % est par : "<<GetPrix()<<"$" <<endl;
	
}

istream& operator>>(istream& is, ArticleEnSolde& a){
	
	cout<<"saisier le name de la article : ";
	is>>a.name;
	cout<<"saisier le prix de la article : ";
	is>>a.prix;
	cout<<"saisir la remise :";
	is>>a.remise;
	return is;
}

ostream& operator<<(ostream& os, const ArticleEnSolde& a){
	os<<a.name<<" est par , "<<a.prix<<"$" <<" est  apres las remise "<<a.remise<<" % est par : "<<(a.prix-a.prix/a.remise)<<"$" <<endl;
	return os;
}


