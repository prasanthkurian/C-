//#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int find_consecutive()
{
    int n;
    cin >> n;

    int divisor = n;
    int twos = 1;
    while (divisor = divisor >> 1) {
        twos = twos << 1;
    }
    

    bool consecutive = false;
    int count = 0;
    int max = 0;

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << twos << endl;
    while (twos != 0) {

        if (n & twos) {
            count++;
            if (count > max) {
                max = count;
            }
        }
        else {
            count = 0;
        }
        twos = twos >> 1;
    }
    std::cout << max << std::endl;
    return 0;
}