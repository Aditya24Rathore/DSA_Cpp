#include<bits/stdc++.h>
using namespace std;

void numberHashing() {
    int num;
    cout << "Enter size of array: ";
    cin >> num;

    int arr[num];
    cout << "Enter the array: ";
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
    }

    // precompute
    /*
    Note:
    - Arrays inside main/function → stack → safe till about 10^6
    - Very large arrays (10^7, 10^8) → declare globally
    */
    int hash[13] = {0}; // Array inside main → stored in STACK (limited size, safe ~10^6).
    for(int i = 0; i < num; i++) {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Enter number of operations: ";
    cin >> q;

    // while(q--) runs the loop q times, decreasing q each iteration until it becomes 0
    while (q--) {
        int number;
        cout << "number you want to search: ";
        cin >> number;

        // fetch
        cout << number << " appeared " << hash[number] << " times" << endl;
        }
}

void characterHashing() {
    string str;
    cout << "Enter String: ";
    cin >> str;

    // precomputing
    int hash[26] = {0};  // Alternative: use size 256 for all ASCII characters
    for(int i = 0; i < str.size(); i++) {
        hash[str[i] - 'a']++; // If using size 256, don't subtract 'a'
    }

    int q;
    cout << "Enter number of operations: ";
    cin >> q;

    while(q--) {
        char ch;
        cout << "Enter character: ";
        cin >> ch;
        
        // fetch
        cout << hash[ch-'a'] << endl; // If using size 256, don't subtract 'a'
    }
}

void numberHashingMap() {
    int num;
    cout << "enter a number: ";
    cin >> num;

    map<int, int> mpp;   //  option2 using unordered_map
    int arr[num];
    for(int i = 0; i < num; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    // iterate in the map

    // for(auto it : mpp) {
    //     cout << it.first << "->" <<it.second << endl;
    // }

    int q;
    cout << "Enter number of operations: ";
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
    }
}

void charHashingMap() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    map<char, int> mpp;   //  option2 using unordered_map
    for(int i = 0; i < str.size(); i++) {
    mpp[str[i]]++;
    }

    for(auto it : mpp) {
        cout << it.first << "->" << it.second << endl;
    }
}

// Map takes TC of O{log(n)} for all three
// Unordered_Map takes Tc of {O(1)} for best/avarage
// for worst O(n)


// Hashing Method
// 1) Division Method  -> use linear chaning
// 2) Folding Method
// 3) mid Square Method

int main() {
    numberHashing();
    characterHashing();
    numberHashingMap();
    charHashingMap();
  return 0;
}