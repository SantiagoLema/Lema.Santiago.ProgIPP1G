#include <stdio.h>
#include <stdlib.h>

void ordenarCaracteres(char cadena[], int tam);

int main()
{
    char cadena[9] = {"algoritmo"};
    ordenarCaracteres(cadena, 9);
    fflush(stdin);
    printf("%s", cadena);

    invertirCaracteres(cadena, 9);
    fflush(stdin);
    printf("%s", cadena);



    return 0;
}

void ordenarCaracteres(char vec[], int tam)
{
    char aux;
    for(int i=0; i<tam -1; i++)
    {
        for(int j=i + 1; j < tam; j++)
        {
            if(vec[i] > vec[j])
            {
                //swap
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            }
        }
    }

}

void invertirCaracteres(char vec[], int tam)
{
    char aux[9];
    for(int i=0; i<tam; i++)
    {
        for(int j=9; j =< 0; j--)
        {
            aux = vec[i];
            vec[i] = vec[j];
            vec[j] = aux;
        }
    }
}






        for(int j=i + 1; j < tam; j++)
        {
            //if(vec[i] > vec[j])
            //{
                //swap
                aux = vec[i];
                vec[i] = vec[j];
                vec[j] = aux;
            //}
        }
    }

}
