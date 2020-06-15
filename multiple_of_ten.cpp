//
//  main.cpp
//  Three arrays
//
//  Created by Khalid  on 9/1/17.
//  Copyright © 2017 Khalid Alghamdi. All rights reserved.
//

#include <iostream>
using namespace std;




void multiple_of_ten(int arr)
{
    
    if (arr % 10 == 0)
    {
        cout << arr << " is a multiple of 10." << endl;
    }
    else
    {
        cout << arr << " is NOT a multiple of 10." << endl;
    }
}

void half(int arr[], int SIZE)
{
    cout << " half of the integers: ";
    for (int i = 0; i < SIZE / 2; i++)
    {
        cout<< arr[i] << "   " <<endl;
    }
}


void sum_and_ave(int arr [], int Size){
   
    
    int sum = 0;
    double average;
    
    for (int j = 0; j < Size; j++)
    {
        sum += arr[j];
    }
    cout << "The Sum is: " << sum << endl;
    average = sum / 6.0;
    cout << "The Average is: " << average << endl;
    
    cout << endl;
    
    

};
int main() {
   
    int arr [6]= {10,5,15,20,30,25};
    
    
    half (arr,6);
    sum_and_ave(arr,6);
   
    for (int i = 0; i < 6; i++)
    {
 
    multiple_of_ten(arr[i]);

    }
    
    return 0;
};



