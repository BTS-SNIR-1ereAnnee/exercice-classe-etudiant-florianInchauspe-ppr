/*
 * étudiant.h
 */
 
#include <iostream>

class Etudiant
{
    /** Default constructor */
    Etudiant();
    /** Constructeur
     * \param x première note
     * \param y seconde note
     */
    Etudiant(std::string nom , int x, int y);
    
    /** Default destructor */
    ~Etudiant();

    /** Access m_x
     * \return The current value of m_x
     */
    int getX() const;
    /** Set m_x
     * \param val New value to set
     */
    void setX(int val);
    /** Access m_y
     * \return The current value of m_y
     */
    int getY() const;
    /** Set m_y
     * \param val New value to set
     */
    void setY(int val);
    /** Access m_nom
     * \return The current value of m_nom
     */
    std::string getNom() const;
    /** Set m_nom
     * \param val New value to set
     */
    void setNom(std::string val);
    
    /** affiche le nom et les note de l'etudiant
    */
    void affiche();

    /** calcule la moyenne de l'étudiant 
    * \return la moyenne
    */
    int calculeMoyene();

private:

    int m_x; //!< Member variable "m_x"
    int m_y; //!< Member variable "m_y" 
    std::string m_nom ; //!< Member variable "m_nom"
    
};
