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

vector<int> get_int_inputs()
{
    const string filename = "input.txt";
    vector<int> inputs;
    string line;
    ifstream file(filename);
    if (!file)
    {
        exit(1);
    }
    while (getline(file, line))
    {
        inputs.push_back(stoi(line));
    }
    return inputs;
}

int part1(vector<int> reports)
{
    unsigned int count = 0;
    for (int i = 1; i < reports.size(); ++i)
    {
        if (reports[i] > reports[i - 1])
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> reports = get_int_inputs();
    int result_p1 = part1(reports);

    cout << "\nthere are " << result_p1 << " measurements that are larger than the previous measurement." << endl;

    return 0;
}