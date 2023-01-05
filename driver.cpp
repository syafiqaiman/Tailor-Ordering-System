#include <iostream>	
#include <cmath>
#include <string>
#include <fstream>

//This is DSA assignment project code for Adam and Syafiq

using namespace std;

void menu();
void addservice();
void deleteitem();
void viewall();
void vieworder();
void exit();
void men();
void women();

class Men
{
	private:     
		int itemprice;	
		
	public:
		int necksize, chestsize, waistline, waistankle, material, suitpieces;
		
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Westernsuit : public Men
{
	private:
		int itemprice;
		
	public:
		void measurements()
		{
			cout << "Is this suit 2 piece or 3 piece?\n"; cin >> suitpieces;
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
			cout << "\nWhat type of material would you like: (1)Wool/ (2)Semi wool\n"; cin >> material;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Batik : public Men
{
	private:
		int itemprice;
		
	public:
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}	
};

class Bajumelayu : public Men
{
	private:
		int itemprice;
		
	public:
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Changshan : public Men
{
	private:
		int itemprice;
		
	public:
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Formalshirt : public Men
{
	private:
		int itemprice;
		
	public:
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Women
{
	private:     
		int itemprice;	
		
	public:
		int necksize, chestsize, waistline, waistankle, material, suitpieces;
		
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Bajukurung : public Women
{
	private:     
		int itemprice;	
		
	public:	
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Cheongsam : public Women
{
	private:     
		int itemprice;	
		
	public:	
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};

class Formaltop : public Women
{
	private:     
		int itemprice;	
		
	public:	
		void measurements()
		{
			cout << "Neck size:"; cin >> necksize;
			cout <<"\nChest size:"; cin >> chestsize;
			cout << "\nWaist line:"; cin >> waistline;
			cout << "\nWaist to ankle length:"; cin >> waistankle;
		}
		
		void Setitemprice(int x)   //Setter for item price
		{
			itemprice = x;
		}
		
		int Getitemprice()       //Getter for item price
		{
			return itemprice;
		}
};


int main()
{
	int choice;
	
	cout << "\tWelcome to New Modern Tailors.\n\n";
	cout << "Please select the options from the menu below.\n\n";

	
do
{
	cout << "1. Menu\n2. Add details of service\n3. Delete item service\n4. View all category of service\n5. View order\n6. Exit\n\n";
	cout << "\nYour choice: ";
	cin >> choice;
	
	switch(choice)
	{
		case 1: menu(); break;
		case 2: addservice(); break;
		case 3: deleteitem(); break;
		case 4: viewall(); break;
		case 5: vieworder(); break;
		case 6: exit(); break;
	}
}
while(choice != 0);
	
}

void menu()
{
	system("cls");
	
	main();
}
void addservice()
{
	system("cls");
	
	int choice;
	
	cout << "Please choose a section: (1)Men/ (2)Women\n\n" << "Your choice:";
	cin >> choice;
	
	switch(choice)
	{
		case 1: men(); system("cls"); break;
		case 2:	women(); system("cls"); break;
	}

}
void deleteitem()
{
	system("cls");
	
	
}
void viewall()
{
	system("cls");
	
	cout << "We provide tailoring services to our customers.\n\nFor men, we provide Western suit, Baju Melayu, Changshan, Batik, and Formal shirt.\n\n";
	cout << "For women, we provide Baju kurung, Cheongsam, and Formal top.\n\n";
	cout << "Please go to main menu to input your order.\n\nThank you!\n\n";
	system("pause");
	
	system("cls");
	

} 
void vieworder()
{
	system("cls");
}
void exit()
{
	system("cls");
}


void men()
{
	system("cls");
	
	int itemchoice;
	Men men; 
	Westernsuit westernsuit; westernsuit.Setitemprice(200);
	Batik batik; batik.Setitemprice(50);
	Bajumelayu bajumelayu; bajumelayu.Setitemprice(150);
	Changshan changshan; changshan.Setitemprice(150);
	Formalshirt formalshirt; formalshirt.Setitemprice(100);
	
	cout << "Please select the items that you want to order:\n";
	cout << "1. Western suit\n2. Batik\n3. Baju melayu\n4. Changshan\n5. Formal shirt\n\n" << "Your choice:";
	cin >> itemchoice;
			
	if(itemchoice == 1)
	{
		westernsuit.measurements();
		cout << "\nThe price of your item is RM" << westernsuit.Getitemprice() << "\n\n";
		system("pause");
	}
	else if(itemchoice == 2)
	{
		batik.measurements();
		cout << "\nThe price of your item is RM" << batik.Getitemprice() << "\n\n";
		system("pause");
	}
	else if(itemchoice == 3)
	{
		bajumelayu.measurements();
		cout << "\nThe price of your item is RM" << bajumelayu.Getitemprice() << "\n\n";
		system("pause");
	}
	else if(itemchoice == 4)
	{
		changshan.measurements();
		cout <<  "\nThe price of your item is RM" << changshan.Getitemprice() << "\n\n";
		system("pause");
	}
	else if(itemchoice == 5)
	{
		formalshirt.measurements();
		cout <<  "\nThe price of your item is RM" << formalshirt.Getitemprice() << "\n\n";
		system("pause");
	}
	else
	{
		cout << "\n\nInvalid choice.";
		system("pause");
	}
}

void women()
{
	system("cls");
	
	int itemchoice;
	
	Women women;
	Bajukurung bajukurung; bajukurung.Setitemprice(150);
	Cheongsam cheongsam; cheongsam.Setitemprice(150);
	Formaltop formaltop; formaltop.Setitemprice(100);
	
	
	cout << "Please select the items that you want to order:\n";
	cout << "1. Baju kurung\n2. Cheongsam\n3. Formal top\n\n" << "Your choice:";
	cin >> itemchoice;
	
	if(itemchoice == 1)
	{
		bajukurung.measurements();
		cout <<  "\nThe price of your item is RM" << bajukurung.Getitemprice() << "\n\n";
		system("pause");
	}
	else if(itemchoice == 2)
	{
		cheongsam.measurements();
		cout <<  "\nThe price of your item is RM" << cheongsam.Getitemprice() << "\n\n";
		system("pause");
	}
	else if(itemchoice == 3)
	{
		formaltop.measurements();
		cout <<  "\nThe price of your item is RM" << formaltop.Getitemprice() << "\n\n";
		system("pause");
	}
	else
	{
		cout << "\n\nInvalid choice.";
		system("pause");
	}
}
