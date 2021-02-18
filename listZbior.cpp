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
    info[123] = "Choineczka"; // szybsze dodanie niz insert..

    for(auto ele: info){
        cout << ele.first << " -----> " << ele.second << endl;
    }

}

void functMap2(){
    cout << endl;
    cout << endl;
    cout << endl;

    map<int,string>osoba;
    osoba = {
      {1,"Policjant"},
      {2,"Lekarz"},
      {3,"Programista"},
      {4,"Prokurator"},
      {5,"Spawacz"},
      {6,"Pielęgniarz"},
      {7,"Pracownik"},
    };
    for(auto e: osoba){
        cout << e.first << " ======> " << e.second << endl;
    }
    cout << " Rozmiar ======> " << " [ " << osoba.size() << " ] " << endl;
}

void algorfunct(){
    cout << endl;
    cout << endl;
    cout << endl;

    cout << "Poszczegolne algorytmy na vector'ze" << endl;

    cout << endl;

   vector<int> numbers{1,3,5,7,9,11,13,15,17,19,21,23};
   printSTL(numbers , " " , true);
   cout << " rozmiar =======> " << numbers.size() << endl;
   cout << " maxymalny mozliwy rozmiar ======> "<< numbers.max_size() << endl;

}

void numbericFunction(){
    cout << endl; //numeric_limits<type>::max/min()
cout << "numerowane maxymalnosci ====> INT <==== " << numeric_limits<int>::max() << endl;
cout << "numerowane minimalnosci ====> INT <==== " << numeric_limits<int>::min() << endl;
cout << "numerowane maxymalnosci ====> SHORT <==== " << numeric_limits<short>::max() << endl;
cout << "numerowane minimalnosci ====> INT <==== " << numeric_limits<short>::min() << endl;
cout << "numerowane maxymalnosci ====> LONG LONG <==== " << numeric_limits<long long>::max() << endl;
cout << "numerowane minimalnosci ====> LONG LONG <==== " << numeric_limits<long long>::min() << endl;

cout << endl;

cout << " znak typu liczbowego int --> " << numeric_limits<int>::is_signed << endl;
cout << " znak typu liczbowego short --> " << numeric_limits<short>::is_signed << endl;
cout << " znak typu liczbowego double --> " << numeric_limits<double>::is_signed << endl;

cout << endl;

cout << " bledy zaokraglen --> " << numeric_limits<int>::is_exact << endl;
cout << " bledy zaokraglen --> " << numeric_limits<short>::is_exact << endl;

cout << endl;

cout << " liczba bitow bez znaku --> " << numeric_limits<int>::digits << endl;
cout << " liczba cyfer DEC --> " << numeric_limits<int>::digits10 << endl;

}

int main(){
    funct1();
    funct2();
    funct3();

    multi();
    
    functMap();
    functMap2();

    algorfunct();
    numbericFunction();


return 0;
}