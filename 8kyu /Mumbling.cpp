/*
This time no story, no theory. The examples below show you how to write function accum:

Examples:
accum("abcd") -> "A-Bb-Ccc-Dddd"
accum("RqaEzty") -> "R-Qq-Aaa-Eeee-Zzzzz-Tttttt-Yyyyyyy"
accum("cwAt") -> "C-Ww-Aaa-Tttt"
The parameter of accum is a string which includes only letters from a..z and A..Z.
*/
/*
Mi solucion
*/
#include <string>
#include <vector>
using namespace std;
class Accumul
{
public:
    static string accum(const string &s){
      string resultado= "";
      for (int i = 0; i < s.length(); i++) {
        if(i>0){
          resultado += '-';
        }
        resultado += toupper(s[i]);
        for (int j = 0; j < i; j++) {
        resultado += tolower(s[i]);
        }
        }
      return resultado;
    }
  
};
/*
solucion Optimizada:
using namespace std;

class Accumul
{
public:
    static std::string accum(const std::string &s) {
      stringstream result;
      for (int i = 0; i < s.length(); i++) 
        result << "-" << string(1, toupper(s[i])) << string(i, tolower(s[i])); 
      return result.str().substr(1);
    }
};
*/
