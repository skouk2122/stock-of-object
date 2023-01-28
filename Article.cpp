#include "Article.h"
#include <iostream>
#include <string>
using namespace std;

Article::Article()
{
	cout<<"constructeur par default de la class Article"<<endl;
	name="";prix=0;
}

Article::Article(string n, double p):prix(p),name(n){
    cout<<"constructeur usuel de la class Article"<<endl;
};

Article::Article(const Article &a){
	cout<<"constructeur de copie de la class Article"<<endl;
	prix=a.prix;     name=a.name;
}

Article::~Article()
{
	cout<<"destructeur de la class Article"<<endl;
}

void Article::Afficher(){
	cout<<name<<" est par : "<<prix<<"$"<<endl;
}

double Article::GetPrix(){
	return prix;
}

void Article::SetPrix(double p){
	prix=p;
}

string Article::GetName(){
	return name;
}

istream&  operator>>(istream& is, Article& a){
	cout<<"saisier le name de la article : ";
	is>>a.name;
	cout<<"saisier le prix de la article : ";
	is>>a.prix;
	
	return is;
}

ostream&  operator<<(ostream& os, const Article& a){
	os<<a.name<<" est par : "<<a.prix<<"$"<<endl;
	
	return os;
}










