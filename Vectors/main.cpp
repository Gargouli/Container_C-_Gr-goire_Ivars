#include <iostream>
#include <vector>
#include <list>
#include "Point.h"
#include <deque>


using namespace std;
template<typename T> void affiche_V1(T& contain){
        for(unsigned  int i = 0; i < contain.size(); ++i)
        {
            cout << contain[i] << "\t";

        }
        cout << endl;
    }
template<typename T> void affiche_V2(T& contain){
        typename T::iterator it;
        for(it = contain.begin(); it != contain.end(); ++it)
        {
            cout << *it << "\t";
        }
        cout << endl;
    }


 template<typename T> void affiche_V3(const T& contain){
        for(auto it = contain.begin(); it != contain.end(); ++it)
        {
            cout << *it << "\t";
        }
        cout << endl;
    }

int main()
{

  vector<int> vecteur = { 11, 22, 33};
  list<double> liste = {3.14, 6.28, 9.42};
   cout << "-------------"<< endl;
  cout << "1) Vecteur:"<< endl;
  affiche_V1(vecteur);
 // cout << "1) Liste:"<< endl;
  // affiche_V1(liste);
  cout << "-------------"<< endl;
  cout << endl << endl;

   cout << "-------------"<< endl;
  cout << "2) Vecteur:"<< endl;
  affiche_V2(vecteur);
  cout << "-------------"<< endl;
  cout << endl << endl;
 cout << "-------------"<< endl;
  cout << "2) Liste:"<< endl;
  affiche_V2(liste);

  cout << "-------------"<< endl;
  cout << endl << endl;

  cout << "-------------"<< endl;
  cout << "3) Vecteur:"<< endl;
  affiche_V3(vecteur);
    cout << "-------------"<< endl;
  cout << endl << endl;
   cout << "-------------"<< endl;
  cout << "3) Liste:"<< endl;
  affiche_V3(liste);
    cout << "-------------"<< endl;
  cout << endl << endl;
 // vector<Point> v2(2);

 cout << "Modification:" << endl;
  cout << "-------------"<< endl;
  cout << endl << endl;

vector<int> v1 = { 11, 22, 33};
  cout << "-------------"<< endl;
  cout << "1) Vecteur Original:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1.push_back(44);
  cout << "-------------"<< endl;
  cout << "1) Vecteur pushback:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;

  v1.emplace_back(66);
  cout << "-------------"<< endl;
  cout << "1) Vecteur EmplaceBack:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1.emplace(v1.begin()+1, 55);
  cout << "-------------"<< endl;
  cout << "1) Vecteur EmplaceBegin:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  cout<< endl << endl;
  cout << "-------------"<< endl;
  cout << "1) Vecteur Modifier complet:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  cout << endl << endl;

  v1.reserve(10);
cout << "-------------"<< endl;
  cout << "1) Vecteur Reserve:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1.pop_back();
  cout << "-------------"<< endl;
  cout << "1) Vecteur PopBack:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  vector<int>::iterator it = v1.begin();
  cout << "-------------"<< endl;
  cout << "1) Vecteur Iterator:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1.erase(it + 2);
  cout << "-------------"<< endl;
  cout << "1) Vecteur Erase:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1.at(0) = 111;
  cout << "-------------"<< endl;
  cout << "1) Vecteur At111:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1[1] = 555;
  cout << "-------------"<< endl;
  cout << "1) Vecteur Modifier 555:"<< endl;
  affiche_V1(v1);
  cout << "-------------"<< endl;
  v1.insert(v1.begin() +2, 77);

  cout << " Vecteur Modifier 2:"<< endl;
  affiche_V1(v1);
   cout << "-------------"<< endl;
   cout << endl << endl;

 cout << "Vecteur Point V2: " << endl;
 cout << "------------------------"<< endl;
    vector<Point> v2(2);
    Point P1(44, 55);
    cout << " Vecteur Point :"<< endl;
    affiche_V2(v2);
    v2.push_back(P1);
    cout << "------------------------"<< endl;
    cout << " Vecteur Point :"<< endl;
    affiche_V2(v2);

    cout << "Vecteur Point V3: " << endl;
 cout << "------------------------"<< endl;
    vector<Point> v3;
    cout << " Vecteur Point :"<< endl;
    affiche_V3(v3);

deque<int> dq1 = { 11, 22, 33};
cout << "Premier affichage de deque" << endl ;
    affiche_V3(dq1);

cout << "Modification Deque : " << endl;
cout << endl << endl;

dq1.push_back(44);
cout << " affichage  PushBack de deque" << endl ;
    affiche_V3(dq1);

dq1.emplace_back(55);
cout << " affichage  emplaceback de deque" << endl ;
    affiche_V3(dq1);
dq1.push_front(44);
cout << " affichage  PushFront de deque" << endl ;
    affiche_V3(dq1);
dq1.emplace_front(77);
cout << " affichage  emplace front de deque" << endl ;
    affiche_V3(dq1);







}
