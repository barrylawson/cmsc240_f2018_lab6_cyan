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

   std::cout << "------------------------------------" << std::endl;
   std::cout << "----Testing put(index, value)-------" << std::endl;
   std::cout << "------------------------------------" << std::endl;

   std::cout << "Inputting value 65 at index 5 " << std::endl;
   iv.put(65, 5);
   std::cout << "Inputting value 70 " << std::endl;
   iv.put(70);
   std::cout << "Inputting value 81 " << std::endl;
   iv.put(81);
   std::cout << "Inputting value 89 " << std::endl;
   iv.put(89);

   std::cout << std::endl;

   std::cout << "-------Displaying values of iv-------" << std::endl;

   for(int i = 0; i < iv.size(); i++){
      std::cout << iv.get(i) << '\t';
   }
   std::cout << std::endl;
   std::cout << "iv should have values: " << "[65, 70 , 81, 89]" << std::endl;

   std::cout << std::endl;  
   
   std::cout << "------------------------------------" << std::endl;
   std::cout << "----------Testing size--------------" << std::endl;
   std::cout << "------------------------------------" << std::endl;

   std::cout << "The size of iv should be: 4" << std::endl;
   std::cout << "iv size is: " << iv.size() << std::endl;

   std::cout << std::endl;
   
   //For get function
   std::cout << "------------------------------------" << std::endl;
   std::cout << "-----------Testing get--------------" << std::endl;
   std::cout << "------------------------------------" << std::endl;

   try{
      std::cout << "Getting value at index 2 " << std::endl;      
      std::cout <<iv.get(2) << std::endl;
      std::cout << "Value at index 2 should be: [80] " << std::endl;
      std::cout << std::endl;
      std::cout << "Getting value of at index 40 " << std::endl;
      std::cout << "Get value at index: [Index should be out of range] " << iv.get(40) << std::endl;   
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
   dv.put(71.11);
   for ( int i = 0; i < dv.size(); i++)
   {
        std::cout << dv.get(i)<<'\t';
   }
   std::cout <<"[71.11]"<< std::endl;
   std::cout << dv.size() << "[1]" << std::endl;
   dv.put(72.22);
   for ( int i = 0; i < dv.size(); i++)
   {
        std::cout << dv.get(i)<<'\t';
   }
   std::cout <<"[71.11	72.22]"<< std::endl;
   std::cout << dv.size() << "[2]" << std::endl;


   std::cout << "-------------" << std::endl;
   std::cout << "Testing put(value, index)" << std::endl;
   dv.put(73.33, 5);
   for ( int i = 0; i < dv.size(); i++)
   {
   	std::cout << dv.get(i) << '\t';
   }
   std::cout <<"[71.11	72.22	73.33]"<< std::endl; 
   std::cout << dv.size() << "[3]" << std::endl;
   
   dv.put(74.44,0);
   for ( int i = 0; i < dv.size(); i++)
   {
	std::cout << dv.get(i)<< '\t';
   }
   std::cout <<"[74.44	72.22	73.33]"<< std::endl;
   std::cout << dv.size() << "[3]" << std::endl;
   std::cout << "-------------" << std::endl;

   std::cout << "Testing get" << std::endl;  
   std::cout << dv.get(0) << "[74.44]" << std::endl;
   std::cout << dv.get(1) << "[72.22]" << std::endl;
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
   std::cout << "Appending DoubleVector " << std::endl;
   std::cout << "--------------------------" << std::endl;
   std::cout << "appended-to IntegerVector:" << std::endl;
   std::cout << "--------------------------" << std::endl;

   std::cout << std::endl;

   iv2.appendDoubleVector(dv);
   for(int i = 0; i < iv2.size(); i++){
      std::cout << iv2.get(i) << std::endl;
   }
   std::cout << "[74.44    72.22    73.33 should be 74, 72, 73]" << std::endl;

   std::cout << "Appending CharacterVector " << std::endl;
   std::cout << std::endl;

   iv2.appendCharacterVector(cv);
   for(int i = 0; i < iv2.size(); i++){
      std::cout << iv2.get(i) << std::endl;
   }

   std::cout << std::endl;

   std::cout << "-------Final Result ------" << std::endl;
   std::cout << "[74, 72, 73, b (98), b (98)]" << std::endl;
   std::cout << std::endl;

   //-------------------------------------------------------------------------

   // using empty CharacterVector, test appending iv & dv from above
   CharacterVector cv2;

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

   DoubleVector dv2;

   std::cout << std::endl;
   std::cout << "-------------------------" << std::endl;
   std::cout << "appended-to DoubleVector:" << std::endl;
   std::cout << "-------------------------" << std::endl;
   
   dv2.appendIntegerVector( iv );
   for ( int i = 0; i < dv2.size(); i++)
   {
        std::cout << dv2.get(i)<< ',';
   }
   std::cout << "[65,70,81,89]"<<std::endl;
  
   dv2.appendCharacterVector( cv );
   for ( int i = 0; i < dv2.size(); i++)
   {
        std::cout << dv2.get(i)<< ',';
   }
   std::cout << "[65,70,81,89,98(b),98(b)]"<<std::endl; 
   //-------------------------------------------------------------------------

   return 0;
}
