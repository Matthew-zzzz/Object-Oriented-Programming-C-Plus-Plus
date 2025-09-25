#include <iostream>
#include <vector>

using namespace std;
/** 
* @brief prints the elements in the vector and their memory locations
*
* @param v - vector of integers
 */
 
 void printMemVec(const vector<int>& v){
cout << "Vector - Each int is worth " << sizeof(int) << " bytes\n";
for (size_t i=0; i < v.size(); i++)
{
  cout << "Value " << v[i] << "\t Address" << &v[i] <<"\n";
}
 }

 /** 
 * @brief incremements all of the element in v by 10
 *
 * @param v - address to a vector of integers
  */
  void incVecBy10(vector<int>& v){
    for (size_t i=0; i< v.size(); i++) {
      v[i] = v[i]+10;
    }

  }

  int main() {
 const int SIZE = 5;   // create a constant integer called SIZE that is of value 5
 vector<int> vec;   // create a vector of integers called vec that can hold up to 5 elements

   for(int i=0; i < SIZE; i++)//use a for loop to populate vec with the values 100 to 104
{
   vec.push_back(i+100);
}

    printf("Before Increment--------------------\n");
    //call printMemVec(...) on vec
printMemVec(vec);
    //call incBy10(...) on vec
incVecBy10(vec);

    printf("\nAfter Increment----------------\n");
    //call printMemVec(...) on vec again to view the changes
printMemVec(vec);
    // remove last element of vec
    // (refer to docs https://cplusplus.com/reference/vector/#google_vignette)

    vec.pop_back();
    printf("\nAfter Pop----------------------\n");
printMemVec(vec);
    //append 101 to 102 at the end of vec 
    // (refer to docs https://cplusplus.com/reference/vector/vector/#google_vignette)

    vec.push_back(101);
vec.push_back(102);


    printf("\nAfter Push---------------\n");
   
    //call printMemVec(...) on vec again to view the changes
printMemVec(vec);
    return 0;
  }
