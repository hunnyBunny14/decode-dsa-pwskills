#include <iostream>
using namespace std;

int ways(int sr, int sc, int er, int ec)
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;

    int right = ways(sr, sc + 1, er, ec);
    int down = ways(sr + 1, sc, er, ec);

    return right + down;
}

void printMaze(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;

    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }

    printMaze(sr, sc + 1, er, ec, s + "R");
    printMaze(sr + 1, sc, er, ec, s + "D");
}

int main()
{
    int n, m;
    cout << "Enter the number of rows: ";
    cin >> n;
    cout << "Enter the number of columns: ";
    cin >> m;

    int way = ways(0, 0, n - 1, m - 1);
    cout << "Total number of ways: " << way << endl;
    cout << "All possible paths:" << endl;

    printMaze(0, 0, n - 1, m - 1, "");
    return 0;
}
