
// Kods dažādu datu tipu pētīšanai
// Informācijas vienības ar kurām operē cilvēks - simboli un skaitļi
// Simboli: burti, cipari, punktuācijas zīmes utt. - ASCII tabula - simbols VS binārs kods

// skaitļi: veseli skaitļi, reālie skaitļi, kompleksie skaitļi (divas daļas- Re un Im)

// Informācijas vienība ar kuru operē dators - bits (0/1)
// Informācijas vienība ar adresi (datorā)  - baits
// 1 byte == 8 biti
// ASII table - one symbol  == 1 byte
// unique binary combinations insite 1 byte - 
// 1 bit : 0, 1 - 2 kombinācijas
// 2biti: 00, 011, 10, 11 - 4 kombinācijas
// 3 biti: 000, 001, 010, 011, 101, 110, 111 - 8 kombinācijas
// x biti: ... - (stāvokļu skaits)^biti - (2)^8=256
// ASCII tabulā - 256 unikāli simboli (ASCII tabula 1. daļa - 128 simboli)

#include <stdio.h>
#define A 11
void main ()
{
char a;
printf("Cienījamais, lietotāj, lūdzu ievadiet vienu burtu: ");
scanf("%c", &a);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu: %c\n",a);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura dec kods ir: %d\n",a);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura hex kods ir: 0x%x\n",a);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura oct kods ir: %o\n",a);
printf("P.s kā reāls skaitlis: %f\n",a);

int b;
printf("Cienījamais, lietotāj, lūdzu ievadiet vienu burtu: ");
scanf("%d", &b);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu: %c\n",b);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura dec kods ir: %d\n",b);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura hex kods ir: 0x%x\n",b);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura oct kods ir: %o\n",b);
printf("P.s kā reāls skaitlis: %f\n",b);

double c;
printf("Cienījamais, lietotāj, lūdzu ievadiet vienu burtu: ");
scanf("%lf", &c);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu: %c\n",c);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura dec kods ir: %d\n",c);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura hex kods ir: 0x%x\n",c);
printf("Cienījamais, lietotāj, tu esi ievadījis simbolu, kura oct kods ir: %o\n",c);
printf("P.s kā reāls skaitlis: %f\n",c);
}
