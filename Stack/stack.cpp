#include <iostream>

using namespace std;

void push(int arr[] , int size) {
    
    int top = -1;
    int item;
    cout<<"Enter the element: "<<endl;
    cin>>item;
    if(top == size-1){
        cout<<"Stack Overflow!!"<<endl;
    }
    else{
        ++top;
        arr[top] = item;
        cout<<""<<item <<" has been added to stack"<<endl;
    }
}
void pop(int arr[], int size, int top) {
    if(top == -1){
        cout<<"Stack Underflow!!"<<endl;
    }
    else{
        cout<<"Deleting element = "<<arr[top]<<endl;
        top--;
    }
    display(&arr[5] , size );
}
void display(int arr[] , int size) {
    for(int i=0; i<size; i++){
         cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int isEmpty() {}
int isFull() {}

int main(){
    int arr[5];
    int ch;
    int top;

    while (true){

        cout << "Select an option bellow:-" << endl;
        cout << "1. Push an Element in the stack" << endl;
        cout << "2. Delete an element from the stack" << endl;
        cout << "3. Display the elements of the stack" << endl;
        cout << "4. Exit" << endl;

        cout << "\nEnter Your choice: ";
        cin >> ch;

        switch (ch)
        {
        case 1:
            push(&arr[5] , 5);
            break;
        case 2:
            break;
        case 3:
            display(&arr[5], 5);
            break;
        case 4:
            cout<<"Exiting....";
            exit(0);
            return 0;
        default:
            cout << "Invalid option!!!";
            return 0;
        }
    }
    return 0;
}