#include <iostream>
using namespace std;

int main(){
    // несортированный список
    int unsorted[] = {9,8,7,6,5,4,3,3,2,1};
    
    // размер списка
    int size_unsorted = sizeof(unsorted) / sizeof(unsorted[0]); 

    //выводим несортированный список
    cout << "\nUnsorted: ";
    for(int i = 0 ; i < size_unsorted ; i++){
        cout << unsorted[i] << " ";
    } 

    int current_element,temp;

    for(int i = 1; i < size_unsorted; i++){        
        current_element = unsorted[i];
        for(int j = i-1; j >= 0 && unsorted[j] > current_element; j--){
            // замена, если текущий элемент меньше
            temp = unsorted[j+1];
            unsorted[j+1] = unsorted[j];
            unsorted[j] = temp;
        }
    }

    // печать отсортированного списка
    cout << "\nSorted: ";
    for(int i = 0 ; i < size_unsorted ; i++){
        cout << unsorted[i] << " ";
    } 

    return 0;
}
