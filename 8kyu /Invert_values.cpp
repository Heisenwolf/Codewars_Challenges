/*
Given a set of numbers, return the additive inverse of each. Each positive becomes negatives, and the negatives become positives.
[1, 2, 3, 4, 5] --> [-1, -2, -3, -4, -5]
[1, -2, 3, -4, 5] --> [-1, 2, -3, 4, -5]
[] --> []
*/
/*
Mi solucion:
*/
#include <vector>
#include <iostream>
using namespace std;
vector<int> invert(vector<int> values)
{
  vector<int> solution;
  for(int i=0; i < values.size() ;i++){
    int number = values[i];
    int negative = -number;
   solution.push_back(negative);
  }
    return solution;
}
/*
Solucion Optimizada:
#include <vector>

std::vector<int> invert(std::vector<int> values)
{
    for( int i = 0; i < values.size(); i++)
      values[i] *= -1;
      return values;
}
Nota: Esta es una manera mas optimizada y simple de resolver el problema sin añadir mas librerias
*/
