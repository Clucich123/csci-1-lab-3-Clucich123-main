#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int Orange_Quantity;
    int Banana_Quantity;
    int Apple_Quantity;
    float Orange_Price = 0.90;
    float Banana_Price = 0.75;
    float Apple_Price = 0.65;
    float Orange_Total;
    float Banana_Total;
    float Apple_Total;
    float Final_Total;


    cout<<"Welcome to Bob's Fruit Shop"
    <<endl;
    do{
    cout<<"How many oranges would you like to buy?:";
        cin >>Orange_Quantity;
        if (Orange_Quantity > 100) {cout << "Sorry! We dont have enough inventory to process that order";}
        if (Orange_Quantity<0) {cout << "Sorry! That input is invalid. We are unable to process the order";}
            cout<<endl;
    }while (Orange_Quantity<0||Orange_Quantity>100);
    
    do{
    cout<<"How many bannanas would you like to buy?:";
        cin>>Banana_Quantity;
        if (Banana_Quantity > 120) cout << "Sorry! We dont have enough inventory to process that order"
            <<endl;
         if (Banana_Quantity<0) cout << "Sorry! That input is invalid. We are unable to process the order"
            <<endl;
    }while (Banana_Quantity>120||Banana_Quantity<0);
    
    do{
    cout<<"How many apples would you like to buy?:"; 
        cin>>Apple_Quantity;
        if (Apple_Quantity > 80) cout << "Sorry! We dont have enough inventory to process that order"
            <<endl;
        if (Apple_Quantity<0) cout << "Sorry! That input is invalid. We are unable to process the order"
            <<endl;
    }while (Apple_Quantity>80||Apple_Quantity<0);
    cout<<endl;

    Orange_Total = Orange_Quantity * Orange_Price;
    Banana_Total = Banana_Quantity * Banana_Price;
    Apple_Total = Apple_Quantity * Apple_Price;
    Final_Total = Orange_Total + Banana_Total + Apple_Total;

    
     cout << right << setw(40) << "Bobs Fuit Invoice" 
    <<endl;
    cout << right << setw(40) << "----------------------------------" 
    <<endl;
   
    cout << setw(10) << Orange_Quantity
    << fixed << setprecision(2)
    << " Oranges @ $"
    << Orange_Price
    << " each = $"
    << Orange_Total
    << endl;


    cout << setw(10) << Banana_Quantity
    << fixed << setprecision(2)
    << " Bananas @ $"
    << Banana_Price
    << " each = $"
    << Banana_Total
    << endl;

    cout << setw(11) << Apple_Quantity
    << fixed << setprecision(2)
    << " Apples @ $"
    << Apple_Price
    << " each = $"
    << Apple_Total
    << endl;
    
    cout << right << setw(40) <<"----------------------------------"
    << endl;

    cout << fixed << setprecision(2)
    << right << setw(34)
    << "Total = $"
    << Final_Total;




  
    
       
    return 0;

}