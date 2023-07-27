
int buble_sort (int vetor[], int tamanho)
{
    int k, j, aux;
    int long interacoes;

    for (k = 1; k < tamanho; k++)
    {
        for (j = 0; j < tamanho - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux          = vetor[j];
                vetor[j]     = vetor[j + 1];
                vetor[j + 1] = aux;
                interacoes++;
            }
        }
    }
    return interacoes;
}
