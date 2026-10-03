    #include <iostream>
    using namespace std;

    int main(){
    
    int a, b, c;
    cout << "escribe un numero (a)" << endl;
    cin >> a ;
    cout << "escribe un numero (b)" << endl;
    cin >> b;

    while (b!=0)
    {
        c=a;
        a=b;
        b=c%b;
    
    }
    
    cout << a;

}