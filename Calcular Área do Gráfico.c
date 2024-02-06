#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <float.h>

int main (int argc, char*argv[]) {
int l = 0, v, i, off2;
double x = 0.0, y, on = 0.0, off = 0.0, total = 0.0;

double mul = 0.001; int f, r = 0.00001;

f = 1 + (1/mul) ;
int a = 0, p = 0; int b = 0;
for (v = 0, y = -mul; v < f; v++){
y += mul;
for (i = 0, x = -mul; i < f; i++){
x += mul;
if (((((x*x+y*y)- 1.000000) > -0.00001 )&&((x*x+y*y)- 1.000000) < 0.00001 )) {
 float vetor[10000][2];
 vetor[b][0] = x;
 vetor[b][1] = y;
 b++;
}
}}


for (v = 0, y = -mul; v < f; v++){
y += mul;
for (i = 0, x = -mul; i < f; i++){
x += mul;
for (a = 0; a < b; a++) {
float vetor [10000][2]; off2 = 0;
if (((x - vetor[a][0]) > r)&&((y - vetor [a][1]) > r)) { off2 ++;}
if (off2 == 1) off += 1.0, a = b, off2 = 0;
else if (a == (b - 1)) on += 1.0;
}
}}


total = on + off;
printf("\nPorcentagem da Area do circulo = %1.9f\nPorcentagem fora do circulo = %1.9f", (on/total)*100.0, (off/total)*100.0);
return 0;
}
