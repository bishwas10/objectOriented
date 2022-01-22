#include <iostream>
using namespace std;
int main ()
{
    int **p,number_of_row,number_of_column, i, j;
    cout << "Enter the number of row" << endl;
    cin >> number_of_row ;
    cout << "Enter the number of column" << endl;
    cin >> number_of_column;
    p = new int *[number_of_row];
    for (i = 0; i <number_of_row; i++)
    p[i] = new int [number_of_column];
    cout << "Enter " <<  number_of_row * number_of_column << "  elements" << endl;
    for (i = 0; i <number_of_row;i++)
    for (j = 0; j <number_of_column;j++)
    cin >> p[i][j];
    cout << "Elements are" << endl;
    for (i = 0; i <number_of_row;i++)
    {
    for (j = 0; j <number_of_column;j++)
    {
    cout << p[i][j] << ends;
    }
    cout << endl;
    }
    delete p;
    return 0;
}