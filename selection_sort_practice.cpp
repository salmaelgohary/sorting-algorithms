#include <iostream>
#include <ctime>
using namespace std;

void selection_sort(int my_array[], int n);
void fill_array(int my_array[], int n);
void print_array(int my_array[], int n);

int main(){

    int my_array[10];
    fill_array(my_array, 10);
    print_array(my_array, 10);
    selection_sort(my_array, 10);

    cout << "\nThe sorted array is: \n";
    print_array(my_array, 10);

    return 0;
}

void selection_sort(int my_array[], int n){
    for(int cur = 0; cur < n - 1; cur++){
        int min_index = cur; //allows us to update what the minimum index value is

        for (int j = cur + 1; j < n; j++){
            if(my_array[j] < my_array[min_index]){
                min_index = j; //picks out the SMALLEST number out of all the rest of the j's, if theres one even smaller than array at new min idex will change the value
            }
        }

        if(min_index != cur){
            int temp = my_array[cur];
            my_array[cur] = my_array[min_index];
            my_array[min_index] = temp;
        }
    }
}

void fill_array(int my_array[], int n){
    srand(time(0));
    for(int index = 0; index < n; index++){
        my_array[index] = rand() % 100 + 1;
    }
}

void print_array(int my_array[], int n){
    for(int index = 0; index < n; index++){
        cout << my_array[index] << " ";
    }
}
