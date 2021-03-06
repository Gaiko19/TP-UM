// Fichier dans lequel vous écrirez les fonctions que l'on vous demandera de définir

#include "listesEtTableaux.cpp"
#include <iostream>
#include <iomanip>

// Fonction moyenne
// Données: a : nombre, b : nombre
// Résultat: Nombre, la moyenne de a et b
float moyenne(float a, float b)
{
  return (a+b)/2;
    }

// Fonction max3
// Données: a,b,c : nombre
// Résultat: Nombre, plus grand des 3 nombres
float max3(float a, float b, float c)
{
  return (max(max(a,b),c));
}

// Fonction multiple
bool multiple(int x, int y)
{
  return (x==0 ? true : y==0? false : x%y ==0);
    }
// Fonction TriangleEqui
bool triangleequi(float a, float b, float c)
{
  return (a!=0 && b!=0 && c!=0 ? a==b && a==c : false) ;
    }

    // Fonction Triangle
    bool triangle(float a,float b, float c)
    {
      return ( a < b+c && b < a+c  && c < a+b);
	}
//Fonction TriangleRect
bool trianglerect(float a, float b, float c)
{
  return (pow(a,2)==pow(b,2)+pow(c,2) ? true : pow(b,2)==pow(a,2)+pow(c,2) ? true : pow(c,2)==pow(a,2)+pow(b,2));
    }

//Fonction triangleiso
bool triangleiso(float a, float b, float c)
{
  return(a!=b ? a==c : a!=c );
}

// Fonction ouexcl
bool ouexcl(bool a, bool b)
{
  return((a || b ) && ! (a && b));
}
//Fonction mul2ou3
bool mul2ou3(int x)
{
  return(ouexcl(multiple(x,2),multiple(x,3)) && ! multiple(x,6));
    }
//Fonction memeDizaine
bool memeDizaine(int a,int b)
{
  return(a/10 == b/10) ;
    }   
//Fonction memeParite
bool memeParite(int a, int b)
{
  return(((a%2==0) &&(b%2==0)) || (!(a%2==0) && !(b%2==0)) );
    }
//Fonction gainRoulette
int gainRoulette(int a, int b, int c)
{
  return(b==c ? 20*a : memeDizaine(b,c) ? 5*a : memeParite(b,c) ? 2*a : 0);
    }
//Fonction estPair
bool estPair(int n)
{
  return(n==0 ? true : !estPair(abs(n-1)));
    }
//Fonction existeMul11
bool existeMul11(int a, int b)
{
  return(a > b ? false : multiple(a,11) || multiple(b,11) ? true : existeMul11(a,b-1)); 
    }
//Fonction maxMul11
int maxMul11(int a, int b)
{
  return(!existeMul11(a, b) ? -1 : b%11 == 0 ? b : maxMul11(a,b-1)); 
    }
//Fonction nbMul11
int nbMul11(int a, int b)
{
  return(a>b ? 0 : b%11 == 0 ? 1+nbMul11(a,b-1) : nbMul11(a,b-1));
    }
//Fonction somMul11
int somMul11(int a,int b)
{
  return(a>b ? 0 : b%11 == 0 ? b+somMul11(a,b-1) : somMul11(a,b-1));
    }
//Fonction nbChifDec
int nbChifDec(int a)
{
  return(a/10 == 0 ? 1 : 1+nbChifDec(a/10));
    }
//Fonction chifRang
int chifRang(int n,int k)

{
  return(nbChifDec(n)<k ? 0 : n-((n/pow(10,k-1)*10)));
    }
//Fonction somChif
int somChif(int n)
{
  return(nbChifDec(n) == 1 ? n : n%10+somChif(n/10));
	 }
//Fonction racNum
int racNum(int n)
{
  return(nbChifDec(n) == 1 ? n : racNum(somChif(n)));
}
//Fonction invChif
int invChif(int n)
{
  return(nbChifDec(n)==1 ? n : n%10*pow(10,nbChifDec(n)-1)+invChif(n/10));
    }
//Fonction existeRac
bool existeRac(int n, int k)
{
  return(k>n ? false : n==k*k ? true : existeRac(n,k+1));
}
//Fonction estCarre
bool estCarre(int n)
{
  return(existeRac(n,0));
}
//Fonction longLi
int longLi(list<int>exli)
{
  return(estVide(exli) ? 0 : 1+longLi(queue(exli)));
}
//Fonction minLi
int minLi(list<int>li)
{
  return estVide(queue(li)) ? tete(li) : min (tete(li), minLi(queue(li)));
}
//Foncton oterLi
list<int> oterLi(list<int> li, int n)
{
  return estVide(li) ? li : tete(li)==n ? queue (li) : cons (tete (li), oterLi (queue(li),n));
    }
