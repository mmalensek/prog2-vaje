#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dolzina;
    int vsota = 0;
    char *jeRes = "DA";
    scanf("%d", &dolzina);

    int *tabela = calloc(dolzina, sizeof(int));

    for (int i = 0; i < dolzina; i++)
    {
        int clen;
        scanf("%d", &clen);
        tabela[i] = clen;
        vsota += clen;
    }

    for (int i = 0; i < dolzina / 2; i++)
    {
        if (tabela[i] != tabela[dolzina - i - 1])
        {
            jeRes = "NE";
            break;
        }
    }

    printf("%s\n%d\n", jeRes, vsota);
    return 0;
}