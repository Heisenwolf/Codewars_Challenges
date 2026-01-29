/*
Consider an array/list of sheep where some sheep may be missing from their place. We need a function that counts the number of sheep present in the array (true means present).

For example,

{ true,  true,  true,  false,
  true,  true,  true,  true,
  true,  false, true,  false,
  true,  false, false, true,
  true,  true,  true,  true,
  false, false, true,  true }
The correct answer would be 17.
*/
/*
Mi solucion
*/
#include <vector>
using namespace std; 
int count_sheep(vector<bool> arr) 
{
  int cantidad = 0;
  for(bool tf : arr){
    if (tf == true){
         cantidad++;
    } 
}
  return cantidad;
}
/*
Solucion optimizada:
#include <algorithm>
#include <vector>

int count_sheep(std::vector<bool> v) {
  return std::count(v.cbegin(), v.cend(), true);
}
*/
