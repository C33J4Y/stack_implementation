#include <iostream>
#include <stack>


using namespace std;

void push_element(stack<int> &s,  int x){

    s.push(x);
   
}

void delete_element(stack<int> &s){
  if(!s.empty()){
    s.pop();
  }

}

void print_stack(stack<int> &s){
  if(s.empty()){
    cout << "\nStack is empty!\n";
  }
 
  while(!s.empty()){
    cout << s.top() << endl;
    s.pop();
  }

}

char menu(){
  char choice;

  cout << "\n";
  cout << "Menu\n";
  cout << "1. Push into Stack.\n";
  cout << "2. Delete form top of Stack.\n";
  cout << "3. Print stack elements.\n";
  cout << "4. Exit.\n\n";

  cout << "Choice: ";
  cin >> choice;
  cout << "\n";

  return choice;
  
}

int main() {
stack<int> main;


 char choice;
  int number;

  do{
    choice = menu();
    switch(choice){
      case '1': cout << "Please enter a number: \n";
                cin >> number;
                push_element(main,number);
                break; 
      case '2': delete_element(main);
                break;
      case '3': print_stack(main);
                break;
      case '4': cout << "GoodBye!\n";
                
    }

  }while(choice != '4');



return 0;

}