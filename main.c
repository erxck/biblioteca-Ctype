#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char c;

    c = getchar();

    printf("%s\n\'%c\'%s%s\n\n", "funcao isdigit: ", c,
        isdigit(c) ? " eh um " : " nao eh um ", "digito");

    printf("%s\n\'%c\'%s%s\n\n", "funcao isalpha: ", c,
        isalpha(c) ? " eh uma " : " nao eh uma ", "letra");

    printf("%s\n\'%c\'%s%s\n\n", "funcao isalnum: ", c,
        isalnum(c) ? " eh um " : " nao eh um ", "digito ou uma letra");

    printf("%s\n\'%c\'%s%s\n\n", "funcao isxdigit: ", c,
        isxdigit(c) ? " eh um " : " nao eh um ", "digito hexadecimal");

    printf("%s\n\'%c\'%s%s\n\n", "funcao islower: ", c,
        islower(c) ? " eh uma " : " nao eh uma ", "letra minuscula");

    printf("%s\n\'%c\'%s%s\n\n", "funcao isupper: ", c,
        isupper(c) ? " eh uma " : " nao eh uma ", "letra maiuscula");

    printf("%s\n\'%c\'%s\'%c\'\n\n", "funcao tolower: ", c,
        " convertido em minuscula eh ", tolower(c));

    printf("%s\n\'%c\'%s\'%c\'\n\n", "funcao toupper: ", c,
        " convertido em maiuscula eh ", toupper(c));

    printf("%s\n\'%c\'%s%s\n\n", "funcao isspace: ", c,
        isspace(c) ? " eh um " : " nao eh um ", "caractere de espaco em branco");

    printf("%s\n\'%c\'%s%s\n\n", "funcao iscntrl: ", c,
        iscntrl(c) ? " eh um " : " nao eh um ", "caractere de controle");

    printf("%s\n\'%c\'%s%s\n\n", "funcao ispunct: ", c,
        ispunct(c) ? " eh um " : " nao eh um ", "caractere de pontuacao");

    printf("%s\n\'%c\'%s%s\n\n", "funcao isprint: ", c,
        isprint(c) ? " eh um " : " nao eh um ", "caractere imprimivel");

    printf("%s\n\'%c\'%s%s\n\n", "funcao isgraph: ", c,
        isgraph(c) ? " eh um " : " nao eh um ", "caractere imprimivel diferente de espaco");

    return 0;
}