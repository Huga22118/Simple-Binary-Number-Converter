#include <bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cout << "Silahkan input nilai bilangan bulat positif yang akan " <<
    "dikonversi ke bilangan biner: ";
    cin >> N;
    while (N < 0 || N > INT_MAX){
        cout << "Nilai N tidak bisa di bawah 0 (negatif) atau batas maksimal nilai integer" << endl;
       cout << "Silahkan input ulang: "; 
    cin >> N;
    }
    int vectorSize = floor(log2(N)) + 1;
    vector<int> jawa;
    if (N == 0){
        jawa.push_back(0);
        cout << jawa[0] << endl;
    }
    else{
        for (int i = 0; i<vectorSize; i++){
            if (N==1){
                jawa.push_back(1);
            }
            else{
                if (N%2==0){
                N/=2;
            jawa.push_back(0);
            }
            else{
                N/=2;
                jawa.push_back(1);
            }
            }
            
        }
        for (int i = vectorSize-1; i>=0; i--){
            cout << jawa[i];
        }
        cout << endl;
    }
    

    return 0;
}
