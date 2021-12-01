/*
Wed. 1 december 2021
Alexis LE FLOCH <alexis.le-floch@protonmail.com>

Advent of Code 2021
====================
01. Sonar Sweep 

g++ prog.cpp -std=c++11 -o prog.out
*/
#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

int main()
{
    const string filename = "input.txt";
    string line;
    vector<int> reports;
    unsigned int count = 0;

    ifstream file(filename);
    if (!file)
    {
        exit(1);
    }
    while (getline(file, line))
    {
        reports.push_back(stoi(line));
    }
    for (auto report : reports)
    {
        cout << report << "\t";
    }

    for (int i = 1; i < reports.size(); ++i)
        {
            if ( reports[i] > reports[i-1])
            {
                count++;
            }
        }

    cout << "\nthere are " << count <<" measurements that are larger than the previous measurement." << endl;

    return 0;
}