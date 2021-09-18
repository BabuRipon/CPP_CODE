#include<iostream>
using namespace std;

// class Queue{
//     int* data;
//     int fi;
//     int ni;
//     int size;
//     int capacity;

//     public:
      
//       Queue(int c){
//           data=new int[c];
//           fi=-1;
//           ni=0;
//           capacity=c;
//           size=0;
//       }


//       int getSize(){
//           return size;
//       }

//       bool isEmpty(){
//           return this->size==0;
//       }

//       int front(){
//           if(isEmpty()){
//               cout<<"Queue is empty exp front"<<endl;
//               return 0;
//           }
//           return data[fi];
//       }

//       void enqueue(int d){
//           if(size==capacity){
//               cout<<"Queue is full"<<endl;
//               return;
//           }
          
//         data[ni]=d;
//         ni=(ni+1)%capacity;
//         size++;
//         if(fi==-1){
//             fi++;
//         }

        
//       }

//     int dequeue(){
//         if(size==0){
//             fi=-1;
//             ni=0;
//             cout<<"Queue is empty exp dequeue"<<endl;
//             return 0;
//         }
//        int result=data[fi];
//        fi=(fi+1)%capacity;
//        size--;
//        return result;
//     }
// };

template<typename T>

class Queue{
    T* data;
    int fi;
    int ni;
    int size;
    int capacity;

    public:
      
      Queue(int c){
          data=new T[c];
          fi=-1;
          ni=0;
          capacity=c;
          size=0;
      }


      int getSize(){
          return size;
      }

      bool isEmpty(){
          return this->size==0;
      }

      T front(){
          if(isEmpty()){
              cout<<"Queue is empty exp front"<<endl;
              return 0;
          }
          return data[fi];
      }

      void enqueue(T d){
          if(size==capacity){
              T* newarr=new T[2*capacity];
              int j=0;
              for(int i=fi;i<capacity;i++,j++){
                  newarr[j]=data[i];
              }
              for(int i=0;i<fi;i++,j++){
                  newarr[j]=data[i];
              }
              delete []data;
              data=newarr;
              fi=0;
              ni=capacity;
              capacity*=2;
            //   cout<<"Queue is full"<<endl;
            //   return;
          }
          
        data[ni]=d;
        ni=(ni+1)%capacity;
        size++;
        if(fi==-1){
            fi++;
        }

        
      }

    T dequeue(){
        if(size==0){
            fi=-1;
            ni=0;
            cout<<"Queue is empty exp dequeue"<<endl;
            return 0;
        }
       T result=data[fi];
       fi=(fi+1)%capacity;
       size--;
       return result;
    }
};

int main(){
    Queue<char> q(5);
    q.enqueue('a');
    q.enqueue('b');
    q.enqueue('c');
    q.enqueue('d');
    q.enqueue('c');
    q.enqueue('d');

    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;
    cout<<q.dequeue()<<endl;


    cout<<q.front()<<endl;
    cout<<q.getSize()<<endl;
    cout<<q.isEmpty()<<endl;

}