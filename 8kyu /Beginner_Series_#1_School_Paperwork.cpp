/*
Your classmates asked you to copy some paperwork for them. You know that there are 'n' classmates and the paperwork has 'm' pages.
Your task is to calculate how many blank pages do you need. If n < 0 or m < 0 return 0.
Example:
n= 5, m=5: 25
n=-5, m=5:  0
*/
/*
Mi solucion:
*/
using namespace std;
int paperwork(int n, int m){
  if(n>0 && m>0){
    return n*m;
  }
  return 0;
}
/*
Solucion optimizada:
int paperwork(int n, int m) {
  return n < 0 || m < 0 ? 0 : n * m;
}
Nota: Encontre que se puede optimizar mas el espacio visual en pantalla.
*/
