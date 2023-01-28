#include <iostream>
using namespace std;
#include "Article.h"
#include "ArticleEnSolde.h" 
#include "Stock.h"

int main(int argc, char** argv) {

    ArticleEnSolde a;
    Article b,c;
    Stock s;
    
    cin>>a>>b>>c;
    cout<<a<<b<<c;
    
    s.ajout(&a);
    s.ajout(&b);
    s.ajout(&c);
    s.Afficher();
    cout<<"total prix : "<<s.totalprix()<<"$"<<endl;
   

	return 0;
}
