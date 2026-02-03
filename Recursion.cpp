#include<bits/stdc++.h>
using namespace std;


void recExample(int cnt) {
  if(cnt == 5)    //base case
    return;     //exit the recursion
  cout << "hello" << endl;
  cnt++;
  recExample(cnt);
}

void nTimeName(int i,int num) {
    if(i>num)
      return;
    cout << "Name" << endl;
    nTimeName(i+1, num);
}

void print1toN(int i,int num) {
    if(i>num)
      return;
    cout << i << endl;
    print1toN(i+1, num);
}

void printNto1(int i, int num) {
    if(i<1)
      return;
    cout << i <<endl;
    printNto1(i-1,num);
}

void print1toN_backtracking(int i, int num) {
    if(i<1)
      return;
    print1toN_backtracking(i-1, num);
    cout << i << endl;
}

void sumParameterised(int i, int sum) {
    if(i<1){
      cout << sum;
      return;
    }
    sumParameterised(i-1, sum+i);
}

int sumFunctional(int num) {
    if(num == 0) 
      return 0;
    return num + sumFunctional(num-1);
}

int factorial(int num) {
    if(num == 0)
      return 1;
    return num * factorial(num-1);
}

void revArray(int i, int arr[], int num) {
  // Base case: when left index crosses or meets right side
    if(i>=num)
      return;
    swap(arr[i], arr[num-1]);  // Swap current left and right elements
    revArray(i+1, arr, num-1); // Move left forward and right backward
}

void revArray2(int i, int arr[], int num) {
    if(i>=num/2)
      return;
    swap(arr[i], arr[num-i-1]);
    revArray2(i+1, arr, num);
}

bool palindromeOrNot(int i, string &str) {
    if(i >= (int)str.size() / 2) return true;
    if(str[i] != str[str.size() - i - 1]) return false;
    return palindromeOrNot(i+1, str);
}

int fibonacci(int num) {
    if(num <= 1) return num;
    int last = fibonacci(num - 1);
    int slast = fibonacci(num - 2);
    return last + slast;
    // TC (2^n)
}

int main() {
  // Recursion : when a function calls itself until a specified condition is met.
  // recursion use stack to store previous pending functions (when it reach its limit it is called stackoverflow).
  // diagrammatical representation of recursion is called recursion tree.
  // TC O(n)
  // SC O(n) {stack}

  int num;
  cout << "Enter a number : ";
  cin >> num;

  recExample(0);
  nTimeName(1, num);
  print1toN(1,num);
  printNto1(num, num);
  print1toN_backtracking(num, num);
  sumParameterised(num, 0);
  cout << sumFunctional(num);
  cout << factorial(num);
  
  int arr[num];
  cout << "enter array: ";
  
  for(int i = 0; i<num; i++) {
      cin >> arr[i];
  }

  revArray(0, arr, num);
  revArray2(0, arr, num);

  for(int i = 0; i<num; i++) {
      cout << arr[i] << " ";
  }

  string str = "MADAM";
  cout << palindromeOrNot(0, str);

  cout << fibonacci(num);

  return 0;
}