#include<iostream>
using namespace std;
int main(){
for (int i = 1; i <= 3; i++) {
    cout << i << " ";
}
int n = 4;
for (int i = 1; i <= n; i++) {
    cout << i * 2 << " ";
}
int i = 3;
while (i > 0) {
    cout << i << " ";
    i--;
}
for (int i = 2; i <= 6; i += 2) {
    cout << i << " ";
}
for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0) {
        cout << "E";
    }
    else {
        cout << "O";
    }
}
int a = 5;
int d = 3;
cout << a << " ";
for (int i = 1; i < 3; i++) {
    a = a + d;
    cout << a << " ";
}
int i = 1;
while (i <= 3) {
    cout << i << " ";
    ++i;
}
for (int i = 5; i >= 1; i--) {
    cout << i << " ";
}
int sum = 0;
for (int i = 1; i <= 4; i++) {
    sum = sum + i;
}
cout << sum;
int i = 1;
while (i <= 4) {
    if (i == 3) {
        cout << "Three ";
    }
    else {
        cout << i << " ";
    }
    i++;
}
for (int i = 1; i <= 7; i++) {
    if (i % 3 == 0) {
        cout << i << " ";
    }
}
int x = 2;
for (int i = 0; i < 3; i++) {
    x = x * 2;
    cout << x << " ";
}
}