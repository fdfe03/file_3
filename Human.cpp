// Practical 3: Rock, Paper, Scissors II
// Human Player Function
// A1780385 

#include <iostream>
#include "Human.h"
using namespace std;

Human::Human(){
}

char Human::makeMove(){
    char human;
    cout << "Enter Move: " << endl;
    cin >> human;

    return human;
}