#ifndef ARTICLEENSOLDE_H
#define ARTICLEENSOLDE_H

#include "Article.h"

class ArticleEnSolde : public Article
{
	double remise;
	public:
		ArticleEnSolde();
		ArticleEnSolde(string,double,double );
	    ~ArticleEnSolde();
		void SetRemise(double s);
		virtual double GetPrix();
		virtual void Afficher();
		friend istream& operator>>(istream& , ArticleEnSolde& );
		friend ostream& operator<<(ostream& , const ArticleEnSolde& );
	protected:
};

#endif
