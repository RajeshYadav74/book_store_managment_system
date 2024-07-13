#include<iostream>
#include<fstream>
#include<cstring>
#include<stdio.h>

using namespace std;


class Book
{
   char author[50];
   char title[50];
   char publisher[50];
   float price;
   int stock;


 public:
      
       void bookInfo()
   {       
           cin.ignore();
           cout<<"\nAuthor Name:  ";
           cin.getline(author,50);
           cout<<"Title Of Book:  ";
           cin.getline(title,50);
           cout<<"Publisher Name:  ";
           cin.getline(publisher,50);
           cout<<"Price:  ";
           cin>>price;
           cout<<"Stock:  ";
           cin>>stock;

   }
      
   
    void show()
   {
           
           cout<<"\nAuthor Name:  "<<author<<endl;
           
           cout<<"Title Of Book:  "<<title<<endl;
          
           cout<<"Publisher Name:  "<<publisher<<endl;
          
           cout<<"Price:  "<<price<<endl;
           
           cout<<"Stock:  "<<stock<<endl;
           
   }



  

   void storeInfo()
    {
        char filename[50];
         strcpy(filename,title);
       ofstream ofs;
       ofs.open(strcat(filename,".txt"));
       if(ofs.is_open()){
         
         ofs.write((char*)this,sizeof(*this));
         ofs.close();
       }
   }

   
      int getInfo(char athr[50],char titl[50])
      {
        
         
            ifstream ifs;
            char filename[50];
            strcpy(filename,titl);
            ifs.open(strcat(filename,".txt"));

            if(ifs.is_open()){
              
              ifs.read((char*)this,sizeof(*this));
              if(strcmp(this->author,athr)==0 && strcmp(this->title,titl)==0){
              cout<<"\nYes! book is in stock"<<endl;
              return 1;

             }
         }
          else{
               cout<<"Book is out of stock";
              }

         
    }

    void Buy(){
      int count;
      cout<<"Enter No Of Books: ";
      cin>>count;

      if(count<=stock){
         stock=stock-count;
         cout<<"Book Bought Succesfully"<<endl;
         cout<<"Amount Rs. " <<price*count;

           ofstream ofs;
           char filename[50];
           strcpy(filename,title);

           ofs.open(strcat(filename,".txt"));
           ofs.write((char*)this,sizeof(*this));
           ofs.close();


      }
      else{
         cout<<"Required copy not in stock";
      }

    }

    void editInfo()
    {
         
           cout<<"\nAuthor Name:  ";
           cin.getline(author,50);
           cout<<"Title Of Book:  ";
           cin.getline(title,50);
           cout<<"Publisher Name:  ";
           cin.getline(publisher,50);
           cout<<"Price:  ";
           cin>>price;
           cout<<"Stock:  ";
           cin>>stock;

           ofstream ofs;
           char filename[50];
           strcpy(filename,title);

           ofs.open(strcat(filename,".txt"));
           ofs.write((char*)this,sizeof(*this));
           ofs.close();

    }
  

    void deleteInfo(char athr[50],char titl[50])
    {
      char filename[50];
      strcpy(filename,titl);
      strcat(filename,".txt");
    
      if(remove(filename)==0){
        cout<<"Book Information removed";
    }
            
           
    }        
      


};