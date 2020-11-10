#include <iomanip> // For setw() and setprecision()
#include <iostream>

using namespace std;

int main()
{
    int **A, **B, r1, c1, r2, c2, i = 0, j = 0, k = 0, mult[i][j];
cout << "Enter row and column for the first 2-D array: ";
cin >> r1 >> c1;

A = new int *[r1];
for (int k = 0; k < r1; k++)
A[k] = new int[c1];
cout << "Enter row and column for the second 2-D array: ";
cin >> r2 >> c2;

B= new int *[r2];
for (int k = 0; k < r2; k++)
B[k] = new int[c2];

for (int i = 0; i < r1; i++) {
for (int j = 0; j < c1; j++) {
A[i][j] = rand() % 1000;
cout << A[i][j] << " ";
}
cout << endl;
}

cout << endl;
cout << endl;
for (int i = 0; i < r2; i++) {
for (int j = 0; j < c2; j++) {
B[i][j] = rand() % 1000;
cout << B[i][j] << " ";
}
cout << endl;
}

if (c1 != r2) {
cout << "Sorry. Can't multiply. \n";
return 1;
}
    {
    for(i = 0; i < r1; ++i)
          for(j = 0; j < c2; ++j)
          {
              mult[i][j]=0;
          }
      
      for(i = 0; i < r1; ++i)
          for(j = 0; j < c2; ++j)
              for(k = 0; k < c1; ++k)
              {
                  mult[i][j] += A[i][k] * B[k][j];
              }
      cout << endl << "Output Matrix: " << endl;
      for(i = 0; i < r1; ++i)
      for(j = 0; j < c2; ++j)
      
      {
          cout << " " << mult[i][j];
          if(j == c2-1)
              cout << endl;
      }

      return 0;
  }
}
