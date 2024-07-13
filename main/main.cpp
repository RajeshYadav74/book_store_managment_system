#include<iostream>
#include<stdlib.h>
#include"bookclass.cpp"

using namespace std;


int main()
{  int choice;
   char option='Y';
    while(option=='Y')
    {
    cout<<"\n\n Book Store Management System"
            <<"\n-----------------------------"
            <<"\n1. Entry of New Book"
            <<"\n2. Buy Book"
            <<"\n3. Search For Book"
            <<"\n4. Edit Details Of Book"
            <<"\n5. Delete Existing Book Info From Store"
            <<"\n6. Exit"
            <<"\n\nEnter your Choice: ";
        cin>>choice;

   switch (choice)
   {
      char athr[50];
      char titl[50];

   case 1 :
            Book b1;
            b1.bookInfo();
            b1.storeInfo();
            break;

   case 2 :
           Book b2;

            cin.ignore();
            cout<<"Author Name: ";
            cin.getline(athr,50);
            cout<<"Title Of Book: ";
            cin.getline(titl,50);

            if(b2.getInfo(athr,titl)){
              cout<<endl;
               b2.Buy();
            }
            
            break;

   case 3:
          cin.ignore();
          cout<<"\nEnter Author Name: ";
          cin.getline(athr,50);
          cout<<"Enter Title Of Book: ";
          cin.getline(titl,50);

         if( b2.getInfo(athr,titl)){
            b2.show();
         }
         break;

   case 4:
          cin.ignore();
          cout<<"Enter Author Name: ";
          cin.getline(athr,50);
          cout<<"Enter Title Of Book: ";
          cin.getline(titl,50);

          if(b2.getInfo(athr,titl)){
            b2.editInfo();
          }
         break;

            
   case 5:
          cin.ignore();
          cout<<"\nEnter Author Name: ";
          cin.getline(athr,50);
          cout<<"Enter Title Of Book: ";
          cin.getline(titl,50);

          if(b2.getInfo(athr,titl)){
            b2.deleteInfo(athr,titl);
          }


          
          break;


   case 6: 
            exit(0);
                 
          
          
                    
   
   default:
           cout<<"please enter a valid choice"<<endl;
          
           break;
   } 

     cout<<"\n\nDo You Want to continue, press Y to continue"<<endl; 
     cin>>option;
    }   
  
   
   return 0;
}