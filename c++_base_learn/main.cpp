#include<iostream>
#include<ctime>
using namespace std;
int main() {
    srand((unsigned) time(NULL));
    int ran = rand() % 100 + 1;
    for (int i = 0; i < 100; i++) {
        cout << (rand() % 100 + 1) << endl;
    }

    return 0;
}
