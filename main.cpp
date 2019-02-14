#include <iostream>
#include <vector>
using namespace std;


template <typename T>
void Fillarr(vector <T> &arr, int count){
  for(int i = 0; i < count; i++){
    cout << "Enter the element number " << i << ":";
    cin >> arr[i];
  }
}

template <typename T>
void Showarr(vector <T> &arr, int count){
  for (int i = 1; i <= arr.size(); ++i)
  {
    cout << "arr[" << i << "] :";
    cout << arr[i - 1] << endl;
  }
}

template <typename T>
void Sortbychoise(vector <T> &arr, int count){
  for(int i = 0; i < count - 1; i++ ){
    int min_ind = i;

    for(int j = i + 1; j < count; j++){
      if(arr[j] < arr[min_ind])
        min_ind = j;
    }

    swap(arr[i], arr[min_ind]);
  }
}

int main(){
  int count;
  cout << "Enter the number of elements:";

  cin >> count;

  vector<int> arr(count);

  cout << endl;

  Fillarr(arr, count);

  cout << endl;

  cout << "Unsorted array:" << endl;

  Showarr(arr, count);

  Sortbychoise(arr, count);

  cout << "Sorted: \n";

  Showarr(arr, count);

  return EXIT_SUCCESS;
}
