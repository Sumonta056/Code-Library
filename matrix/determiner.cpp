#include<conio.h>
#include<iostream>
#include<math.h>
 
using namespace std;
double d = 0;
double det(int n, double mat[10][10]);
double det(int n, double mat[10][10])
{
    double submat[10][10];
    if (n == 2)
        return ((mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    else
    {
        for (int c = 0; c < n; c++)
        {
            int subi = 0; //submatrix's i value
            for (int i = 1; i < n; i++)
            {
                int subj = 0;
                for (int j = 0; j < n; j++)
                {
                    if (j == c)
                        continue;
                    submat[subi][subj] = mat[i][j];
                    subj++;
                }
                subi++;
 
            }
            d = d + (pow(-1, c) * mat[0][c] * det(n - 1, submat));  // submat is returned to function mat array to continue the loop
        }
    }
    return d;
}
int main(int argc, char **argv)
{
 
    cout << "Enter the dimension of the matrix:\n";
    int n;
    cin >> n;
    double mat[10][10];
    cout << "Enter the elements of the matrix:\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> mat[j][i];
        }
    }
    cout << "The determinant of the given matrix is: " << det(n, mat);
	return 0;
}