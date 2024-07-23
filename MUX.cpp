//Implenention of 2X1, 4X1, 8X1 & 16X1  
#include<iostream> 
using namespace std; 
void implementer(string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string); 
string M2X1(bool,string,string); 
string M4X1(bool,bool,string,string,string,string); 
string M8X1(bool,bool,bool,string,string,string,string,string,string,string,string); 
string M16X1(bool,bool,bool,bool,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string,string); 
int main() 
{ 
    //VARIABLES & INPUTS. 
    string input[16]={"I0","I1","I2","I3","I4","I5","I6","I7","I8","I9","I10","I11","I12","I13","I14","I15"}; 
    implementer(input[0],input[1],input[2],input[3],input[4],input[5],input[6],input[7],input[8],input[9],input[10],input[11],input[12],input[13],input[14],input[15]); 
    return 0; 
} 
void implementer(string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,string k,string l,string m,string n,string o,string p) 
{ 
    //2X1 MUX TRUTH TABLE 
    cout<<"\t2X1\n"<<"S0| O/P"<<endl; 
    for(bool x : {false,true}) 
        cout<<x<<" | "<<M2X1(x,a, b)<<endl; 
    //4X1 MUX TRUTH TABLE 
    cout<<"\t4X1\n"<<"S1|S0 | O/P"<<endl; 
    for(bool x : {false,true}) 
        { 
            for(bool y : {false,true}) 
                cout<<x<<" | "<<y<<" | "<<M4X1(y,x,a,b,c,d)<<endl; 
        } 
    //8X1 MUX TRUTH TABLE 
    cout<<"\t8X1\n"<<"S2|S1 |S0 | O/P"<<endl; 
    for(bool x : {false,true}) 
        { 
            for(bool y : {false,true}) 
            { 
                for(bool z : {false,true}) 
                    cout<<x<<" | "<<y<<" | "<<z<<" | "<<M8X1(z,y,x,a,b,c,d,e,f,g,h)<<endl; 
            } 
        } 
    //16X1 MUX TRUTH TABLE 
    cout<<"\t16X1\n"<<"S3|S2 |S1 |S0 | O/P"<<endl; 
    for(bool x : {false,true}) 
        { 
            for(bool y : {false,true}) 
            { 
                for(bool z : {false,true}) 
                { 
                    for(bool w : {false,true}) 
                        cout<<x<<" | "<<y<<" | "<<z<<" | "<<w<<" | "<<M16X1(w,z,y,x,a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p)<<endl; 
                } 
            } 
        } 
} 
string M2X1(bool x,string a,string b)  
{  
    if(x)  
            return b;  
    else      
            return a;              
} 
string M4X1(bool x,bool y,string a,string b,string c,string d)  
{  
    return M2X1(y,M2X1(x,a,b),M2X1(x,c,d));  
}  
string M8X1(bool x,bool y,bool z,string a,string b,string c,string d,string e,string f,string g,string h)  
{  
    return M2X1(z,M4X1(x,y,a,b,c,d),M4X1(x,y,e,f,g,h));  
} 
string M16X1(bool x,bool y,bool z,bool w,string a,string b,string c,string d,string e,string f,string g,string h,string i,string j,string k,string l,string m,string n,string o,string p)  
{  
    return M2X1(w,M8X1(x,y,z,a,b,c,d,e,f,g,h),M8X1(x,y,z,i,j,k,l,m,n,o,p));  
}
