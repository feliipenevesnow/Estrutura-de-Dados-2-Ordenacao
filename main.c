#include "lista.h"
#include "buble_sort.h"
#include "select_sort.h"
#include "insert_sort.h"
#include "heap_sort.h"
#include "shell_sort.h"
#include "quick_sort.h"
#include "busca_sequencial.h"
#include "busca_binaria.h"
#define T 20

void main()
{
    int vet[T];
    int op, elemento, aleatorio = 0, index;
    long int interacoes = 0;

    srand(time(NULL));

    for(int i = 0; i < T; i++)
    {
        aleatorio = rand() % 200000;
        vet[i] = aleatorio;
    }

    do
    {
        op = menu();
        switch(op)
        {
        case 1:
            for(int i = 0; i < 20; i++){
                printf("VET[%d] = ", i);
                scanf("%d", &elemento);
                vet[i] = elemento;
                printf("\n");
            }
            break;
        case 2:
            interacoes = buble_sort(vet, T);
            printf("\nBUBLE SORT: %d Interacoes.\n\n", interacoes);
            system("pause");
            system("cls");
            break;
        case 3:
            interacoes = select_sort(vet, T);
            printf("\nSELECT SORT: %d Interacoes.\n\n", interacoes);
            system("pause");
            system("cls");
            break;
        case 4:
            interacoes = insert_sort(vet, T);
            printf("\nINSERT SORT: %d Interacoes.\n\n", interacoes);
            system("pause");
            system("cls");
            break;
        case 5:
            interacoes = heap_sort(vet, T);
            printf("\nHEAP SORT: %d Interacoes.\n\n", interacoes);
            system("pause");
            system("cls");
            break;
        case 6:
            interacoes = shell_sort(vet, T);
            printf("\nSHELL SORT: %d Interacoes.\n\n", interacoes);
            system("pause");
            system("cls");
            break;
        case 7:
            interacoes = quick_sort(vet, 0, T - 1);
            printf("\nQUICK SORT: %d Interacoes.\n\n", interacoes);
            system("pause");
            system("cls");
            break;
        case 8:
            printf("\nQue elemento deseja buscar?\n");
            scanf("%d", &elemento);
            index = busca_sequencial(vet, T, elemento);
            if(index == -1)
            {
                printf("\nNao ha esse elemento no vetor.\n\n");
            }
            else
            {
                printf("\nElemento na posicao: %d.\n\n", index);
            }
            break;
        case 9:
            printf("\nQue elemento deseja buscar?\n");
            scanf("%d", &elemento);
            index = busca_binaria(vet, T, elemento);
            if(index == -1)
            {
                printf("\nNao ha esse elemento no vetor.\n\n");
            }
            else
            {
                printf("\nElemento na posicao: %d.\n\n", index);
            }
            break;
        default:
            printf("Opcao invalida! Escolha de 0 a 9.");
            break;
        }

    }
    while(op != 0);
}


int menu()
{
    int op;
    printf("0. Sair do programa\n");
    printf("1. Ler vetor\n");
    printf("2. Ordenar o vetor por Buble-Sort\n");
    printf("3. Ordenar o vetor por Select-Sort\n");
    printf("4. Ordenar o vetor por Insert-Sort\n");
    printf("5. Ordenar o vetor por Heap-Sort\n");
    printf("6. Ordenar o vetor por Shell-Sort\n");
    printf("7. Ordenar o vetor por Quick-Sort\n");
    printf("8. Realizar Busca Sequencial\n");
    printf("9. Realizar Busca Binária\n");
    scanf("%d", &op);
    return op;
}

