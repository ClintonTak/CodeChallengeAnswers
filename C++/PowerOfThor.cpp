   #include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

/**Help thor move to the power station, link here: https://www.codingame.com/ide/puzzle/power-of-thor-episode-1
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 * ---
 * Hint: You can use the debug stream to print initialTX and initialTY, if Thor seems not follow your orders.
 **/
int main()
{
    int lightX; // the X position of the light of power
    int lightY; // the Y position of the light of power
    int initialTX; // Thor's starting X position
    int initialTY; // Thor's starting Y position
    cin >> lightX >> lightY >> initialTX >> initialTY; cin.ignore();

    // game loop
    while (1) {
        int remainingTurns; // The remaining amount of turns Thor can move. Do not remove this line.
        cin >> remainingTurns; cin.ignore();
        string yDir = ""; 
        string xDir = ""; 
        // Write an action using cout. DON'T FORGET THE "<< endl"
        // To debug: cerr << "Debug messages..." << endl;
        //move north
        if(initialTY > lightY){
            initialTY--; 
            yDir="N"; 
        }else if ( initialTY < lightY) {//move south
           initialTY++; 
           yDir="S"; 
        }
        //move west
        if(initialTX > lightX){
            initialTX--; 
            xDir="W"; 
        }else if (initialTX<lightX){//move east
            initialTX++; 
            xDir = "E"; 
        }
       
        // A single line providing the move to be made: N NE E SE S SW W or NW
        cout << yDir<<xDir << endl;
        
    }
}