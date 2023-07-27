
int shell_sort (int vetor[], int tamanho)
{
    int long interacoes;
    for (int interval = tamanho / 2; interval > 0; interval /= 2)
    {
        for (int i = interval; i < tamanho; i += 1)
        {
            int temp = vetor[i];
            int j;
            for (j = i; j >= interval && vetor[j - interval] > temp; j -= interval)
            {
                interacoes++;
                vetor[j] = vetor[j - interval];
            }
            interacoes++;
            vetor[j] = temp;
        }
    }
    return interacoes;
}
