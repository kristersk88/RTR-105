
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
char a = 10; // definēšana
// 1. darbība - RAM atmiņā tiek atvēlēta vieta viena char datu tipa mainīgā glabāšanai
// Šī vieta ir viennozīmīgi saķēdēta ar identifikātoru "a" (bet, vietai ir arī adrese)
// Saskaņā ar char datu tipu, viens izmērs - 1 baits
// Kā šajā vietā izskatījās tas atmiņas apgabals: 0000 0101 vai 1111 1110 vai 0000 1010
// char a; // deklerēšana
// 2. darbība - vērtības piešķiršana
// a=10; // Vērtības piešķiršana
// a -> 0000 1010
printf("Mainīgā a vērtība (laika momentā t1) ir: %d\n", a);
a = 125;
printf("Mainīgā a vērtība (laika momentā t2) ir: %d\n", a);
printf("Mainīgā A vērtība (laika momentā t3) ir: %d\n", A);
//A = 126; //konstanti laika momentā mainīt nevar
//printf("Konstantes A vērtība (laika momentā t4) ir: %d\n", A);
char mans_mainigais = 45; //centīsimies izmantot mneimotikus nosaukumus - nosaukums atspoguļo mainīgā jēgu vai nolūku
a = 0x10; // |||||||||| ||||||||||||||||
printf("Mainīgā a vērtība (laika momentā t4) ir: %d\n", a); //prognoze - 16
printf("Mainīgā a vērtība (laika momentā t5) ir: 0x%x\n", a); //prognoze - 10
printf("Mainīgā a vērtība (laika momentā t6) ir: %o\n", a); //prognoze - 20
//printf("Mainīgā a vērtība (laika momentā t7) ir: %b\n", a); //nav (binars formats nav)

a = 65;
printf("Mainīgā a vērtība  ir: %d\n", a);
printf("Mainīgā a vērtība  ir: 0x%x\n", a);
printf("Mainīgā a vērtība  ir: %o\n", a);
printf("Mainīgā a vērtība kā simbols: %c\n", a);

a = 'k';
printf("Mainīgā a vērtība  ir: %d\n", a);
printf("Mainīgā a vērtība  ir: 0x%x\n", a);
printf("Mainīgā a vērtība  ir: %o\n", a);
printf("Mainīgā a vērtība kā simbols: %c\n", a);

a = 125
printf("Mainīgā a vērtība  ir: %d\n", a);
a = 126
printf("Mainīgā a vērtība  ir: %d\n", a);
a = 127
printf("Mainīgā a vērtība  ir: %d\n", a);
// 1  byte => 256 numbers
// => without sign 0 ... 255
// => with sign -128 .. 0 .. 127
a = 128
printf("Mainīgā a vērtība  ir: %d\n", a);

a = 258 // 258 = 256 + 2 -> 0000 0001 | 0000 0010 |
printf("Mainīgā a vērtība  ir: %d\n", a);

unsigned char b = 128;
printf("Mainīgā a vērtība  ir: %d\n", a);

//int 
int c;
printf("Mainīgā a vērtība  ir: %ld\n", sizeof(c));
// int atbilst 4 baiti (32 biti)
// => without sign 0 ... (2^32-1)
// => with sign -(2^31) .. 0 ... (2^31-1)

//----------------------------------------------
float d = 6.5;
printf("float datu tipa skaitļa attēlošana: %f\n", d);
printf("float datu tipa skaitļa attēlošana: %.2f\n", d);
printf("float datu tipa skaitļa attēlošana: %.f\n", d);
}

// = ir piešķiršanas zīme
