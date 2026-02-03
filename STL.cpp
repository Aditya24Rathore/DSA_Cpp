#include<bits/stdc++.h>
using namespace std;

// **Pairs**
void explainPair() {

    pair<int, char> mix = {2, 'A'};
      cout << mix.first << " " << mix.second << endl;

    pair<int, int> p1 = {1, 3};
      cout << p1.first << " " << p1.second << endl;

    pair<int, pair<int, int>> p2 = {2, {4, 6}};
      cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;

    pair<int, int> arr[] = { {2, 3}, {4, 5}, {6, 7}, {1, 0}, {9, 8}};
      cout << arr[2].first << " " << arr[2].second;
}

// **Vectors**
void explainVectors() {

    vector<int> v1;

    v1.push_back(1);  // insert element in vector
    v1.emplace_back(2); // Faster way to insert element in vector

    vector<pair<int, int>> vec;

    vec.push_back({2, 3});
    vec.emplace_back(4, 1);

    vector<int> v3(5, 100); // declaring the size and element at same time {saving 5 times 100}

    vector<int> v4(5);

    vector<int> v5(5, 20);
    vector<int> v6(v1); // saving vector inside vector

    vector<int>::iterator itr = v3.begin(); // variable_name.begin() shows the addres of vector element to iterator

    itr++; // begin point at 0th index
    cout << *(itr) << " "; // *(variable_name) use to print the value save at variable_name.begin()

    itr = itr + 2;
    cout << *(itr) << " ";

    // vector<int>::iterator itr1 = v3.end(); 
    // vector<int>::reverse_iterator itr2 = v3.rend();
    // vector<int>::reverse_iterator itr3 = v1.rbegin();

    cout << v3[0] << " " << v3.at(0); // use to print the vector 
    cout << v3.back() << " " << endl;

    // Printing the whole vector using the loop
    for(vector<int>::iterator itr = v5.begin(); itr != v5.end(); itr++) {
        cout << *(itr) << " ";
    }

    // auto is use to automaticaly assign the value;
    for(auto itr = v3.begin(); itr != v3.end(); itr++) {
        cout << *(itr) << " ";
    }

    // directly print the whole vector
    for(auto itr : v4) {
        cout << itr << " ";
    }

    // Deleting the value from vector
    v3.erase(v3.begin() + 1);
    // ex {10, 20, 30, 40, 50}
    v3.erase(v3.begin() + 2, v3.begin() + 4); // {10, 20, 50} [start, end)

    // inserting the value in vector
    vector<int> v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50); // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()); // {50, 50, 300, 10, 10, 100, 100}

    cout << v.size(); // show the size of vector

    v.pop_back(); // remove the last element

    v1.swap(v3); // swap two vectors

    v.clear(); // delete the all element of vector

    cout << v.empty(); // tells about if vector empty or not {true, false}

}

void explainList() {
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);

    ls.push_front(5);
    ls.emplace_front(3);

    // rest function are same as vector
    // begin, rbegin, end, rend, clear, insert, size, swap
}

void explainDeque() {
    deque<int> dq;

    dq.push_back(3);
    dq.emplace_back(5);

    dq.push_front(6);
    dq.emplace_front(2);

    dq.pop_back();
    dq.pop_front();

    // dq.back();
    // dq.front();
    // rest function are same as vector
    // begin, rbegin, end, rend, clear, insert, size, swap
}

void explainStack() {
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.emplace(6);

    cout << st.top(); // print top element

    st.pop(); // remove top element

    cout << st.top();

    cout << st.size();

    cout << st.empty();

    stack<int> st1, st2;
    st1.swap(st2);
}

void explainQueue() {
    queue<int> q;
    q.push(3);
    q.push(4);
    q.push(5);
    q.emplace(6);

    q.back() += 3;

    cout << q.back(); // prints 9

    cout << q.front(); // prints 3

    q.pop(); // remove first element

    cout << q.front(); // prints 4

    // size, swap, empty are same as stack
}

void explainPriorityQueue() {
    priority_queue<int> pq;

    // Max heap (store max value on top and min value at last)

    pq.push(5);   // log(n)
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top();  // O(n)

    pq.pop();   // log(n)

    cout << pq.top();

    priority_queue<int, vector<int>, greater<int>> pq2;

    // Min heap (stores min value at top and max value at last)

    pq2.push(5);
    pq2.push(2);
    pq2.push(8);
    pq2.emplace(10);

    cout << pq2.top();

}

void explainSets() {
    set<int> st;  // stores in sorted and unique manner
    st.insert(1);
    st.insert(2);
    st.emplace(2);
    st.emplace(4);
    st.emplace(3);

    // begin, rbegin, end, rend, empty, size, swap are same as those of above

    auto itr = st.find(3);

    auto itr1 = st.find(6); // if not available point to the st.end() {just after the end}

    st.erase(5); // takes logarithmic time

    int cnt = st.count(1);
    cout << cnt;

    auto itr2 = st.find(3);
    st.erase(itr); // it takes constant time

    //{1, 2, 3, 4, 5}
    auto itr3 = st.find(2);
    auto itr4 = st.find(4);
    st.erase(itr1, itr2); // after erase {1, 4, 5} [first, last)

    // lower_bound() and upper_bound() function work in the same way

    auto itr5 = st.lower_bound(2);
    auto itr6 = st.upper_bound(3);
}

