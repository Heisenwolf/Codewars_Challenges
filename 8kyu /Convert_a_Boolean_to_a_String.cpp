/*
Implement a function which convert the given boolean value into its string representation.
Note: Only valid inputs will be given.
*/
#include <string>
using namespace std;
string boolean_to_string(bool b){
 if (b == true){
   return "true";
 }
 if (b == false){
   return "false";
 }
}
/*
Solucion optimizada:
#include <string>

std::string boolean_to_string(bool b){
  return b ? "true" : "false";
}
Nota: Esta manera es mucho mas eficiente utilizando el operador ternario en este problema.
*/
