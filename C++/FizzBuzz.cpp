/*
This is a classic programming question that almost any beginner programmer should be able to answer.
The objective is to iterate from 1 to n, if the number is divisible by 3, add Fizz to the array, 
if the number is divisible by 5, return "Buzz", and if it is divisible by 3 and 5 return FizzBuzz. 
*/


#include string
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        std::vector<string> strings;
        for( int i = 1; i < n+1; i++){ 
            if (i % 3 ==0 && i % 5 == 0){
                strings.push_back( "FizzBuzz"); 
            }else if (i%3 == 0){
                strings.push_back( "Fizz");  
            }else if (i % 5 ==0){
                strings.push_back( "Buzz"); 
            }else{
                strings.push_back(std::to_string(i)); 
            }
        }
        return strings;
    }
};