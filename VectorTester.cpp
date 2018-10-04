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

   iv.put(45, 5);
   iv.put(3);
   iv.put(7);
   iv.put(123491521);

   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << std::endl;
   }

   std::cout << "iv should be: " << "[45,3,7,123491521]" << std::endl;
   
   //For size function
   std::cout << "--------------" << std::endl;

   std::cout << "The size of iv should be: 4" << std::endl;
   std::cout << iv.size() << std::endl;
   
   //For get function
   std::cout << "-------For Get-------" << std::endl;
   try{
      std::cout << iv.get(2) << std::endl;
      std::cout << "Get value at index: 40 " << iv.get(40) << std::endl;   
   }
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
