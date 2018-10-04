#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"
#include <exception>
#include <string>
#include <stdexcept>

int main()
{
   IntegerVector   iv;
   DoubleVector    dv;
   CharacterVector cv;

   //-------------------------------------------------------------------------

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;

   //
   std::cout << "----------Testing put-----------" << std::endl;

   iv.put(45, 5);
   iv.put(3);
   iv.put(7);
   iv.put(123491521);

   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << std::endl;
   }

   std::cout << "iv should be: " << "[45,3,7,123491521]" << std::endl;
   

   std::cout << "----------Testing size--------------" << std::endl;

   std::cout << "The size of iv should be: 4" << std::endl;
   std::cout << iv.size() << std::endl;
   
   //For get function
   std::cout << "-------Testing get-------" << std::endl;
   try{
      std::cout << iv.get(2) << std::endl;
      std::cout << "Get value at index: 40 " << iv.get(40) << std::endl;   
   }
   //Catching out of bounds exception
   catch(const std::out_of_range& e){
      std::cout << e.what() << '\n';
   }

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;
//   std::cout << "Testing default constructor" << std::endl;
//   for ( int i = 0; i < dv.size(); i++)
//   {
//   	std::cout << dv.get(i);
//   }
//   std::cout <<"[]"<< std::endl; 
//   std::cout << dv.size() << "[0]" << std::endl;
//   std::cout << "-------------" << std::endl;
   std::cout << "Testing put(value)" << std::endl;
   dv.put(11.11);
   for ( int i = 0; i < dv.size(); i++)
   {
        std::cout << dv.get(i)<<'\t';
   }
   std::cout <<"[11.11]"<< std::endl;
   std::cout << dv.size() << "[1]" << std::endl;
   dv.put(22.22);
   for ( int i = 0; i < dv.size(); i++)
   {
        std::cout << dv.get(i)<<'\t';
   }
   std::cout <<"[11.11	22.22]"<< std::endl;
   std::cout << dv.size() << "[2]" << std::endl;


   std::cout << "-------------" << std::endl;
   std::cout << "Testing put(value, index)" << std::endl;
   dv.put(33.33, 5);
   for ( int i = 0; i < dv.size(); i++)
   {
   	std::cout << dv.get(i) << '\t';
   }
   std::cout <<"[11.11	22.22	33.33]"<< std::endl; 
   std::cout << dv.size() << "[3]" << std::endl;
   
   dv.put(44.44,0);
   for ( int i = 0; i < dv.size(); i++)
   {
	std::cout << dv.get(i)<< '\t';
   }
   std::cout <<"[44.44	22.22	33.33]"<< std::endl;
   std::cout << dv.size() << "[3]" << std::endl;
   std::cout << "-------------" << std::endl;

   std::cout << "Testing get" << std::endl;  
   std::cout << dv.get(0) << "[44.44]" << std::endl;
   std::cout << dv.get(1) << "[22.22]" << std::endl;
   try
    {
	std::cout<< dv.get(10) << std::endl;         
    }
    catch (std::exception& e)
    {
        std::cerr << "exception caught: " << e.what() << '\n';
    }
   std::cout << "-------------" << std::endl;
   
   std::cout << "Testing size" << std::endl;
   std::cout << dv.size() << "[3]" << std::endl;
   
   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
