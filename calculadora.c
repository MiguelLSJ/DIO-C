#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
    setlocale (LC_ALL, "portuguese");

    char esc;
    int x = 0, y = 0;
    float res;
    do {
        clearerr (stdin);
        printf ("Digite o tipo de operacao: +, -, *, /, %% ou 0 para sair: ");
        scanf ("%c", &esc);
        clearerr (stdin);

        switch (esc) {
            case '+': {
                printf ("Digite o 1º valor: ");
                scanf ("%i", &x);
                printf ("Digite o 2º valor: ");
                scanf ("%i", &y);
                clearerr (stdin);

                res = x + y;
                printf ("\nResultado da soma: %.2f\n\n", res);
                break;
            }
            case '-': {
                printf ("Digite o 1º valor: ");
                scanf ("%i", &x);
                printf ("Digite o 2º valor: ");
                scanf ("%i", &y);
                clearerr (stdin);

                res = x - y;
                printf ("\nResultado da subtracao: %.2f\n\n", res);
                break;
            }
            case '*': {
                printf ("Digite o 1º valor: ");
                scanf ("%i", &x);
                printf ("Digite o 2º valor: ");
                scanf ("%i", &y);
                clearerr (stdin);

                res = x * y;
                printf ("\nResultado da multiplicacao: %.2f\n\n", res);
                break;
            }
            case '/': {
                printf ("Digite o 1º valor: ");
                scanf ("%i", &x);
                printf ("Digite o 2º valor: ");
                scanf ("%i", &y);
                clearerr (stdin);

                res = x / y;
                printf ("\nResultado da divisao: %.2f\n\n", res);
                break;
            }
            case '%': {
                printf ("Digite o 1º valor: ");
                scanf ("%i", &x);
                printf ("Digite o 2º valor: ");
                scanf ("%i", &y);
                clearerr (stdin);
                
                res = (x % y);
                printf ("\nResto da divisao: %.2f\n\n", res);
                break;
            }
            case '0': {
                printf ("Saindo. . .\n");
            }
            default: {
                if (esc != '0' && esc != '+' && esc != '-' && esc != '*' && esc != '/' && esc != '%') {
                    printf ("\nValor invalido. . .\n");
                }
                break;
            }
        }
    } while (esc != '0');
}