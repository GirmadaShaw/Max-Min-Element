#include <iostream>
#include <limits.h>

int main()
{
    int arr[] = {230,23,23,23,-23};
    int size = sizeof(arr)/sizeof(int) ;

    int min = INT_MAX , max = INT_MIN ;
     
//Time-Complexity: O(n)
    for( int i=0 ; i<size ; i++ )
    {
        if ( arr[i] > max )
            max = arr[i];
        if ( arr[i] < min )
            min = arr[i];
    
    }

    std::cout<< "Maximum Element: "<<max<<"\nMinimum Element: "<<min; 

}