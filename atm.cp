#include<iostream>
using namespace std;



int main() {
	system("cls");
	
	int choice;
	double balance = 1000;
	
	cout<<"                                      ******** ATM Application ********  "<<endl;
	cout<<"                                              *****************          "<<endl;
	
	
	Home:
		
	cout<<"1. Check Blance"<<endl;
	cout<<"2. Deposit Money "<<endl;
	cout<<"3. Withdraw Money"<<endl;
	
	cout<<"Enter Your Options:"<<endl;
	cin>>choice;
	

	switch(choice){
		
		case 1:
			system("cls");
			
			cout<<"Your Balance is:"<<balance<<"$"<<endl;
			
			goto Home;
			break;
			
			
			case 2:
				system("cls");
				double deposite;
				cout<<"Enter Your Deposite Amount:"<<endl;
				cin>>deposite;
				
				balance += deposite;
				goto Home;
				
				break;
				
				case 3:
					system("cls");
					double withdraw;
					
					cout<<"Enter Your Withdraw Amount:"<<endl;
					cin>>withdraw;
					
					if(withdraw <= balance){
						
						balance -= withdraw;
						goto Home;
						
						
					}
					else{
						cout<<"Not Enough Money"<<endl;
					
					goto Home;
					
					break;
				}
						
						default:
							cout<<"-------------------------------"<<endl;
							cout<<"Invail Option Please Try Again"<<endl;
							
						
	}
	
	
	
	
}