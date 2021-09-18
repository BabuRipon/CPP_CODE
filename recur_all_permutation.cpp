#include <iostream>
#include <string>
using namespace std;

//method-1
// int returnPermutations(string input, string output[]){
//   if(input.empty()){
//       output[0]="";
//       return 1;
//   }
//   int k=0;
//    	for(int i=1;i<=input.length();i++){
//            string o1[10000];
//            int ans=returnPermutations(input.substr(0,i-1)+input.substr(i),o1);
//            for(int j=0;j<ans;j++){
//                output[k]=o1[j]+input[i-1];
//                k++;
//            }
//        }

//        return k;
// }

// method-2
int returnPermutations(string input, string output[]){
   if(input.length()==1){
       output[0]=input.substr(0,1);
       return 1;
   }
   string o1[10000];
   int k=0;
   int ans=returnPermutations(input.substr(1),o1);

   for(int i=0;i<ans;i++){
      for(int j=0;j<=o1[i].length();j++){
         string s=o1[i];
         output[k]=s.insert(j,input.substr(0,1));
         k++;
      }
   }

   return k;
}

int main(){
    string input;
    cin >> input;
    string output[10000];
    int count = returnPermutations(input, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}