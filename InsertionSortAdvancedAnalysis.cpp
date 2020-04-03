/*Insertion Sort is a simple sorting technique which was covered in previous challenges. Sometimes, arrays may be too large for us to wait around for insertion sort to finish. Is there some other way we can calculate the number of shifts an Insertion Sort performs when sorting an array?

If  is the number of elements over which the  element of the array has to shift, then the total number of shifts will be  ... + . For example, consider the array .

Array		Shifts
[4,3,2,1]	
[3,4,2,1]	1
[2,3,4,1]	2
[1,2,3,4]	3

Total shifts = 1 + 2 + 3 = 6
Function description

Complete the insertionSort function in the editor below. It should return an integer that represents the number of shifts required to sort the given array.

insertionSort has the following parameter(s):

arr: an array of integers
*/



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int read(int * p, int k) {
    int nrt=0;
    while(k>0) {
        nrt += p[k];
        k -= (k&(-k));
    }
    return nrt;
}

void update(int * p, int k) {
    while(k<=10000000) {
        p[k] ++;
        k += (k&(-k));
    }
}

int assign(int k, int * p, int existing) {
    int n = read(p, k); // sum of counts of number which is not bigger than k
    update(p, k);
    return existing-n;
}
int main() {
     int test=0;
    cin>>test;
    for(int i=0; i<test; i++) {
        int n=0;
        long sum=0l;
        cin>>n;
        int *p = new int[10000001]; // array is too big for stack
        for(int j=0; j<10000001; j++) {
            p[j]=0;
        }
      
        for(int j=0; j<n; j++) {
            int k=0;
            cin>>k;
            sum += assign(k, p, j);
        }
        cout<<sum<<endl;


delete[] p;
    }
    return 0;
}