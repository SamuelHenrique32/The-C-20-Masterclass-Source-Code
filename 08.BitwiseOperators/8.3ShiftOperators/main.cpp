#include <iostream>
#include <bitset>

//A bitset is an array of bools but each boolean value is not stored in a separate byte instead, bitset optimizes
//the space such that each boolean value takes 1-bit space only, so space taken by bitset is less than that of
//an array of bool or vector of bool
//std::bitset is the class template for bitset

int main(){

	unsigned short int value {0xff0u};

	std::cout << "Size of short int " << sizeof(short int) <<  std::endl;//  16 bits
	
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;


    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift left by one bit
    value = static_cast<unsigned short int>(value << 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;

    //Shift right by one bit
    value = static_cast<unsigned short int>(value >> 1);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;


    //Shift by multiple bits in one go
    //Shift right by four bits 
    value = static_cast<unsigned short int>(value >> 4);
    std::cout << "value : " << std::bitset<16>(value) 
    << ", dec : " << value << std::endl;



    //
    std::cout << "value : " << (value >> 1) << std::endl;








   
    return 0;
}