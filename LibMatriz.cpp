#include <iostream>
#include <cstring>
#include <math.h>
#include <cstdlib>
#include <time.h> 
#include "LibMatriz.h"

using namespace std;

void MatrizAleatoria(int trama[20])
{
    srand (time(NULL));
    for (int i=0; i<20; i++)
    {
         trama [i] = rand() % 500 + 1;
    }
}

void cipherData(int Num_alea[20], int ronda)
{
    signed int oper = 0;
    int v = ronda, vector[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    while(v>0)
	{
        for (int i = 0; i<20 ; i++)
        {   
            if (i==0)
            {
                oper = (Num_alea[19]) - (Num_alea[1]);
                vector[0]=oper;
            }
            else if ((i%2) != 0 )
            {
                oper = (Num_alea[i]) - (Num_alea[i+2]);
                vector[i+1] = oper;
            }
        }
        for (int i = 0; i<20 ; i++)
        {
            if (i==1)
            {
                oper = (Num_alea[18]) + (Num_alea[0]);
                vector[19] = oper;
            }
            else if (((i%2) == 0) && (i != 18))
            {
                oper = (Num_alea[i]) + (Num_alea[i+2]);
                vector[i+1] = oper;
            }
        }
        memcpy(Num_alea, vector, 20*sizeof(int));
        v--;
    }
}

void ValoresMatriz(int Matriz[20]){
	for (int i=0; i<20; i++)
	{
		cout<<Matriz[i]<<" ";
	}
}
