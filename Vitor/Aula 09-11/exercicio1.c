#include <stdio.h>

int main(){
    int hp = 100;
    int *ptr_hp = &hp;
    printf("hp=%d ptr_hp=%d\n", hp, *ptr_hp);
    hp = 75;
    printf("hp=%d ptr_hp=%\n", hp, ptr_hp);
    *ptr_hp = *ptr_hp - 20;
    printf("hp=%d ptr_hp=%d\n", hp, *ptr_hp);

    return 0;
}