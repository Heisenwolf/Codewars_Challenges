/*
Write a function to split a string and convert it into an array of words.

Examples (Input ==> Output):
"Robin Singh" ==> ["Robin", "Singh"]

"I love arrays they are my favorite" ==> ["I", "love", "arrays", "they", "are", "my", "favorite"]
*/
/*
Mi solucion
*/
#include <vector>
#include <string>
using namespace std;
vector<string> string_to_array(const string& s) {
  if (s.empty()) {
        return { "" }; 
    }
  vector<string> resultado;
  string palabra = "";
  for(char letra : s){
    if(letra == ' '){
      if(palabra.length()>0){
      resultado.push_back(palabra);}
      palabra = "";
    } else {
        palabra += letra;
      }
    }
  if(palabra.length() > 0) {
        resultado.push_back(palabra);
  }
    return resultado;
}
/*
solucion optimizada:
#include <vector>
#include <string>
using namespace std;

vector<string> string_to_array(const string& s) {
  vector<string> res;
  stringstream ss(s + " ");
  string word;

  while (getline(ss, word, ' ')) res.push_back(word);
  return res;
}
*/
