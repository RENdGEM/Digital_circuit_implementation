//logic gate impletation
#include <iostream> 
using namespace std; 
 
bool naNd(bool, bool); 
bool aNd(bool, bool); 
bool nOt(bool); 
bool Or(bool, bool); 
bool nOr(bool, bool); 
bool xOr(bool, bool); 
bool xnOr(bool, bool); 
 
int main() 
{ 
    cout << "\tNOT GATE\ni|O\n"; 
    for (bool i : {true, false}) 
        cout << i << "|" << nOt(i) << '\n'; 
 
    cout << "\tNAND GATE\na|b|O\n"; 
    for (bool i : {true, false}) 
        for (bool j : {true, false}) 
            cout << i << "|" << j << "|" << naNd(i, j) << '\n'; 
 
    cout << "\tAND GATE\na|b|O\n"; 
    for (bool i : {true, false}) 
        for (bool j : {true, false}) 
            cout << i << "|" << j << "|" << aNd(i, j) << '\n'; 
 
    cout << "\tNOR GATE\na|b|O\n"; 
    for (bool i : {true, false}) 
        for (bool j : {true, false}) 
            cout << i << "|" << j << "|" << nOr(i, j) << '\n'; 
 
    cout << "\tOR GATE\na|b|O\n"; 
    for (bool i : {true, false}) 
        for (bool j : {true, false}) 
            cout << i << "|" << j << "|" << Or(i, j) << '\n'; 
 
    cout << "\tXOR GATE\na|b|O\n"; 
    for (bool i : {true, false}) 
        for (bool j : {true, false}) 
            cout << i << "|" << j << "|" << xOr(i, j) << '\n'; 
 
    cout << "\tXNOR GATE\na|b|O\n"; 
    for (bool i : {true, false}) 
        for (bool j : {true, false}) 
            cout << i << "|" << j << "|" << xnOr(i, j) << '\n'; 
 
    return 0; 
} 
 
// NAND GATE 
inline bool naNd(bool x, bool y) 
{ 
    return !(x && y); 
} 
 
// NOT GATE 
inline bool nOt(bool x) 
{ 
    return !x; 
} 
 
// AND GATE 
inline bool aNd(bool x, bool y) 
{ 
    return x && y; 
} 
 
// NOR GATE 
inline bool nOr(bool x, bool y) 
{ 
    return !(x || y); 
} 
 
// OR GATE 
inline bool Or(bool x, bool y) 
{ 
    return x || y; 
} 
 
// XOR GATE 
inline bool xOr(bool x, bool y) 
{ 
    return x ^ y; 
} 
 
// XNOR GATE 
inline bool xnOr(bool x, bool y) 
{ 
    return !(x ^ y); 
}


