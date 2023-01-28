#ifndef STOCK_H
#define STOCK_H
#include <iostream>
#include <vector>
#include <string>
#include "Article.h"
#include "ArticleEnSolde.h"

using namespace std;

class Stock
{
	public:
		Stock();
		~Stock();
		bool exist(string n);
		bool ajout(Article *A);
		double totalprix();
	    void Afficher();
	protected:
		vector <Article *> TabArt;
};

#endif
