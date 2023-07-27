
int insert_sort (int vetor[], int tamanho)
{
    int k, j, aux;
    int long interacoes;

    for (k = 1; k <= tamanho - 1; k++)
    {
        aux = vetor[k];
        j = k - 1;
        while (j >= 0 && aux < vetor[j])
        {
            interacoes++;
            vetor[j+1] = vetor[j];
            j--;
        }
        interacoes++;
        vetor[j+1] = aux;
    }
    return interacoes;
}
