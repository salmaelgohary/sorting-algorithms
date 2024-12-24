/*
Write a program that will initialize an array of ten integer values as:
int my_array[10] = {...}
The code will sort and output the array values in ascending
(non‐descending if there are duplicates) order.
To sort the array, use bubble sort
*/

#include <iostream>
#include <ctime>
using namespace std;

void fill_array_random(int my_array[], int n);
void print_array_values(int my_array[], int n);
void bubble_sort(int my_array[], int n);
//compare left and right elements and switch if the left is bigger than the right


int main(){
    int my_array[10];

    fill_array_random(my_array, 10);
    print_array_values(my_array, 10);
    bubble_sort(my_array, 10);

    cout << "\n The sorted array values after bubble sort is: \n";
    print_array_values(my_array, 10);

    return 0;
}

void fill_array_random(int my_array[], int n){
    srand(time(0));
    for (int index = 0; index < n; index++){
        my_array[index] = rand() % 50 + 1;
    }
}

void print_array_values(int my_array[], int n){
    for(int index = 0; index < n; index++){
        cout << my_array[index] << " ";
    }
}

void bubble_sort(int my_array[], int n){
    bool is_sorted = false;

    while(!is_sorted){
        bool is_swapped = false;

        for(int i = 0; i < n - 1; i++){
            if(my_array[i] > my_array[i+1]){
                int temp = my_array[i];
                my_array[i] = my_array[i+1];
                my_array[i+1] = temp; //switching the values with each other if left is smaller than right
                
                is_swapped = true;
            }
        }
        is_sorted = !is_swapped;
    }

}

