// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int row;
//     cin >> row;

//     int **arr = new int *[row];
//     int *col_size = new int;
//     for (int i = 0; i < row; i++)
//     {
//         cin >> col_size[i];
//         arr[i] = new int[col_size[i]];
//     }

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col_size[i]; j++)
//         {

//             cin >> arr[i][j];
//         }
//     }
//     cout << endl;

//     for (int i = 0; i < row; i++)
//     {
//         for (int j = 0; j < col_size[i]; j++)
//         {

//             cout << arr[i][col_size[j]] << " ";
//         }
//         cout << endl;
//     }
// }