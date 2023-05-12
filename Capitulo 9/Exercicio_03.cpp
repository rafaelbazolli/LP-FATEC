#include <stdio.h>

main()
{
    int a = 1;
    float b = 2.22;
    char c = 'A';
    bool d = true;

    printf("\nTipo | Valor | Espaco em memoria");
    printf("\nInteiro | %d | %d", a, sizeof(a));
    printf("\nFloat | %.2f | %d", b, sizeof(b));
    printf("\nChar | %c | %d", c, sizeof(c));
    printf("\nBoolean | %d | %d", d, sizeof(d));
}
