

#include <cstdlib>
#include <iostream>

void bubblsort(int data[], int n) {

  int i, j, temp;

  for (i = 0; i < n - 1; i++) {

    for (j = 0; j < n - i - 1; j++) {

      if (data[j] > data[j + 1]) {
        temp = data[j];
        data[j] = data[j + 1];
        data[j + 1] = temp;
      }
    }
  }
}

using namespace std;

int main() {
  int data[10];
  int i;
  cout << "Enter ten unsorted integers..." << endl;
  for (i = 0; i < 10; i++) {
    cout << "[" << i << "] = ";
    cin >> data[i];
  }
  cout << "Unsorted List = ";

  for (i = 0; i < 10; i++) {
    cout << data[i] << ", ";
  }
  cout << endl;

  cout << "Sorting..." << endl;

  bubblsort(data, 10);
  cout << "Sorted List = ";
  for (i = 0; i < 10; i++) {
    cout << data[i] << ", ";
  }

  cout << endl;

  return 0;
}
