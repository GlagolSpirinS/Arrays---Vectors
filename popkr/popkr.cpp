#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

void fillArray(vector<vector<int>>& arr, int rows, int cols) {
    srand(time(0));
    for (int i = 0; i < rows; i++) {
        vector<int> row;
        for (int j = 0; j < cols; j++) {
            int num = rand() % 100;
            row.push_back(num);
        }
        arr.push_back(row);
    }
}

void printArray(vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int findMin(vector<vector<int>>& arr) {
    int min = arr[0][0];
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] < min) min = arr[i][j];
        }
    }
    return min;
}

int findMax(vector<vector<int>>& arr) {
    int max = arr[0][0];
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            if (arr[i][j] > max) max = arr[i][j];
        }
    }
    return max;
}

double findAverage(vector<vector<int>>& arr) {
    int sum = 0;
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            sum += arr[i][j];
            count++;
        }
    }
    return (double) sum / count;
}

int main() {

    system("chcp 1251");
    system("cls");
    setlocale(LC_ALL, "Russian_Russia.1251");

    int rows, cols;
    cout << "Какое количество строк вы желаите ?" << endl;
    cin >> rows;
    cout << "Сколько столбиков вы хотите видеть ? " << endl;
    cin >> cols;

    vector<vector<int>> arr;
    fillArray(arr, rows, cols);
    printArray(arr);

    cout << "Минимальное число: " << findMin(arr) << endl;
    cout << "Максимальное число: " << findMax(arr) << endl;
    cout << "Среднее число: " << findAverage(arr) << endl;
}
