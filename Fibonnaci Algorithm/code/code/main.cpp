#include <iostream>

using  namespace std;

int main()
{
    int a,b,c;
    int FibonnaciAdds;
    
    cout << "How many adds do you want ? : ";
    cin >> FibonnaciAdds;
    
    
    a = 1;
    b = 1;

    for (int i = 0; i < FibonnaciAdds; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << "Fibonnaci Numbers : " << c << endl;
    
    /* PSEUDOCOD :
    
     
     
     */
    
    
}
