// Fichier dans lequel vous écrirez les expressions à évaluer
#include "definitionsFonctions.cpp"
#define EVAL(exp) cout << "Valeur de " << (#exp) <<" : "<< (exp) << endl


int main()
{
  srand(time(NULL));
  boolalpha(cout);

  cout << "\n=================================================================\n ";

  // Expressions à évaluer
  cout << "\n==== Prise en main =======\n";
  // commande pour évaluer l'expression 3+4
  // A vous :
  EVAL(moyenne(2.3 , 8)); 
  EVAL(max3(3,9 , 2.5));
  EVAL(multiple(5,0));
  EVAL(triangleequi(5,5,5));
  EVAL(triangle(3,1,2));
  EVAL(trianglerect(5,4,5));
  EVAL(triangleiso(1,1,3));
  EVAL(ouexcl(true,true));
  EVAL(mul2ou3(6));
  EVAL(memeDizaine(38,43));
  EVAL(memeParite(14,52));
  EVAL(gainRoulette(100,675,672));
  EVAL(estPair(-9));
  EVAL(existeMul11(22,22));
  EVAL(maxMul11(3,43));
  EVAL(nbMul11(3,43));
  EVAL(somMul11(3,54));
  EVAL(nbChifDec(3279));
  EVAL(chifRang(3279,2));
  EVAL(somChif(3249));
  EVAL(racNum(3249));
  EVAL(invChif(3249));
  EVAL(existeRac(16,2));
  EVAL(estCarre(16));
  const list<int> exli={1,33,67,12,1,22};
  EVAL(exli);
  EVAL(tete(exli));
  EVAL(queue(exli));
  EVAL(tete(queue(exli)));
  EVAL(queue(queue(exli)));
  EVAL(cons(11,liVide<int>()));
  EVAL(cons(11, exli));
  EVAL(cons(11,exli));
  EVAL(tete(exli)+tete(queue(exli)));
  EVAL(cons(tete(exli)+tete(queue(exli)),queue(queue(exli))));
  EVAL(cons(tete(exli),queue(queue(exli))));
  EVAL(longLi(exli));
  EVAL(minLi(exli));
  EVAL(oterLi(exli,1));
  EVAL(estTriee(liste({5,1})));
  EVAL(triListe(exli));
  EVAL(lgPrefEg(liste({2, 2, 2})));
  EVAL(supRepet(liste({2,7,7,7,2})));
  EVAL(supRepet(liste({2,2,7,7,2})));
  EVAL(supPrefEg(liste({2, 2, 2})));
  EVAL(codeLi(liste({7, 7, 7, 7, 8, 8, 7, 7, 7})));
  EVAL(mystere(39));
  EVAL(nbRacines(5,1,-3.5));
  EVAL(solRacines(5,1,-3.5));
  EVAL(somPair(5));
  EVAL(somImp(4));
  EVAL(somDiv(6));
  EVAL(estParfait(66));
  EVAL(existeParfait1(1,2));
  EVAL(existeParfait2(1,30));
  EVAL(pArite(1));
  EVAL(nbPair(2));
  EVAL(puisX(25,1/2));
  EVAL(premChif(10005));
  cout << "\n=================================================================\n ";
  return 0;
}

