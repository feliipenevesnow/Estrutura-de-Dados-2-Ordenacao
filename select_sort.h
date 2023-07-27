
int select_sort (int vetor[], int tamanho)
{
    int i, j, menor, troca;
    int long interacoes;

    for (i = 0; i < (tamanho - 1); i++)
    {
        menor = i;
        for (j = i+1; j < tamanho; j++)
        {
            if (vetor[j] < vetor[menor])
            {
                menor = j;
            }
        }
        if (i != menor)
        {
            troca = vetor[i];
            vetor[i] = vetor[menor];
            vetor[menor] = troca;
            interacoes++;
        }
    }
    return interacoes;
}
