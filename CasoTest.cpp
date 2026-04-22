#include <iostream>
#include <fstream>
#include <assert.h>

/**
 * Legge un intero viaggio e ritorna il numero di handling
 * di quella soluzione
 */
int contaHandling(const int aereo[8][8])
{
    int handling = 1;

    //...

    return handling;
}


int main ()
{
    int aeroporti, handling;
    int aereo[8][8] = {0};
    std::ifstream file("Input.txt");
    file >> aeroporti;

    for(int i = 0; i < aeroporti;i++)
    {
        for(int j = 0;j<8;j++)
            file >> aereo[i][j];
    }
    file >> handling;

    for (int i = 0; i < aeroporti; i++)
    {
        for (int j = 0; j < 8; j++)
            std::cout << aereo[i][j] << " ";
        std::cout << "\n";
    }

    assert(contaHandling(aereo) == handling);

    return 0;
}