//Fonction estTriee
bool estTriee(list<int>li)
{
  return(estVide(li) || longLi(li)==1 )? true : tete(li)<=tete(queue(li)) ? estTriee(queue(li)):false;
}
//Fonction triListe
list<int> triListe(list<int>li)
{
  return(estVide(li) || longLi(li)==1 || estTriee(li)) ? li : cons( minLi(li),triListe(oterLi(li, minLi(li))));
    }
//Fonction lgPrefEg
int lgPrefEg(list<int>li)
{
  return estVide(li) ? 0 : estVide(queue(li)) or tete(li) !=tete(queue(li)) ? 1 : 1+ lgPrefEg(queue(li));
    }
//Fonction supRepet
list<int> supRepet(list<int>li)
{
  return(estVide(li)? li : lgPrefEg(li)==1 ? cons(tete(li), supRepet(queue(li))) : supRepet(queue(li))) ;
}
//Fonction supPrefEg
list<int> supPrefEg(list<int>li)
{
  return(estVide(li) ? li : lgPrefEg(li)!=1 ? supPrefEg(oterLi(li,tete(li))) : oterLi(li,tete(li)) );
}
//Fonction codeLi
list<int> codeLi(list<int>li)
{
  return(estVide(li) ? li : cons(lgPrefEg(li) , cons(tete(li) , codeLi(supPrefEg(li)))));
}
//Fonction decodeLi
//list<int> decodeLi(list<int>li)
//{
//  return(estVide(li) ? li :  ;
//}

//Fonction mystere
int mystere(int n)
{  int v;
  v = 53 + n;
  v = 2 * v;
  v = v - 99;
  v = v / 2;
  v = v - n;
return v;}

//Fonction nbRacines
int nbRacines(int a, int b, int c)
{
  int discr = b * b - (4 * a * c);
    int nbr;
  if (a==0)
   {
    nbr = 1;}
  else {
    if (discr < 0)
      {
      nbr = 0;}
    else {
      if (discr == 0)
	{
	  nbr = 1;}
      else {
	nbr = 2;}
    }
  }
  return nbr;
 }

//Fonction solRacines
list<int> solRacines(int a,int b, int c)
{
  int x = 0;
  int y = 0;
  int d = b * b - (4 * a * c);
  if (nbRacines(a,b,c) == 1)
    {
      x = (-b - sqrt(d)) /( 2*a);}
  else
    {
      if (nbRacines(a,b,c) == 2)
	{
	  x = (-b - sqrt(d)) / 2*a;
	  y = (-b + sqrt(d)) / 2*a;
	}
    }
  return cons(x,cons(y,liVide<int>()));
}

//Fonction somPair
int somPair(int n)
{
  int som;
  som = 0;
  for(int i=1; i <= n; i++)
    som = som + i*2;
  return som;
}

//Fonction somImp
int somImp(int n)
{
  int som;
  som = 0;
  for(int i=1; i <= n; i++)
    som = som + (i*2)-1;
  return som;
}

//Fonction somDiv
int somDiv(int n)
{
  int som = 1;
  for (int i = 2; i <= n; i++)
    { if (n%i == 0) {som = som +i;}
    }
  return som;
}

//Fonction estParfait
bool estParfait(int n)
{
  return somDiv(n) == 2*n;
  }
      
//Fonction existeParfait1
bool existeParfait1(int a, int b)
{
  bool res = false;
  for (int i = a; i <= b; i++)
    { if (estParfait(i))
	{res = true;}
    }
  return res;
}

//Fonction existeParfait2
bool existeParfait2(int a, int b)
{
  bool res = false;
  while (res == false)
    { for (int i = a; i <= b; i++)
      {
       if (estParfait(i))
	 {res = true;}
      }
    }
  return res;
}

//Fonction pair
bool pArite(int n)
{
  bool res=false;
  if ( n&1)
    {res=false;}
  else
    {res=true;}
  return res;
}
//Fc nbPair
bool nbPair(int n)
{
  return n%2==0;
}
    
//Fc puisX
int puisX(int a,int b)
{
  int res=1;
  for(int i=0; i <b; i++)
    {res=res * a;}
  return res;
}

//Fc premChif
int premChif(int n)
{
  return (n<10 ? n : premChif(n/10));
}

