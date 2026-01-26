/*
Complete the square sum function so that it squares each number passed into it and then sums the results together.
For example, for [1, 2, 2] it should return 9 because 
1^2+2^2+2^2=9
*/
/*
mi solucion:
*/
#include <vector>
using namespace std;
int square_sum(const vector<int>& numbers)
{
  int resultado = 0;
  for (int numero : numbers){
    resultado += numero*numero;
    }
    return resultado;
}
/*
Solucion optimizada:
#include <vector>
int square_sum(const std::vector<int>& numbers)
{
    int ret=0;
    for (auto x:numbers) ret+=(x*x);
    return ret;
}
*/
