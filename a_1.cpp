#include <iostream>
using namespace std;
//Linear search to find the position of a particular number in an array.
int findPos(int key, int a[], int n)
{
    if (n == 0) {
        return -1;
    }
    else if (key == a[n - 1]) {
        return n - 1;
    }
    else{
        return findPos(key, a, n - 1);
    }
}

int main()
{
    int a[20];
    int n;

    cout << "Enter the size of the array."<<endl;
    cin >> n;
    cout << "Enter the numbers of the array."<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int key;
    cout << "Enter number you wish to find. ";
    cin >> key;

    int pos = findPos(key, a, n);
    if (pos == -1)
        cout << "Number was not found." << endl;
    else
        cout << "Number found at position " << pos <<  endl;

    return 0;
}








