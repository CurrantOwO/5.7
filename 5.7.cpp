#include <iostream>
#include <string> 
#include <cstdlib>
#include <ctime>

using namespace std;

int randomm() {
    int randomNumber = rand();
    int a = (randomNumber % 100) + 1;
    return a;
};

int main()
{
    setlocale(0, "Russian");
    srand(static_cast<unsigned int>(time(0)));
    int mas[10][10];
    for (int i = 0; i < 10; i++) {
        for (int li = 0; li < 10; li++) { mas[i][li] = randomm(); cout << "\t" << mas[i][li]; }
        cout << "\n\n\n";
    }
    cout << "\nПереворачиваем матрицу:\n\n\n";
    for (int i = 9; i >= 0; i--) {
        for (int li = 0; li < 10; li++) {cout << "\t" << mas[i][li]; }
        cout << "\n\n\n";
    }
}