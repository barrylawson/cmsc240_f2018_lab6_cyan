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

   // add try-catch for get
   try
   {
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.put('a', 0) method" << std::endl;
      cv.put('a', 0);
      std::cout << "cv = " << cv.get(0) << " [a]" << std::endl;
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.size() method" << std::endl;
      std::cout << "size of cv = " << cv.size() << " [1]" << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;

      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.put('b', 1) method" << std::endl;
      cv.put('b', 1);
      std::cout << "cv = " << cv.get(0) << cv.get(1) << " [ab]" << std::endl;
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.size() method" << std::endl;
      std::cout << "size of cv = " << cv.size() << " [2]" << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;

      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.put('b', 0) method" << std::endl;
      cv.put('b', 0);
      std::cout << "cv = " << cv.get(0) << cv.get(1) << " [bb]" << std::endl;
      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing cv.size() method" << std::endl;
      std::cout << "size of cv = " << cv.size() << " [2]" << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;

      std::cout << "--------------------------------" << std::endl;
      std::cout << "Testing invalid index with cv.get(2)" << std::endl;
      std::cout << "cv = " << cv.get(0) << cv.get(1) << cv.get(2)<< std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;
   }
   catch(std::exception& e)
   {
      std::cout << "The following exception was thrown: " << e.what() << std::endl;
      std::cout << "--------------------------------" << std::endl << std::endl;
   }


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
//   IntegerVector iv2;

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

   std::cout << "--------------------------------" << std::endl;
   std::cout << "Testing cv2.appendIntegerVector(iv) method" << std::endl;
   cv2.appendIntegerVector(iv);
   std::cout << cv2.get(0) << "[A]" << std::endl;
   std::cout << cv2.get(1) << "[F]" << std::endl;
   std::cout << cv2.get(2) << "[Q]" << std::endl;
   std::cout << cv2.get(3) << "[Y]" << std::endl;
   std::cout << "--------------------------------" << std::endl;
   std::cout << "Testing cv2.size() method" << std::endl;
   std::cout << "size of cv2 = " << cv2.size() << " [4]" << std::endl;
   std::cout << "--------------------------------" << std::endl << std::endl;

   std::cout << "--------------------------------" << std::endl;
   std::cout << "Testing cv2.appendDoubleVector(dv) method" << std::endl;
   cv2.appendDoubleVector(dv);
   std::cout << cv2.get(4) << "[J]" << std::endl;
   std::cout << cv2.get(5) << "[H]" << std::endl;
   std::cout << cv2.get(6) << "[I]" << std::endl;
   std::cout << "--------------------------------" << std::endl;
   std::cout << "Testing cv2.size() method" << std::endl;
   std::cout << "size of cv2 = " << cv2.size() << " [7]" << std::endl;
   std::cout << "--------------------------------" << std::endl << std::endl;

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
