#include<iostream>
class Account{
private:
	std::string name;
	std::string card_number;
	int deposit;
public:
	void CreateAccount();
	void DisplayInfo();
	void Save();
	void Draw();
};
void Account::CreateAccount()
{
	std::cout<<"You're creating an account."<<std::endl<<"Please input user's name:";
	getline(std::cin,name);
	std::cout<<"Please input card number:";
	std::cin>>card_number;
	std::cout<<"Please input the deposit:";
	std::cin>>deposit;
}
void Account::DisplayInfo()
{
	std::cout<<"User's name:"<<name<<std::endl<<"Card number:"<<card_number<<std::endl<<"Deposit:"<<deposit<<std::endl;
}
void Account::Save()
{
	int save;
	std::cout<<"Please input how much money you want to save:";
	std::cin>>save;
	deposit+=save;
	std::cout<<std::endl<<"Save successfully!"<<std::endl;
	return;
}
void Account::Draw()
{
	int draw;
	std::cout<<"Please input how much money you want to draw:";
	std::cin>>draw;
	if(draw>deposit)
	{
		std::cout<<"You don't have enough money!"<<std::endl;
		return;
	}
	else
	{
		deposit-=draw;
		return;
	}
}
void ChooseOne()
{
	std::cout<<std::endl<<"-------------------"<<std::endl<<"1.save"<<std::endl<<"2.draw"<<std::endl<<"3.information"<<std::endl<<"4.exit"<<std::endl<<"-------------------"<<std::endl;
}
int main()
{
	Account user;
	user.CreateAccount();
	std::cout<<"Create account successfully!"<<std::endl;
	ChooseOne();
	while(1)
	{
		std::cin.sync();
		char choose=std::cin.get();
		if(choose=='1')
		{
			user.Save();
			ChooseOne();
		}
		else if(choose=='2')
		{
			user.Draw();
			ChooseOne();		
		}
		else if(choose=='3')
		{
			user.DisplayInfo();
			ChooseOne();			
		}

		else if(choose=='4')
		return 0;
	}
	return 0;
 } 
