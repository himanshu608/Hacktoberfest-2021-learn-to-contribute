#include<iostream>
#include<time.h>
using namespace std;
#define max 50
class Stack{
	int arry[max];
	int top;
	public:
		Stack(){
			top=-1;
		}
		
		void push(int el){
			if(top==(max-1))
				cout<<"\nStack Overflow!!!";
			else
				arry[++top]=el;    
		}
		
		char pop(){
			if(top<0){
				cout<<"\nStack Underflow!!!";
				return 0;
			}
			else{
				return arry[top--];
			}
		}
		
		bool isEmpty(){
			if(top < 0)
			    return true;
			else
				return false;    
		}
};

int prio(char op){
	switch(op){
		case '+': return 0;
		case '-': return 0;
		case '*': return 1;
		case '/': return 1;
	}
}
		
int main(){
	string str;
	cout<<"\nEnter an Infix Expression : ";
	cin>>str;
	Stack s;
	bool f1=0,f2=0;
	int l=0;
	char output[max];
	int p,count=-1;
	char ch,ch1;
	
	for(int i=0;i<str.length();i++){
		count+=1;
		char ch=str[i];	
		if(ch!='(' && ch!=')' && ch!='+' && ch!='-' && ch!='*' && ch!='/'){
			output[l]=ch;
			l++;
		}
		
		else{
			if(s.isEmpty()){
				s.push(ch);
		    }
			else if(ch=='('){
					s.push(ch);
		    }        
			else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
				p=prio(ch);
				for(int j=(count-1);j>=0;j--){
					if(str[j]=='+' || str[j]=='-' || str[j]=='*' || str[j]=='/'){
						if(p>prio(str[j])){
							s.push(ch);
							break;
			            }
						else if(p<=prio(str[j])){
							output[l]=s.pop();
							l++;
					    }
				    }
				    else if(str[j]=='('){
				    	s.push(ch);
				    	break;
					}
					else continue;
				}
			}
			else{
				while(!(s.isEmpty())){
					ch1=s.pop();
					if(ch1!='('){
						output[l]=ch1;
						l++;
					}
			    }
			}	
		}
	}
	
	cout<<"\nPostfix Expression : ";
	for(int k=0;k<l;k++){
		cout<<output[k];
	}
	return 0;
}
