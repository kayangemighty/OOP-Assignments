#include <iostream>
#include <cstring>
#include <iomanip>
using namespace std;

void print_seat(int** seat, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cout << setw(2) << setfill('0') << seat[i][j];
            if (j < col - 1) cout << " ";
        }
        cout << endl;
    }
}

int main() {
    const int ROW = 10, COL = 10;

    // 1. Dynamically allocate 10x10 array
    int** seat = new int* [ROW];
    for (int i = 0; i < ROW; i++)
        seat[i] = new int[COL];

    // Initialize with memset
    for (int i = 0; i < ROW; i++)
        memset(seat[i], 0, COL * sizeof(int));

    // Assign seat values
    seat[0][0] = 11; seat[0][3] = 24;
    seat[1][1] = 35;
    seat[2][5] = 47;
    seat[3][3] = 58;
    seat[4][9] = 69;
    seat[5][0] = 70; seat[5][5] = 81; seat[5][9] = 92;
    seat[6][4] = 13;
    seat[7][7] = 26;
    seat[8][2] = 39;
    seat[9][9] = 44;

    // 2. Print original seat map
    cout << "[Original Seat Map]" << endl;
    print_seat(seat, ROW, COL);

    // 3. Create backup and copy row by row with memcpy
    int** backup = new int* [ROW];
    for (int i = 0; i < ROW; i++) {
        backup[i] = new int[COL];
        memcpy(backup[i], seat[i], COL * sizeof(int));
    }

    cout << "[Backup Seat Map]" << endl;
    print_seat(backup, ROW, COL);

    // 4. Clear row 5 in original only
    memset(seat[5], 0, COL * sizeof(int));

    cout << "[Original Seat Map After Clearing Row 5]" << endl;
    print_seat(seat, ROW, COL);

    cout << "[Backup Seat Map After Original Was Modified]" << endl;
    print_seat(backup, ROW, COL);

    // 5. Find row with most assigned seats in backup
    int maxCount = -1, maxRow = 0;
    for (int i = 0; i < ROW; i++) {
        int count = 0;
        for (int j = 0; j < COL; j++)
            if (backup[i][j] != 0) count++;
        if (count > maxCount) {
            maxCount = count;
            maxRow = i;
        }
    }

    cout << "[Row With Most Assigned Seats]" << endl;
    cout << "Row: " << maxRow << endl;
    cout << "Count: " << maxCount << endl;

    // Free all memory
    for (int i = 0; i < ROW; i++) {
        delete[] seat[i];
        delete[] backup[i];
    }
    delete[] seat;
    delete[] backup;

    return 0;
}
