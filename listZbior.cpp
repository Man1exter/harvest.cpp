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



int main(){
    funct1();

return 0;
}