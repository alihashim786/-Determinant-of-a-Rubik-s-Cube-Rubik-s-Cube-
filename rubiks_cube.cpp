/*
Name: Ali Hashim
Student-ID: 22i-0554
Assignment: 01
*/


#include <iostream>
#include <ctime>
using namespace std;

class Cube {
public:
    int size;
    int*** sides;
//parametrized costructor
    Cube(int size) {
        this->size = size;
        createRubiksCube();
        initializeRubiksCube();
    }

    ~Cube() {
        for (int i = 0; i < size; i++) {
            for (int j = 0; j < size; j++) {
                delete[] sides[i][j];
            }
            delete[] sides[i];
        }
        delete[] sides;
    }

    void createRubiksCube() {
        sides = new int**[size];
        int i = 0;
        for(int i=0;i<size;i++) {
            sides[i] = new int*[size];
            for(int j=0;j<size;j++){
                sides[i][j] = new int[size];
            }
            
        }
    }

    void initializeRubiksCube() {
        srand(time(0));
        for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        for(int k=0;k<size;k++){
            sides[i][j][k] = rand() % 99 + 1;
        }
        }
        }
        

    }

    void displayRubiksCube() {

         for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
        for(int k=0;k<size;k++){
            cout << sides[i][j][k] << " ";
        }
        cout << endl;
        }
        cout << endl;
        }
        int i = 0;


   
    }

    void updateTopSide() {
        cout << "Enter values for the top side of the Rubik's Cube:\n";
        int i = 0;
        while (i < size) {
            int j = 0;
            while (j < size) {
                cout << "Enter value for position (" << i + 1 << "," << j + 1 << "): ";
                cin >> sides[0][i][j];
                j++;
            }
            i++;
        }
    }

    int calculateDeterminant(int** matrix, int size) {
        if (size == 2) {
            return matrix[0][0] * matrix[1][1] - matrix[0][1] * matrix[1][0];
        }
        else {
            int determinant = 0;
            int i = 0;
            while (i < size) {
                int submatrixSize = size - 1;
                int** submatrix = new int*[submatrixSize];
                int j = 0;
                while (j < submatrixSize) {
                    submatrix[j++] = new int[submatrixSize];
                }
                j = 1;
                while (j < size) {
                    int submatrixCol = 0;
                    for (int k = 0; k < size; k++) {
                        if (k != i) {
                            submatrix[j - 1][submatrixCol++] = matrix[j][k];
                        }
                    }
                    j++;
                }

                int sign = (i % 2 == 0) ? 1 : -1;
                determinant += sign * matrix[0][i] * calculateDeterminant(submatrix, submatrixSize);
                j = 0;
                while (j < submatrixSize) {
                    delete[] submatrix[j++];
                }
                delete[] submatrix;
                i++;
            }
            return determinant;
        }
    }
};

int main() {
    int size;
    cout << "Please enter the size of the Rubik's Cube (2-5): ";

    while(true){
    cin >> size;
    if (size >= 2 && size <= 5){
        break;
    }
    cout<<"Invalid input entered. Enter again : ";
}

        Cube cube(size);

        cout << "Initial Rubik's Cube:\n";
        cube.displayRubiksCube();

        cube.updateTopSide();

        int sumOfDeterminants = 0;
        bool hasSingularSide = false;
        int* singularSides = new int[size];
        int singularSidesCount = 0;

        for (int i = 0; i < size; i++) {
            int determinant = cube.calculateDeterminant(cube.sides[i], size);
            sumOfDeterminants += determinant;

            if (determinant == 0) {
                hasSingularSide = true;
                singularSides[singularSidesCount++] = i + 1;
            }

            cout << "Determinant of side " << i + 1 << ": " << determinant << endl;
        }

        cout << "Sum of determinants for each side: " << sumOfDeterminants << endl;

        if (hasSingularSide) {
            cout << "Singular Sides:" << endl;
            for (int i = 0; i < singularSidesCount; i++) {
                cout << "Side " << singularSides[i] << endl;
            }
        }

        cout << "Updated Rubik's Cube:\n";
        cube.displayRubiksCube();

        delete[] singularSides;


    return 0;
}
