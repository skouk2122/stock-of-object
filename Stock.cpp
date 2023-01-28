#include "Stock.h"

Stock::Stock(){
	cout<<"constructeur de la class Stock "<<endl;
}
Stock::~Stock(){
	cout<<"destructeur de la class Stock "<<endl;
}

bool Stock::exist(string n){
	for(int i=0;i<TabArt.size();i++){
		if(TabArt[i]->GetName()==n)
		return true;
	}
	return false;
}

bool Stock::ajout(Article *A){
	
	if(exist(A->GetName()) ){
	    return false;	
	}
	else {
		TabArt.push_back(A);
		return true;	
	}
}

double Stock::totalprix(){
	
	double somme=0;
	for(int i=0; i< TabArt.size();i++ ){
		
		somme+=TabArt[i]->GetPrix();
		
	}
	return somme;
}

void Stock::Afficher(){
	for(int i = 0 ; i<TabArt.size() ; i++){
		TabArt[i]->Afficher();
	} 
}

