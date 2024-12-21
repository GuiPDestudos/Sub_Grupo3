#include <stdio.h>
#include "digital.h"

int main (){
    b_kb(10);
    printf("\n%db = %db\n",10, b_kb);
    b_mb(10);
    printf("%db = %dmb\n",10, b_mb);
    kb_b(10);
    printf("%dkb = %db\n",10,kb_b);
    kb_mb(10);
    printf("%dkb = %dmb\n",10,kb_mb);
    mb_b(10);
    printf("%dmb = %db\n",10,mb_b);
    mb_kb(10);
    printf("%dmb = %dkb\n\n",10,mb_kb);

    printf("%d",5-10);

    return 0;
}