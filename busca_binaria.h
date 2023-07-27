
int busca_binaria(int vetor[], int tamanho, int valor)
{
    int incio = 0;
    int fim = tamanho - 1;

    while (incio <= fim)
    {

        int i = (incio + fim) / 2;

        if (vetor[i] == valor)
        {
            return i;
        }

        if (vetor[i] < valor)
        {
            incio = i + 1;
        }
        else
        {
            fim = i;
        }
    }

    return -1;
}
