#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 *
Casablanca’s hippodrome is organizing a new type of horse racing: duals. During a dual, only two horses will participate in the race. In order for the race to be interesting, it is necessary to try to select two horses with similar strength.

Write a program which, using a given number of strengths, identifies the two closest strengths and shows their difference with an integer (≥ 0).


 */
int main()
{
    int N;
    set<int> horses; 
    
    cin >> N; cin.ignore();
    for (int i = 0; i < N; i++) {
        int Pi;
        cin >> Pi; cin.ignore();
        horses.insert(Pi); 
    }
    
    int differenceMin = 10000000; 
    if (horses.size() <=1 ){//all tie
        cout << 0 << endl;
        return 0;
    }
    for (set<int>::iterator iter = horses.begin(); iter != horses.end();){
        int first = *iter;
        int second = *(++iter);
        if (abs(second - first) < differenceMin){
            differenceMin = abs(second - first); 
        }
        
       // differenceMin = min(abs(second-first), differenceMin);    
    }
    
    
    
        

    // Write an action using cout. DON'T FORGET THE "<< endl"
    // To debug: cerr << "Debug messages..." << endl;

    cout << differenceMin << endl;
}