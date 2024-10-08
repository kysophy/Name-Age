#include <iostream>

void nameAndYear(int currentYear);

using std::cout;
using std::cin;

int main() {
    int a = 2024;
    nameAndYear(a);

    return 0;
}

void nameAndYear(int currentYear) {
    std::string name;
    int birthDate;
    
    // input name
    cout << "Name = "; 
    getline(cin, name);

    //input birth year
    cout << "Birth-year = ";
    cin >> birthDate;

    int age = currentYear - birthDate;

    if (age < 1 || age > 122) {
        cout << "invalid birth year!";
    } else {
        cout << "Hello " << name << ", now you are " << age << " years old.";
    }
}






