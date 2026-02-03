#include<bits/stdc++.h>
using namespace std;

int input() {
  int digit;
    cout << "enter Digit : ";
    cin >> digit;
    return digit;
}

void DigitExtract() {
      int dig = input();
      int lastDigit;
        while(dig > 0){
            lastDigit = dig % 10;
            cout << lastDigit << endl;
            dig = dig / 10;
        }
}

// time complexity O(log10 n)
void countDigit() {
      int dig = input();
        int count = 0;
        while(dig > 0) {
            count++;
            dig = dig / 10;
        }
        cout << count;
    }

void countUsingLog() {
      int dig = input();
      int cnt = (int)(log10(dig) + 1);
      cout << cnt;
}

void reverseNumber() {
    int dig = input();
    int rev = 0;
    while(dig > 0){
        int lastDigit = dig%10;
        rev = rev*10 + lastDigit;
        dig = dig/10;
        }
    cout << rev;
}

void palindrome() {
    int dig = input();
    int duplicate = dig;
    int revNum = 0;
        while(dig > 0){
            int lastDigit = dig%10;
            revNum = revNum*10 + lastDigit;
            dig = dig/10;
            }
    if(revNum == duplicate) cout << "true";
    else cout << "false";
}

void ArmstrongNumbers() {
    int dig = input();
    int DupNum = dig;
    int sum = 0;
        while(dig > 0){
            int lastDig = dig%10;
            sum = sum + (lastDig * lastDig * lastDig);
            dig = dig/10;
        }
    if(sum == DupNum) cout << "Number is Armstrong";
    else cout << "Number is Not Armstrong";
}

void allDivisors() {

    int dig = input();

    // ---------------- First Method ----------------
    // Brute force: check every number from 1 to dig
    for(int i = 1; i <= dig; i++) {
        if(dig%i == 0) cout << i << endl;
    }
        // Time Complexity: O(n)
        // Space Complexity: O(1)


    // ---------------- Second Method ----------------
    // Optimized: only go till sqrt(dig)
    vector<int> ls;
    for(int i = 1; i*i <= dig; i++) {
        if(dig%i == 0) {
            ls.push_back(i);// i is a divisor

            // paired divisor = dig / i
            if((dig/i) != i) {
                ls.push_back(dig/i);  // avoid duplicate when i*i == dig
            }
        }
    } 
    // Loop runs till sqrt(dig)
    // Time Complexity: O(√n)

    sort(ls.begin(), ls.end());    // Sorting Time: O(k log k), where k = number of divisors
    for(auto it :  ls) cout << it << " ";
    // Total Time Complexity (2nd method):
    // O(√n + k log k)
    // Space Complexity: O(k) for storing divisors
    // where
    // n = input number
    // k = number of divisors
}

void PrimeNumber() {

    // ---------------- First Method ---------------
    int dig = input();
    int cnt = 0;
    for(int i = 1; i <= dig; i++) {
        if(dig%i == 0) cnt++;
    }
    if(cnt == 2) cout << "true";
    else cout << "false";

    // ---------------- Second Method ----------------
    // Loop runs till √n → O(√n)
    // Space → O(1)
    cnt = 0;
      for(int i = 1; i*i <= dig; i++) {
          if(dig%i == 0){
            cnt++;
            if((dig/i) !=i ) cnt++;
          }
      }
    if(cnt == 2) cout << "true";
    else cout << "false";
}

void GCD_Or_HCF() {

    // time complexity {O(min(n1, n2))}
    int n1, n2;
    cout << "Enter Number-1 and Number-2 : ";
    cin >> n1 >> n2;
    
    for(int i = min(n1, n2); i>=1; i--) {
        if(n1%i==0 && n2%i==0){
            cout << i;
            break;
        }
    }
}

void EuclideanAlgorithm() {
    
    // gcd(a, b) == gcd(a%b, b)
    int a, b;
    cout << "Enter Number-1 and Number-2 : ";
    cin >> a >> b;
    while(a>0 && b>0) {
        if(a>b) a=a%b;
        else b=b%a;
    }
    if(a==0) cout << b;
    else cout << a;
    // Time complexity O(log fie(min(a,b)))
}

int main() {

    DigitExtract();
    countDigit();
    countUsingLog();
    reverseNumber();
    palindrome();
    ArmstrongNumbers();
    allDivisors();
    PrimeNumber();
    GCD_Or_HCF();
    EuclideanAlgorithm();

  return 0;
}