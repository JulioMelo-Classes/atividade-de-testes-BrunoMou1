#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int n1, count;

    for (int i = 1; i <= SIZE; i++){
        cin >> n1;
        if (n1 < 0){
            count ++;
        }
    }

    cout << count << "\n";

    return 0;
}
