#include <stdio.h>
#include <locale.h>
void main () {
    setlocale(LC_ALL,"portuguese");
    int primeirovalordigitadopelousuario;
    int segundovalordigitadopelousuario;
    char operador;
    int resultadodaoperacao;
    printf("Digite o primeiro valor:" , "\n");
    scanf("%i", &primeirovalordigitadopelousuario);
    fflush(stdin);
    printf("Digite o segundo valor:");
    scanf("%i", &segundovalordigitadopelousuario);
    fflush(stdin);
    printf("Digite o operador (+, -, *, /): ");
    scanf("%c", &operador);
    switch (operador) {
        case 43:
            resultadodaoperacao = primeirovalordigitadopelousuario+segundovalordigitadopelousuario;
            printf("O resultado da opera��o de soma � %i", resultadodaoperacao);
            break;
        case 45:
            resultadodaoperacao = primeirovalordigitadopelousuario - segundovalordigitadopelousuario;
            printf("O resultado da opera��o de subtra��o � %i", resultadodaoperacao);
            break;
        case 42:
            resultadodaoperacao = primeirovalordigitadopelousuario * segundovalordigitadopelousuario;
            printf("O resultado da opera��o de multiplica��o � %i", resultadodaoperacao);
            break;

        case 47:
            resultadodaoperacao = (primeirovalordigitadopelousuario / segundovalordigitadopelousuario);
            printf("O resultado da opera��o de divis�o � %i", resultadodaoperacao);
            break;

        default:
            printf("erro....");
            break;
    }



}
