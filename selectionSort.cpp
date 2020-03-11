#include<iostream>
using namespace std;
void swapp(int &a, int &b)
{
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void selectionSort(int *array, int n) {
   int i, j, imin;
   for(i = 0; i<n-1; i++) {
      imin = i;
      for(j = i+1; j<n; j++)
         if(array[j] < array[imin])
            imin = j;
         swap(array[i], array[imin]);
   }
}
int main() {
   int n;
   cout << "Enter size of array."<<endl;
   cin >> n;
   int arr[n];
   cout << "Enter elements of the array." << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting."<<endl;
   display(arr, n);
   selectionSort(arr, n);
   cout << "Array after Sorting."<<endl;
   display(arr, n);
}
