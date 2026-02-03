// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

void squarePattern(int n) {
  
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
          cout << "* ";
        }
        cout << endl;
    }
}
void trianglePattern(int n) {

    for(int i = 0; i < n; i++) {
        for(int j = 0; j <= i; j++) {
          cout << "* "; 
        }
        cout << endl;
    }
}
void numTrianglePattern1(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
          cout << j << " ";
        }
        cout << endl;
    }
}
void numTrianglePattern2(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= i; j++){
          cout << i << " ";
        }
        cout << endl;
    }
}
void revTrianglePattern(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n-i) + 1; j++) {
          cout << "* ";
        }
        cout << endl;
    }
}
void revNumTrianglePattern(int n) {

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (n-i) + 1; j++) {
           cout << j << " ";
        }
        cout << endl;
    }
}
void pyramidPattern(int n) {

    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++) {
           cout << " ";
        }
        // star
        for(int j = 0; j < 2*i+1; j++) {
            cout << "*";
        }
        // space
        // for(int j = 0; j < n-i-1; j++) {
        //     cout << " ";
        // }
        cout << endl;
    }
}
void revpyramidPattern(int n) {

    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < i; j++) {
           cout << " ";
        }
        // star
        for(int j = 0; j < 2*n-2*i-1; j++) {
            cout << "*";
        }
        // space
        // for(int j = 0; j < i; j++) {
        //     cout << " ";
        // }
        cout << endl;
    }
}
void diamondPattern(int n) {
    // upperDiamondPart
    for(int i = 0; i < n; i++) {
        // space
            for(int j = 0; j < n-i-1; j++) {
                cout << " ";
            }
        // star
            for(int j = 0; j < 2*i+1; j++) {
                cout << "*";
            }
        // space
        //  for(int j = 0; j < n-i-1; j++) {
        //      cout << " ";
        //  }
        cout << endl;
    }
    // lowerDiamondPart
    for(int i = 0; i < n; i++) {
        // space
            for(int j = 0; j < i; j++){
                cout << " ";
            }
        // star
            for(int j = 0; j < 2*n-2*i-1; j++) {
                cout << "*";
            }
        // space
            // for(int j = 0; j < 2*n-2*i-1; j++) {
            //     cout << " ";
            // }
        cout << endl;
    }
}
void halfDiamond(int n) {
    for(int i = 1; i <= 2*n-1; i++) {
        int stars = i;
            if(i > n) stars = 2*n - i;
            for(int j = 1; j <= stars; j++) {
                cout << "*";
            }
        cout << endl;
    }
}
void triangle_01(int n) {
    int start = 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) start = 1;
        else start = 0;
        for(int j = 0; j <= i; j++) {
            cout << start;
            start = 1 - start;
        }
       cout << endl; 
    }
}
void numTriAndFlipTri(int n) {
    for(int i = 1; i <= n; i++) {
        // numTriangle
        for(int j = 1; j <= i; j++) {
            cout << j;
        }
        // gap
        for(int j = 1; j <= 2*n - 2*i; j++) {
            cout << " ";
        }
        // rev_num_tri
        for(int j = i; j >= 1; j--) {
            cout << j;
        }
        cout << endl;
    }
}
void ABC_Triangle(int n) { 
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void ABC_RevTriangle(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'A'; ch <= 'A' + (n-i - 1); ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void AABB_Triangle(int n) {
    for(int i = 0; i < n; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}
void ABA_pyramidPattern(int n) {

    for(int i = 0; i < n; i++) {
        // space
        for(int j = 0; j < n-i-1; j++) {
           cout << " ";
        }
        // Character
        char ch = 'A';
        int breakpoint = (2*i + 1) / 2;
        for(int j = 1; j <= 2*i + 1; j++) {
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        // space
        // for(int j = 0; j < n-i-1; j++) {
        //     cout << " ";
        // }
        cout << endl;
    }
}
void CDE_Triangle(int n) {
    for(int i = 0; i < n; i++) {
        for(char ch = 'E' - i; ch <= 'E'; ch++) {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void SpaceDiamondPattern(int n) {
    // upper_part
    int iniS = 0;
    for(int i = 0; i < n; i++) {
        // Star
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        // Space
        for(int j = 0; j < iniS; j++) {
            cout << " ";
        }
        // Star
        for(int j = 0; j < n-i; j++) {
            cout << "*";
        }
        iniS += 2;
        cout << endl;
    }
    // lower_part
    iniS = 2*n - 2;
    for(int i = 0; i < n; i++) {
        // Star
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        // Space
        for(int j = 0; j < iniS; j++) {
            cout << " ";
        }
        // Star
        for(int j = 0; j <= i; j++) {
            cout << "*";
        }
        iniS -= 2;
        cout << endl;
    }
}
void XPattern(int n) {
    int space = 2*n - 2;
    for(int i = 1; i <= 2*n - 1; i++) {
        int stars = i;
        if(i > n) stars = 2*n - i;
        // star
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }
        // space
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }
        // star
        for(int j = 1; j <= stars; j++) {
            cout << "*";
        }

    cout << endl;    
    if(i < n) space -= 2;
    else space += 2;
    }
}
void hollowSquare(int n) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0 || j == 0 || i == n-1 || j == n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}
void numSquare(int n) {
    for(int i = 0; i < 2*n-1; i++) {
        for(int j = 0; j < 2*n-1; j++) {
            int top = i;
            int left = j;
            int right = (2*n - 2) - j;
            int bottom = (2*n - 2) - i;
            cout << (n - min(min(top, bottom), min(left, right)));
        }
        cout << endl;
    }
}

int main() {

    int n;
    cout << "Enter value of N: ";
    cin >> n;
    cout << endl;
    
    squarePattern(n);
    trianglePattern(n);
    numTrianglePattern1(n);
    numTrianglePattern2(n);
    revTrianglePattern(n);
    revNumTrianglePattern(n);
    pyramidPattern(n);
    revpyramidPattern(n);
    diamondPattern(n);
    halfDiamond(n);
    triangle_01(n);
    numTriAndFlipTri(n);
    ABC_Triangle(n);
    ABC_RevTriangle(n);
    AABB_Triangle(n);
    ABA_pyramidPattern(n);
    CDE_Triangle(n);
    SpaceDiamondPattern(n);
    XPattern(n);
    hollowSquare(n);
    numSquare(n);

  return 0;
}