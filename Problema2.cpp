#include <iostream>

using namespace std;

int main() {
    int x = 1, y = 1, z;
    int result = 0;

    while (z <= 4000000) {
        z = x + y;
        x = y;
        y = z;

        if (z % 2 == 0)
            result += z;
    }

    cout << result << endl;

    return 0;
}