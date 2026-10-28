int main () {

    int hp = 100;
    int *ptr_hp = &hp;

    printf("hp=%d ptr_hp=%d", hp, *ptr_hp);
    hp = 75;
    printf("hp=%d ptr_hp=%d", hp, *ptr_hp);
    return 0;
}