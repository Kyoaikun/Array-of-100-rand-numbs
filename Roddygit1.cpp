#include <iostream>
#include <iomanip>
#include <fstream>
#include <cmath>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){

int occur[100+1] = {0};

srand(time(0));

int arr[100];

for(int i=0; i<100; i++){

arr[i] = rand()%(100+1);

occur[arr[i]] += 1;

}

cout<<"Array of "<<"100"<<" random numbers:"<<endl;

for(int i=0; i<100; i++){

cout<<arr[i];

if((i+1)%10==0)

cout<<endl;

else

cout<<" ";

}

cout<<endl;

int max_ind = 0;

for(int i=0; i<100; i++){

if(occur[max_ind]<occur[i])

max_ind = i;

}

cout<<"\nThe most common number is "<<max_ind<<", which appears "<<occur[max_ind]<<endl;

return 0;

}




















/*int main()
{
    int i = 1;
    int array[100];

    while (i <= 100)
    {
        array[i-1] = i;
        i++;
    }

    i = 1;

    while (i <= 100)
    {
        std::cout << array[i-1] << " ";
        i++;
    }

    std::cout << std::endl;
    return 0;
}*/
