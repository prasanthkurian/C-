#include<iostream>
#include<vector>
#include<string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;
/*

constexpr - specifies that the value of an object or a function can be evaluated at compile time and the 
          expression can be used in other constant expressions


// constexpr function for product of two numbers.
// By specifying constexpr, we suggest compiler to
// to evaluate value at compile time
constexpr int product(int x, int y)
{
    return (x * y);
}

int main()
{
    const int x = product(10, 20);
    cout << x;
    return 0;
}

*/
constexpr unsigned int get_size() {
    return 10;
}

unsigned int get_size_bad() {
    return 10;
}

void array_initialization() {
	unsigned int count = 123;
	constexpr unsigned sz = 42;
    const unsigned int sz1 = 345;

    int arr[10];
    int *parr[10];
    //string bad[count]; //This will not work since count is not constant
    string good[sz];
    string gooder[sz1];
    //string strs1[get_sie_bad()];// function not a constant expression
    string strs[get_size()];
    /* Array count is determined at compile time so you cannot use any dimension which is not constant and that can change */

    
        
    int a[] = { 1,2,3,4 };
    //int a1[4] = a; // cannot initializa and array with another array;
    int a2[4];
    //a2 = a; // This is a big change. An array cannot be use to assign to another array

    int *ptrs[10]; // array of 10  pointers to integere;

    //int &refs[10]; // no array of references //ERROR

    int(*intptr)[4] = &a; //intptr points to array of 10 ints

    int(&arrayref)[4] = a; // Refference to array of ints

}

void array_exercise1() {
    int a[10] = {};
    int a1[10];
    int *ptr1;
    int* ptr2;
    vector<int> v1;
    int *ptr;
    ptr1 = &a[0];
    ptr2 = &a1[0];
    
    cout << sizeof(a) / sizeof(a[0]) << endl;
    for (auto i = 0; i < sizeof(a) / sizeof(a[0]); i++) {
        cout << "athentha: " << i << endl;
        a[i] = i;
        *ptr2++ = *ptr1++;
        v1.push_back(a[i]);

    }
    ptr = &v1[0];
    for (auto i : v1) {
        cout << typeid(i).name() << " " << typeid(sizeof(a1)).name() << endl;
        cout << i << endl;
        cout << *ptr++ << endl;
    }
}


