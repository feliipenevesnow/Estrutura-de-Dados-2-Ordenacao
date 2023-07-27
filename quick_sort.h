
int quick_sort (int vetor[], int left, int right)
{
    int i, j, x, y;
    int long interacoes;

    i = left;
    j = right;
    x = vetor[(left + right) / 2];

    while(i <= j)
    {
        while(vetor[i] < x && i < right)
        {
            i++;
            interacoes++;

        }
        while(vetor[j] > x && j > left)
        {
            j--;
            interacoes++;
        }
        if(i <= j)
        {
            y = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = y;
            i++;
            j--;
        }
    }

    if(j > left)
    {
        quick_sort(vetor, left, j);
    }
    if(i < right)
    {
        quick_sort(vetor, i, right);
    }
    return interacoes;
}
