// Lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <stack>
#include <windows.h>
using namespace std;
int main() {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    stack<int> s;  
    int n, x, max_element;  

    cout << "Введіть кількість елементів: ";
    cin >> n;

    cout << "Введіть " << n << " елементів:\n";
    for (int i = 0; i < n; i++) {
        cin >> x;
        s.push(x);  
    }

    
    if (!s.empty()) {
        max_element = s.top();
    }

    while (!s.empty()) {
        int element = s.top();
        s.pop();  

        if (element > max_element) {  
            max_element = element;
        }
    }

    cout << "Найбільший елемент стеку: " << max_element << endl;
    return 0;
}