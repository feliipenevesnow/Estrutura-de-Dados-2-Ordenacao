
int heap_sort (int vetor[], int tamanho)
{
    int i, tmp;
    int long interacoes;

    for (i = (tamanho / 2); i >= 0; i--)
    {
        peneira(vetor, i, tamanho - 1);
    }

    for (i = tamanho-1; i >= 1; i--)
    {
        tmp = vetor[0];
        vetor[0] = vetor[i];
        vetor[i] = tmp;
        interacoes = interacoes + peneira(vetor, 0, i-1);
    }
    return interacoes;
}

int peneira(int *vet, int raiz, int fundo)
{
    int pronto, filhoMax, tmp;
    int long interacoes = 0;

    pronto = 0;
    while ((raiz*2 <= fundo) && (!pronto))
    {
        interacoes++;
        if (raiz*2 == fundo)
        {
            filhoMax = raiz * 2;
        }
        else if (vet[raiz * 2] > vet[raiz * 2 + 1])
        {
            filhoMax = raiz * 2;
        }
        else
        {
            filhoMax = raiz * 2 + 1;
        }

        if (vet[raiz] < vet[filhoMax])
        {
            tmp = vet[raiz];
            vet[raiz] = vet[filhoMax];
            vet[filhoMax] = tmp;
            raiz = filhoMax;
        }
        else
        {
            pronto = 1;
        }
    }
    return interacoes;
}
