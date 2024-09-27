#include <iostream>
using namespace std;

int main() // 2-D ragged array
{
  int row;
  int column;
  cout << "Enter number of rows you want to enter: " << endl;
  cin >> row;
  cout << "Enter the number of columns you want to enter" << endl;
  cin >> column;

  int **ptr = new int *[row];
  for (int i = 0; i < row; i++) {
    ptr[i] = new int[column];
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << "Row " << i + 1 << "Column " << j + 1 << endl;
      cin >> ptr[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < column; j++) {
      cout << ptr[i][j] << " ";
    }
    cout << endl;
  }
}
void case2() { // 2D uniform array
  int row;
  cout << "Enter number of rows you want to enter: " << endl;
  cin >> row;
  int tempArray[row];
  for (int i = 0; i < row; i++) {
    cout << "Enter number of columns in each row you want to enter: " << i + 1
         << endl;
    cin >> tempArray[i];
  }
  int **ptr = new int *[row];
  for (int i = 0; i < row; i++) {
    ptr[i] = new int[tempArray[i]];
  }
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < tempArray[i]; j++) {
      cout << "Row " << i + 1 << "Column " << j + 1 << endl;
      cin >> ptr[i][j];
    }
  }

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < tempArray[i]; j++) {
      cout << ptr[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < row; i++) {
    delete[] ptr[i];
  }
}
