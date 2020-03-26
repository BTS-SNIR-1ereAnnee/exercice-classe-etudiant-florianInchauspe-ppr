#include "Etudiant.h"
#include <iostream>

int main(void) {

    int x , y ;
    std::string nom ;
    Etudiant etudiant();
    
    std::cout << "veillez entrez le nom de l'élève \n" ;
    std::cin >> nom ;
    etudiant.setNom(nom);
    
    std::cout << "veillez entrez la première note de l'élève /20 \n" ;
    std::cin >> x ;
    etudiant.setX(x);
    
    std::cout << "veillez entrez la seconde note de l'élève /10 \n" ;
    std::cin >> y ;
    etudiant.setY(y);
    
    etudiant.affiche();

    return 0 ;
}
