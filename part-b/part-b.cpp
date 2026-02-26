#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void towerHanoi(int i, string rod1, string rod2, string rod3, int& moves)
{

    //no disks
    if (i <= 0){ return; }
        
    //move i-1 disks from source to buffer
    towerHanoi(i - 1, rod1, rod3, rod2, moves);

    //largest disc to target
    cout << "Moving disc " << i 
         << " from rod #" << rod1 
         << " to rod #" << rod3 << "." << endl;

    moves++;

    //move i-1 disks from buffer to target
    towerHanoi(i - 1, rod2, rod1, rod3, moves);
}

int main() {
    // solve the first 5 cases of the Tower of Hanoi problem
    for (int i = 1, numMoves = 0; i <= 5; i++, numMoves = 0) {
        cout << setfill('-') << setw(40) << "" << endl;
        cout << "Trying n = " << i << endl << endl;
        towerHanoi(i, "Rod #1", "Rod #2", "Rod #3", numMoves);
        cout << endl << "Number of Moves = " << numMoves << endl;
    }

    // terminate
    return 0;
}
