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
    list<int> giLit = {1,2,3,4,4,3,2,1};
    giLit.insert(--giLit.end(), 100);
    printSTL(giLit , " " , true );
    //-------------------------------------------
}



int main(){
    funct1();

return 0;
}