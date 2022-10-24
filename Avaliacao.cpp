#include <iostream>
#include "Avaliacao.h"



using namespace std;

// ----------------------------------------------------------------------------
//Q3
Avaliacao::Avaliacao(int n)
{
    questoes = n;
    valor = 100;
    notas = new float[n];
}

Avaliacao::~Avaliacao()
{
    delete[] notas;
}

void Avaliacao::leNotas()
{
    for (int i = 0; i < questoes; i++)
    {
        cout << "Digite a nota da questão " << i + 1 << endl;
        cin >> notas[i];
    }
}

void Avaliacao::relatorio()
{
    int n = 0;
    for (int i = 0; i < questoes; i++)
    {
        if (notas[i] < 60)
        {
            cout << endl;
            cout << "questão " << i + 1 << " ficou a baixo de 60%" << endl;
        }

        n = n + notas[i];
    }

    cout << endl << "Nota final foi: " << n << endl;
}
//-Q3
// ----------------------------------------------------------------------------
