#include <iostream>
#include <array>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <forward_list>
#include <typeinfo>
#include <string>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <typeinfo>
#include <set>
#include "numbers.h"

using namespace std;


void funct1(){
    // dodanie za ostatnym elementem, wartosci 100......
    list<int> giLit = {1,2,3,4,5,6,7,8,9};
    giLit.insert(--giLit.end(), 100); // tutaj te dodanie..
    giLit.insert(++giLit.begin(), 555); // kolejne z podanych..(dodanie po pierwszej wartosci..)
    printSTL(giLit , " " , true );
    //-------------------------------------------
    cout << endl;

    for(auto iter = giLit.begin(); iter != giLit.end(); ++iter){
        cout << *iter << endl;
    }
    //dodawanie,odejmowanie  takie samo jak w DEQUE
}

void funct2(){

    cout << endl;

set<string> names{"Perzyk","Lentur","Kowalik","Mozambik","Bruszcz"}; //odrazu posortowane alfabetycznie, brak mozliwosci 2x tych samych nazwisk..
printSTL(names , " " , true); // wyswietlenie z numbers.h ..

names.insert({"Perzyk","Sloniczynka","Slonikowski"}); // drugi raz perzyka nie doda..
printSTL(names , " " , true);

auto[posit,success] = names.insert("Kaczuszka");
cout << *posit << " " << success << endl;

if(!names.insert("Kaczuszka").second) cout << "Juz jest dodana sialalala.." << endl; //komunikat o dodaniu
printSTL(names , " " , true);
}

void funct3(){
    set<int, greater<int>> num1 = {7,10,11,15,19,23,50,51,99,121}; //greater od najwyzszej do najnizszej
    set<int, less<int>> num2 = {7,10,11,15,19,23,50,51,99,121}; //less od najmniejszej do najwiekszej
    printSTL(num1 , " " , true);
    printSTL(num2 , " " , true);
}

void multi(){
    multiset<string> dogs{"Maksio","Mireczek","Borys","Maniek","Maniek","Kapi"}; // w multiset nazwy moga sie powtarzac!...
    printSTL(dogs , " " , true);

    cout << "Dostepne miejsce w multiset ---------> " << dogs.max_size() << endl; //ilosc dostepnego miejsca w multisecie
    cout << "Rozmiar multiset'u -------------> " << dogs.size() << endl;
    printSTL(dogs , " " , true);
}

void functMap(){

    cout << endl;
    cout << "--- ---! Sekcja z mapa - multimapa !--- ---" << endl;

    map<int,string> info;
    info = {
        {11,"Sloniczek"},
        {12,"Kaczuszka"},
        {16,"Misieee"},
        {18,"Myszki"},
    };
    for(auto ele: info){
        cout << ele.first << " -----> " << ele.second << endl;
    }
    cout << endl;

    info.insert({{10,"banda"},{11,"schodki"}}); //doda element pierwszy z dodawanych ale drugiego nie bo jest juz zajety~!

    for(auto ele: info){
        cout << ele.first << " -----> " << ele.second << endl;
    }

}

int main(){
    funct1();
    funct2();
    funct3();

    multi();
    
    functMap();

return 0;
}