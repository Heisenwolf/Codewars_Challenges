/*
Write a function which converts the input string to uppercase.
*/
/*
Mi solucion:
*/
#include <string>
#include <cctype>
using namespace std;
string makeUpperCase(const string& str) {
  string copy = str;
  for(int i=0; i < copy.length(); i++){
    copy[i]=toupper(copy[i]);
}
  return copy;
}

