/*
Write function RemoveExclamationMarks which removes all exclamation marks from a given string.
*/
/*
Mi solucion
*/
#include <string>
#include <algorithm>
using namespace std;
string removeExclamationMarks(string str){
str.erase(remove(str.begin(), str.end(), '!'), str.end());
  return str;
}
/*
nota: se podia solucionar sin usar libreria, contando cada letra de la palabra hasta detectar el "!", y luego con un if evitarlo y guardar solo los
caracteres que no sean "!", para luego devolver la palabra.
*/
