#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ci;
    string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int long_line = 1;
    int start = 0;

    for(int i=0;i<n;i++)
    {
        if(start == long_line)
        {
            long_line++;
            start = 0;
            cout << endl;
        }
        start++;
        cout << alphabet[i%26] << " ";
    }
}