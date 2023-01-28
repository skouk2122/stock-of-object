#ifndef ARTICLE_H
#define ARTICLE_H
#include <string>
using namespace std;

class Article
{
	protected:
	string name;
	double prix;
	public:
		Article();
		Article(string , double);
		Article(const Article & );
		virtual ~Article();
		virtual double GetPrix();
		virtual string GetName();
		void SetPrix(double);
		virtual void Afficher();
		friend istream& operator>>(istream& , Article& );
		friend ostream& operator<<(ostream& , const Article& );
};

#endif
