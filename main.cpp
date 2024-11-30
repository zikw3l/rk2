#include <iostream>
#include <vector>
using namespace std;
vector<double> vychitMatrix(const vector<double>& matrix1, const vector<double>& matrix2, int strok, int stolb) {
    vector<double> result(matrix1.size());
    for (int i = 0; i < strok; ++i) {
        for (int j = 0; j < stolb; ++j) {
            result[i * stolb + j] = matrix1[i * stolb + j] - matrix2[i * stolb + j];
        }
    }
    return result;
}

int main() {
    int strok = 3;
    int stolb = 3;
    vector<double> matrixA = {1,2,3,4,5,6,7,8,9};
    vector<double> matrixB = {9,8,7,6,5,4,3,2,1};
    if (matrixA.size() != matrixB.size() || matrixA.size() != strok * stolb) {
        cout<<"Tak nel'zya";
        return 1;
    }
   vector<double> matrixC = vychitMatrix(matrixA, matrixB, strok, stolb);
    for (size_t i = 0; i < strok; ++i) {
        for (size_t j = 0; j < stolb; ++j) {
            cout << matrixC[i * stolb + j] << " ";
        }
        cout << endl;
    }
    return 0;
}