#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int in, root, n, d1, d2, d3, d4, Sn, An;

    printf("Digite o número do ponto desejado: ");
    scanf("%d", &in); //Entrada do usuário
    root = sqrt(in);//Raíz do valor da entrada

    if(root%2 != 0)n = ((root/2)+1);//caso ímpar
    else if(root%2 == 0)n = root/2;//caso par

    printf("\n %d", n);

    An = 8*n;
    Sn = ((8+An)*n)/2;
    d1 = Sn-(An*3)/4;
    d2 = Sn-(An/2);
    d3 = Sn-(An/4);
    d4 = Sn;

    printf("\n %d", An);
    printf("\n %d", Sn);
    printf("\n %d", d1);
    printf("\n %d", d2);
    printf("\n %d", d3);
    printf("\n %d", d4);

    if(in < d1) printf("\n(%d,%d)", (d1-in)-n, n);
    else if(in == d1) printf("\n(%d,%d)",-n, n);//Caso a entrada seja igual a primeira quina
    else if(in < d2) printf("\n(%d,%d)", -n, (d2-in)-n);
    else if(in == d2) printf("\n(%d,%d)",-n, -n);//Caso a entrada seja igual a segunda quina
    else if(in < d3) printf("\n(%d,%d)", n-(d3-in), -n);
    else if(in == d3) printf("\n(%d,%d)",n, -n);//Caso a entrada seja igual a terceira quina
    else if(in < d4) printf("\n(%d,%d)", n, n-(d4-in));
    else if(in == d4) printf("\n(%d,%d)",n, n);//Caso a entrada seja igual a quarta quina

    return 0;
}
