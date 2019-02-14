#include <iostream>
#include <vector>
using namespace std;

template <typename T>
void Fillarr(vector <T> &arr, int count, int i){
    //for(int i = 0; i < count; i++){
        cin >> arr[i];
    //}
}
template <typename T>
void Showarr(vector <T> &arr, int count, int i){
     //for(int i = 0; i < count; i++){
        cout << "arr[" << i+1 << "] :";
        cout << arr[i] << endl;
    //}
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
    vector<int>arr(count);
    int i;
    cout << "\n";
      for( i = 0; i < arr.size(); i++){
        cout << "Enter the element number " << i+1 << ":";
        Fillarr<int>(&arr, count, i);
}
    cout << "\n";

    cout << "Unsorted array:" << endl;
        for( i = 0; i < arr.size(); i++){
        Showarr<int>(&arr, count);
  }
        Sortbychoise(&arr, count);

        cout << "Sorted array:" << endl;
        for( i = 0; i < arr.size(); i++){
          Showarr<int>(&arr, count, i);
        }
        return 0;
}

// template <typename T>
// void Fillarr(const T * arr, int count){
//     for(int i = 0; i < count; i++){
//         cin >> arr[i];
//     }
// }
// template <typename T>
// void Showarr(const T * arr, int count){
//      for(int i = 0; i < count; i++){
//         cout << "arr[" << i+1 << "] :";
//         cout << arr[i] << endl;
//     }
// }
// template <typename T>
// T Sortbychoise(const T * arr, int count){
//     for(int i = 0; i < count - 1; i++ ){
//     int min_ind = i;
//       for(int j = i + 1; j < count; j++){
//         if(arr[j] < arr[min_ind])
//           min_ind = j;
//       }
//       swap(arr[i], arr[min_ind]);
//   }
// }
