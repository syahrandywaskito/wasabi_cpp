#include <bits/stdc++.h>
using namespace std;
int main(){
    int *ptr_a = NULL;   // ptr_a is assigned null value
    int *ptr_b;          // ptr_b is uninitialised pointer (wild pointer)
    int *ptr_c = (int *)malloc(10*sizeof(char));
                        // Memory allocated to ptrc
    free(ptr_c);         // ptr_c is freed (dangling pointer)

    cout << "test\n"; 
    return 0; 
}