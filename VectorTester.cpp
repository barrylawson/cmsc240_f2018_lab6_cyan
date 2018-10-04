#include <iostream>
#include "IntegerVector.h"
#include "DoubleVector.h"
#include "CharacterVector.h"

int main()
{
//   IntegerVector   iv;
//   DoubleVector    dv;
   CharacterVector cv;

   //-------------------------------------------------------------------------

   // test IntegerVector: put, get, size, out_of_range

   std::cout << "--------------" << std::endl;
   std::cout << "IntegerVector:" << std::endl;
   std::cout << "--------------" << std::endl;

   //-------------------------------------------------------------------------

   // test CharacterVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "----------------" << std::endl;
   std::cout << "CharacterVector:" << std::endl;
   std::cout << "----------------" << std::endl;

   // add try-catch for get
   try
   {
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.put('a', 0) method" << std::endl;
      cv.put('a', 0);
      std::cout << "cv = " << cv.get(0) << std::endl;
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.size() method" << std::endl;
      std::cout << "size of cv = " << cv.size() << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;

      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.put('b', 1) method" << std::endl;
      cv.put('b', 1);
      std::cout << "cv = " << cv.get(0) << cv.get(1) << std::endl;
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.size() method" << std::endl;
      std::cout << "size of cv = " << cv.size() << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;

      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.put('b', 0) method" << std::endl;
      cv.put('b', 0);
      std::cout << "cv = " << cv.get(0) << cv.get(1) << std::endl;
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.size() method" << std::endl;
      std::cout << "size of cv = " << cv.size() << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;

      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing invalid index with cv.get(2)" << std::endl;
      std::cout << "cv = " << cv.get(0) << cv.get(1) << cv.get(2)<< std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;
   }
   catch(std::exception& e)
   {
      std::cout << "The index entered was invalid. The following exception was thrown: " << e.what() << std::endl;
      std::cout << "--------------------------------" << std::endl;
   }


   //-------------------------------------------------------------------------

   // test DoubleVector: put, get, size, out_of_range

   std::cout << std::endl;
   std::cout << "-------------" << std::endl;
   std::cout << "DoubleVector:" << std::endl;
   std::cout << "-------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty IntegerVector, test appending cv & dv from above 
//   IntegerVector iv2;

   std::cout << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
//   CharacterVector cv2;

   std::cout << std::endl;
   std::cout << "----------------------------" << std::endl;
   std::cout << "appended-to CharacterVector:" << std::endl;
   std::cout << "----------------------------" << std::endl;

   //-------------------------------------------------------------------------

   // using empty DoubleVector, test appending iv & cv from above
//   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;

   //-------------------------------------------------------------------------

   return 0;
}
