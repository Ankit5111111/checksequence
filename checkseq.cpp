#include <iostream>
using namespace std;

int main() {
    int n;

    cin>>n;
    int pn;
    cin>>pn;
    
    int cn;
    int count =2;

    bool dec=true;
    while (count <=n) {
      cin>>cn;

      if (cn==pn) {
        cout << "false"<<endl;
        return 0;
      }
      else if (cn<pn) {
        if (dec==false ) {
          cout << "false";
          return 0;
        }
      }
        
        else if (cn>pn) {
          dec=false;
          
        }
        count++;
        pn = cn;
      }
      
    cout << "true";
}
