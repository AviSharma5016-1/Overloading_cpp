#include <iostream>
using namespace std;

class UserInfo {
public:
    void show(string name) {
        cout << "Name: " << name << endl;
    }

    void show(string name, int age) {
        cout << "Name: " << name << ", Age: " << age << endl;
    }

    void show(string name, string city) {
        cout << "Name: " << name << ", City: " << city << endl;
    }

    void show(string name, int age, string city) {
        cout << "Name: " << name << ", Age: " << age << ", City: " << city << endl;
    }
};

int main() {
    UserInfo u;

    u.show("Avi");
    u.show("Avi", 20);
    u.show("Avi", "Pune");
    u.show("Avi", 20, "Pune");

    return 0;
}

// OUTPUT
// Name: Avi
// Name: Avi, Age: 20
// Name: Avi, City: Pune
// Name: Avi, Age: 20, City: Pune
