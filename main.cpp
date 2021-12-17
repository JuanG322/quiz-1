#include <iostream>

using namespace std;

bool primo(int n){
    bool condicion;
    if(n!= 1 && n != 0){

        for(int i = 2;i<=n;i++){
            if(n % i == 0){
                if(n == i){
                    condicion = true;
                }
                else{
                    condicion = false;
                    return condicion;
                }

            }

        }
    }
    else{
        condicion = false;

    }

    return condicion;
}

void conjetura(int x){
    if(x>1){
        if(x % 2 == 0){
            conjetura(x/2);

        else{
                conjetura(x+x+x+1);
            }
        }

    }

}

int main(){
    int n,var,var1=0,x=0;
    n = 2147483640;

    cout<<"Ingrese el numero N: "<<endl;cin>>var;

    for(int i = 1;i<=n;i++){

        if(primo(i)){
            var1 = var1+1;
            if(var1 == var){
                cout<<"El primo numero "<<var<<" es "<<i<<endl;
                x = i;
                conjetura(x);
                //return 0;
                //numeor collazt

            }
        }
    }
}

