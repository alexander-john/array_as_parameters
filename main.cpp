/*
 * In C++, it is not possible to pass the entire block of memory represented by an array
 * to a function directly as an argument. But what can be passed instead is its address.
 * In practice, this has almost the same effect, and it is a much faster and more efficient
 * operation.
 *
 * To accept an array as parameter for a function, the parameters can be declared as the array
 * type, but with empty brackets, omitting the actual size of the array.
 *
 * example:
 *
 * void procedure (int arg[])
 *
 * This function accepts a parameter of type "array of int" called arg. In order to pass to this
 * function an array declared as:
 *
 * int myarray [40];
 *
 * it would be enough to write a call like this:
 *
 * procedure (myarray)
 *
 * In the code, the first parameter (int arg[]) accepts any array whose elements are of type int,
 * whatever its length. For that reason, we have included a second parameters that tells the function
 * the length of each array that we pass to it as its first parameter. This allows the for loop that prints
 * out the array to know the range to iterate in the array passed, without going out of range.
 *
 * In a function declaration, it is also possible to include multidimensional arrays. The format for
 * a tridimensional array parameter is:
 *
 * base_type[][depth][depth]
 *
 * for example, a function with a multidimensional array as argument could be:
 *
 * void procedure(int myarray[][3][4])
 *
 * notice that the first brackets [] are left empty, while the following ones specify
 * sizes for their respective dimensions. This is necessary in order for the compiler to be able to
 * determine the depth of each additional dimension.
 *
 *
 */
#include <iostream>
using namespace std;

void printArray(int arg[], int length) {
    for (int n = 0; n < length; ++n)
        cout << arg[n] << ' ';
    cout << '\n';
}

int main() {
    int firstArray[] = {5, 10, 15};
    int secondArray[] = {2, 4, 6, 8, 10};

    printArray(firstArray, 3);
    printArray(secondArray, 5);

    return 0;
}
