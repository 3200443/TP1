#ifndef PASSGRID_H
#define PASSGRID_H


class PassGrid
{
    public:
        PassGrid(int, int);
        virtual ~PassGrid();
        char print();

    protected:
    private:
        const int taille1_;
        const int taille2_;
        char** grille_;
};








#endif // PASSGRID_H
