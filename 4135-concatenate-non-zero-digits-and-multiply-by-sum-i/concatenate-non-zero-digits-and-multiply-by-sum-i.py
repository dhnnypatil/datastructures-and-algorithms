class Solution:
    def sumAndMultiply(self, n: int) -> int:
        x = 0
        sum_digits = 0
        multiplier = 1
        
        while n > 0:
            digit = n % 10
            if digit > 0:
                x += digit * multiplier
                sum_digits += digit
                multiplier *= 10
            n //= 10
            
        return x * sum_digits