#include <iostream>
#include <vector>

using namespace std;

float shop()
{
    vector<string> myBag;
    int choice;
    int product;
    int quantity;
    float bill = 0;

    while (true)
    {
        cout << "What would you like to buy?" << endl;
        cout << "1. Electronics" << endl;
        cout << "2. Clothes" << endl;
        cout << "3. Food" << endl;
        cout << "4. Exit" << endl;
        cout << "5. Show my bag" << endl;
        cin >> choice;

        if(choice == 1 || choice == 2 || choice == 3 )
        {
            if(choice == 1)
            {
                cout<<"Electronics Details"<<endl;
                cout<<"1. Mobile : 100"<<endl;
                cout<<"2. Laptop: 200"<<endl;
                cout<<"3. TV : 300"<<endl;
                cout<<"4. Back to main menu"<<endl; 
                cout<<"Enter your choice"<<endl;
                cin>>product;

                if(product==1)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (100 * quantity);
                    myBag.push_back("Mobile");
                }
                else if(product==2)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (200 * quantity);
                    myBag.push_back("Laptop");
                }
                else if (product==3)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (300 * quantity);
                    myBag.push_back("TV");
                }
                else if(product==4)
                {
                    continue;
                }
                else
                {
                    cout<<"Invalid input"<<endl;
                    continue;
                }
            }
            
            else if(choice == 2)
            {
                cout<<"Clothes Details"<<endl;
                cout<<"1. Shirt : 50"<<endl;
                cout<<"2. Trousers: 70"<<endl;
                cout<<"3. Jeans : 100"<<endl;
                cout<<"4. Back to main menu"<<endl;

                cout<<"Enter your choice"<<endl;
                cin>>product;

                if(product == 1)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (50 * quantity);
                    myBag.push_back("Shirt");
                }
                else if(product == 2)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (70 * quantity);
                    myBag.push_back("Trousers");
                }
                else if(product == 3)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (100 * quantity);
                    myBag.push_back("Jeans");
                }
                else if(product == 4)
                {
                    continue;
                }
                else
                {
                    cout<<"Invalid input"<<endl;
                    continue;
                }
            }

            else if(choice == 3)
            {
                cout<<"Food Details"<<endl;
                cout<<"1. Pizza : 15"<<endl;
                cout<<"2. Burger: 10"<<endl;
                cout<<"3. Pasta : 20"<<endl;
                cout<<"4. Back to main menu"<<endl;

                cout<<"Enter your choice"<<endl;
                cin>>product;

                if(product == 1)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (15 * quantity);
                    myBag.push_back("Pizza");
                }
                else if(product == 2)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (10 * quantity);
                    myBag.push_back("Burger");
                }
                else if(product == 3)
                {
                    cout<<"Enter the quantity"<<endl;
                    cin>>quantity;

                    bill = bill + (20 * quantity);
                    myBag.push_back("Pasta");
                }
                else if(product == 4)
                {
                    continue;
                }
                else
                {
                    cout<<"Invalid input"<<endl;
                    continue;
                }
            }
        }

        else if(choice == 4)
        {
            cout<<"Thanks for shopping with us!"<<endl;
            return bill;
        }
        
        else if(choice == 5)
        {
            cout<<"Here is your bag: "<<endl;
            for(int i = 0; i < myBag.size(); i++)
            {
                cout<< myBag[i]<<", ";
            }
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }
}

int main()
{
    char start;
    char choice;

    while (true)
    {
        cout << "Welcome to the shop! Would you like to shop? (y/n)" << endl;
        cin >> start;

        if (start == 'y' || start == 'Y')
        {
            float total = shop();
            cout << "Your total is: $" << total << endl;

            if(total > 500 && total < 1000)
            {
                cout << "You get a 10% discount!" << endl;
                total = total * 0.9;
                cout << "Your new total is: $" << total << endl;
            }
            else if(total > 1000)
            {
                cout << "You get a 20% discount!" << endl;
                total = total * 0.8;
                cout << "Your new total is: $" << total << endl;
            }
            
            cout << "Total bill amount is : " << total << endl;
            
            cout<< "Do you want to shop again? (y/n)" << endl;
            cin >> choice;

            if (choice == 'n' || choice == 'N')
            {
                cout<<"Thanks for shopping with us!"<<endl;
                break;
            }
        }
        else if(start == 'n' || start == 'N')
        {
            cout<<"Thanks for visiting us!"<<endl;
            break;
        }
        else
        {
            cout<<"Invalid input"<<endl;
        }
    }

    return 0;
}