void explainsMultiSets() {
    //  Everythis is same as set
    //  stores duplicate element also
    multiset<int> ms;
    ms.insert(1);
    ms.emplace(1);
    ms.insert(1);
    ms.insert(2);
    ms.emplace(2);
    ms.insert(2);

    ms.erase(1);    // all 1's erased

    int cnt = ms.count(1);
    cout << cnt;

    // only a single one is erase
    ms.erase(ms.find(2));

    // delete two 2 only
    auto it7 = ms.find(2);
    auto it8 = it7;
    advance(it8, 2);
    ms.erase(it7, it8);
    
    // rest all function same as set
}

void explainUnorderedSet() {
    unordered_set<int> st;
    // lower_bound and upper_bound function does not works
    // rest all functions are same as above
    // it does not stores in any
    // particular order it has a better complexity
    // than set in most cases, except some when collision happens

}

void explainMap() {

    // map stores unique key values in sorted order
    map<int, int> mpp;
    map<int, pair<int, int>> mpp1;
    map<pair<int, int>, int> mpp2;

    mpp[1] = 2 ; // stores 2 in 1st key
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp2[{2,3}] = 10;

    for(auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1]; // print value
    cout << mpp[5]; // if not exist give NULL or 0

    auto it = mpp2.find({2, 3});
    cout << (*it).second;

    auto it1 = mpp.find(5);

    auto it2 = mpp.lower_bound(2);
    auto it3 = mpp.upper_bound(3);

    // erase, swap, size, empty are same as above
}

void explainMultiMap() {
    // everything same as map, only it can store multiple keys
    // only mpp[key] cannot be used be used here
}

void explainUnorderedMap() {
    // same as set and unordered_set difference.
}

bool comp(pair<int, int> p1, pair<int, int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    //if they are same

    if(p1.first > p2.first) return true;
    return false;
}

void explainExtra() {

    int a[] = {3, 5, 1, 9, 2}, n = 5;
    vector<int> v;
    //function to sort vector and array
    sort(a, a + n);
    sort(v.begin(), v.end());

    sort(a+2, a+4); //sort from 3rd element to 4th

    pair<int, int> pr[] = {{1,2}, {2,1}, {4,1}};

    //sort according to second element
    //if second element is same, then sort
    //it according to first element but in descending
    //the bool comp function is use to user define logic of sorting
    
    sort(pr, pr+n, comp);
    // {{4,1}, {2,1}, {1,2}}


    int num = 7;
    int cnt = __builtin_popcount(7); //tells the sat bit (means number of 1s in its binary)

    long long num1 = 125345614223653;
    int cnt1 = __builtin_popcountll(125345614223653); // ll for long long


    string s ="123";
    sort(s.begin(), s.end());

    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end())); // it give permutation in dictionary manner there for it is necessary the given string is sorted


    int maxi = *max_element(a, a+n); // give the max element from the array
    int mini = *min_element(a, a+n); // give the min element from the array

}

void UpperAndLowerBound() {
    // check if X exists in the sorted array or not?

    int a[] = {1, 4, 5, 8, 9};
    int n = 5;

    bool res = binary_search(a, a+n, 3); // res return false

    bool res1 = binary_search(a, a+n, 4); // res return true

    // lower_bound() leftmost x or just bigger

    int arr[] = {1, 4, 5, 6, 9, 9};
    int n1 = 6;

    int ind = lower_bound(arr, arr+n1, 4) - arr; // points to 4 at index 1 (first element >= 4)
    int ind1 = lower_bound(arr, arr+n1, 7) - arr; // 7 is not in array, so it points to first element > 7, which is 9 at index 4
    int ind2 = lower_bound(arr, arr+n1, 10) - arr; // 10 is not in array, so it points to a+n (index 6, one past last element)

    // upper_bound() just bigger than x

    int arr1[] = {1, 4, 5, 6, 9, 9};

    int ind3 = upper_bound(arr1, arr1+n1, 4) - arr1; // points to 5 at index 2 (first element greater than 4)
    int ind4 = upper_bound(arr1, arr1+n1, 7) - arr1; // 7 is not in array, so it points to first element > 7, which is 9 at index 4
    int ind5 = upper_bound(arr1, arr1+n1, 10) - arr1; // 10 is not in array, so it points to a+n (index 6, one past last element)

}

int main() {
    explainPair();
    explainVectors();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPriorityQueue();
    explainSets();
    explainsMultiSets();
    explainUnorderedSet();
    explainMap();
    explainMultiMap();
    explainUnorderedMap();
    explainExtra();
    UpperAndLowerBound();

    return 0;
}