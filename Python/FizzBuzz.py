'''
This is a classic programming question that almost any beginner programmer should be able to answer.
The objective is to iterate from 1 to n, if the number is divisible by 3, add Fizz to the array, 
if the number is divisible by 5, return "Buzz", and if it is divisible by 3 and 5 return FizzBuzz. 
'''
class Solution:
    def fizzBuzz(n):
        """
        :type n: int
        :rtype: List[str]
        """
        strings = []
        for i in range (1, n+1):
            if (i%3 == 0 and i%5 == 0):
                strings.append("FizzBuzz")
            elif (i%3 == 0):
                strings.append("Fizz")
            elif (i%5 == 0):
                strings.append("Buzz")
            else:
                strings.append(str(i))
        return strings

print(Solution.fizzBuzz(10))