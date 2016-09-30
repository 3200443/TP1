#include "passgrid.hh"
#include <cstdlib>
#include <cstdio>
#include <ctime>

Passgrid::PassGrid(int t1, int t2): taille1_(t1), taille2_(t2)
{
    int i,j;
    srand (time(NULL));
    grille_ = new char* [taille1_];
    for( i; i < taille1_; i++)
    {
        grille_[i] = new char[taille2_];
    }
    for(i = 0; i < taille1_; i++)
    {        for(j= 0; j< taille2_; j++)
        {
           grille_[i][j] = rand() % 62 + 33;
        }
    }
}
void PassGrid::print(int i, int j)
    {
        int i, j;
        for( i = 0; i < taille1_; i++)
        {
            for(j = 0 ; j < taille2_; j++){
                std::cout << grille_[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }
PassGrid::~Passgrid()
{
    int i;
    for(i = 0; i < taille1_; i++)
    {
        delete grille_[i];
    }
    delete grille_;
    delete this;
}
