// Half Adder & Full Adder 
#include <iostream> 
using namespace std; 
bool HalfAdderSum(bool, bool); 
bool HalfAdderCarry(bool, bool); 
bool FullAdderSum(bool, bool, bool); 
bool FullAdderCarry(bool, bool, bool); 
int main() 
{ 
    // half adder 
    cout << "A | B | Sum | Carry\n"; 
    for (bool i : {false, true}) 
    { 
        for (bool j : {false, true}) 
            printf("%d | %d |  %d  |   %d\n", i, j, HalfAdderSum(j, i), HalfAdderCarry(j, i)); 
    } 
    // full adder 
    cout << "A | B | C | Sum | Carry\n"; 
    for (bool i : {false, true}) 
    { 
        for (bool j : {false, true}) 
        { 
            for (bool k : {false, true}) 
                printf("%d | %d | %d |  %d  |  %d\n", k, i, j, FullAdderSum(k, j, i), FullAdderCarry(k, j, i)); 
        } 
    } 
    return 0; 
} 
bool HalfAdderSum(bool x, bool y) 
{ 
    return x ^ y; 
} 
bool HalfAdderCarry(bool x, bool y) 
{ 
    return x && y; 
} 
bool FullAdderSum(bool x, bool y, bool z) 
{ 
    return x ^ y ^ z; 
} 
bool FullAdderCarry(bool x, bool y, bool z) 
{ 
    return (z && (x ^ y)) || (x && y); 
}
