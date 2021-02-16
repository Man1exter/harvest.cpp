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

set<string> names{"Perzyk","Lentur","Kowalik","Mozambik","Bruszcz"}; //odrazu posortowane, brak mozliwosci 2x tych samych nazwisk..
printSTL(names , " " , true); // wyswietlenie z numbers.h ..

}



int main(){
    funct1();
    funct2();

return 0;
}