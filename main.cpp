#include <iostream>
#include <sstream>

using namespace std;

int main()
{
  int max1 = 0;
  int max2 = 0;
  int mas1 [10];
  int mas2 [10];
    
    for (string string; getline(cin, string); )
    {
        istringstream stream(string);
        bool failure = false;
        for (int i = 0; i < 10; i++)
        {
            if ( ! (stream >> mas1 [i]))
            {
                failure = true;
                break;
            }
        }
        
        max1 = mas1 [0];
        
        if ( failure==false )
        {
            for (int i = 0; i < 10; i++)
            {
                if (mas1 [i] > max1)
                {
                    max1 = mas1 [i];
                }
            }
            
            break;
        }
        else {
            cout << "An error has occured while reading numbers from line" << '\n';
        }
    }
    
    for (string string; getline(cin, string); )
    {
        istringstream stream(string);
        bool failure = false;
        for (int i = 0; i < 10; i++)
        {
            if ( ! (stream >> mas2 [i])) {
                failure = true;
                break;
            }
        }
        
        max2 = mas2 [0];
        
        if (failure==false)
        {
            for (int i = 0; i < 10; i++)
            {
                if (mas2 [i] > max2)
                {
                    max2 = mas2 [i];
                }
            }
            
            break;
        }
        else {
            cout << "An error has occured while reading numbers from line" << '\n';
        }
    }
    
    cout << max1 + max2 << '\n';
    
    return 0;
}
