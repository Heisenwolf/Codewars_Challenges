/*
DESAFÍO: Hero vs Dragons (8kyu)
A hero is on his way to the castle to complete his mission. 
However, he's been told that the castle is surrounded with a couple of powerful dragons! 
each dragon takes 2 bullets to be defeated...
*/
/*
Mi solucion:
*/
bool hero(int bullets, int dragons) {
   if(bullets < 2*dragons){
     return false;}
    if(bullets >= 2*dragons){
      return true;}
  return true;
}
/*
Solucion optimizada:
bool hero(int bullets, int dragons) {
  return bullets >= 2 * dragons;
}
Nota: Descubri que se podia resolver el ejercicio con una sola linea de codigo.
*/
