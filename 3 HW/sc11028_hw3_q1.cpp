#include <iostream>
using namespace std;

int main(){

   // Variable  
   double price1, price2, taxRate, totalPrice;
   char clubCard;

   // Input

   cout<< "Enter price of first item: "<<endl;
   cin>>price1;
   
   cout<< "Enter price of second item: "<<endl;
   cin>>price2;
   
   cout<< "Does customer have a club card? (Y/N): "<<endl;
   cin>>clubCard;

   cout<< "Enter tax rate, e.g. 5.5 for 5.5% tax: "<<endl;
   cin>>taxRate;
   
   cout.precision(3);
   cout <<"Base Price: "<< (price1 + price2)<<endl;

   if (price1 > price2)
   {
    totalPrice = (price1 + (price2 / 2));
   }
   else{
    totalPrice = (price2 + (price1 /2 ));
   }

   if (clubCard == 'y' or clubCard == 'Y'){
    totalPrice *= 0.9;
   }
   
   cout<< "Price after discounts: "<<totalPrice<<endl;

   totalPrice *= ((taxRate / 100) + 1);

   cout.precision(7);
   cout<<"Total Price: "<<totalPrice<<endl;

return 0;
}