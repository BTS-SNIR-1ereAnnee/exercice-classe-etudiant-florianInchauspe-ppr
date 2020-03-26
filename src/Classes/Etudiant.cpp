/*
 * etudiant.cpp
 */
 
#include "Etudiant.h"
#include <iostream>
   
Etudiant::Etudiant()
{

    m_x = m_y = 10 ;
    m_nom = "NDEF" ;

}
    
Etudiant::Etudiant(std::string nom , int x, int y)
{
    
    this->m_x = x;
    this->m_y = y;
    this->m_nom = nom;

}
    
Etudiant::~Etudiant()
{


}

    
int Etudiant::getX() const
{

    return m_x;

}

void Etudiant::setX(int val)
{

    m_x = val;

}

int Etudiant::getY() const
{

    return m_y;

}

void Etudiant::setY(int val)
{

    m_y = val;

}
    
std::string Etudiant::getNom() const
{

    return m_nom;

}

void Etudiant::setNom(std::string val)
{

    m_nom = val;

}


void Etudiant::affiche()
{

    std::cout << this->m_nom << " : " << this->m_x << "/20 , " << this->m_y << "/10 \n";

}

int Etudiant::calculeMoyene()
{
    return this->m_x * this->m_y;
}
