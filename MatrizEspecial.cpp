#include <iostream>
#include "MatrizEspecial.h"

using namespace std;

// ----------------------------------------------------------------------------
//Q4
MatrizEspecial::MatrizEspecial(int nn)
{
    n = nn;
    vet = new int[n];
}

MatrizEspecial::~MatrizEspecial()
{
    delete[] vet;
}

int MatrizEspecial::detInd(int i, int j)
{
    int k;
    if (i >= 0 && i < n && j >= 0 && j < n)
    {
        if (i == j)
            return i;
        else
            return -1;

        return k;
    }
    else
        return -2;
}

int MatrizEspecial::get(int i, int j)
{
    if (detInd(i, j) >= 0)
        return vet[i];
    else if (i < j)
        return j - i;
    else if (i > j)
        return i - j;

    else
    {
        cout << "ERRO: GET" << endl;
        exit(1);
    }
}

void MatrizEspecial::set(int i, int j, int val)
{
    if (detInd(i, j) >= 0)
        vet[i] = val;

    else
    {
        cout << "ERRO: SET" << endl;
    }
}
//-Q4
// ----------------------------------------------------------------------------

void MatrizEspecial::imprime()
{
    cout << "Matriz " << n << " x " << n << ":" << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << get(i, j) << "\t";
        cout << endl;
    }
    cout << endl;
}
