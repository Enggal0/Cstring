//#include <iostream>
//#include <cstdlib>
//#include <cstring>
//using namespace std;

//int main(){
//    char data[3][100]={"2217051032Enggal Bima",
//                       "2217287162Eri Sur",
//                       "2213762883Baskoro Res"};
//    for(int i=0; i<3; i++){
//        char* endPtr;
//        long value = strtol(data[i], &endPtr, 10);
//        cout << "Nama : " << endPtr << endl;
//        cout << "NPM : " << value << endl;
//        cout << endl;
//    }
//    return 0;
//}
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    char nama[15]="Kartika";
    char prodi[]="Ilkom";
    cout<<nama<<endl;
    cout<<sizeof(nama)<<endl;
    cout<<prodi<<endl;
    cout<<sizeof(prodi)<<endl;
    
    for (int i=0;i<sizeof(prodi);i++)
        cout<<prodi[i]<<" "<<(prodi[i]=='\0'?"Null":"Not Null")<<endl;
    
    int A[]={1,5,2,3};
    char str[]={'U','N','I','L','A','\0'};
   
    int *ptr;
    ptr=A;
}
