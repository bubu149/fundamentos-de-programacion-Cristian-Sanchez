//verificacion de ip al que pertenece
#include <iostream>

using namespace std;

int main() {
    string IP;
    cout << "Ingrese la IP" << endl;
    cin >> IP;

    if (IP == "10.0.0.0") {
        cout << "Su IP es del tipo A" << endl;
        return 0;
    } else if (IP == "172.16.0.0") {
        cout << "Su IP es del tipo B" << endl;
        return 0;
    } else if (IP == "192.168.0.0") {
        cout << "Su IP es del tipo C" << endl;
        return 0;
    }

    return 0;
}
