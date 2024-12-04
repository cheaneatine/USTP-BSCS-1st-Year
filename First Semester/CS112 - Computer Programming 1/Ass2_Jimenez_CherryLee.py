# Write a program that displays the sales tax with two digits after the decimal point.

purchaseAmount = float(input("Enter the amount of purchase: "))
sales_tax = purchaseAmount * 0.06
decimal = "{:.2f}".format(sales_tax)
print("Your total amount is: ", decimal)

# Write a program that displays current time in GMT (Greenwich Mean Time) in the format.

import time

t = time.gmtime()
now = time.strftime("%H: %M: %S", t)
print(now)

# Write a program that lets the user enter the interest rate, number of years, and loan amount, and computes monthly payment and total payment.

interestRate = float(input("Enter your Interest Rate: "))
numYears = int(input("Enter the Number of Years: "))
LoanAmount = float(input("Enter your Loan Amount: "))

monthlyPay = LoanAmount * interestRate / (1-1/ (1 + interestRate) ** (numYears * 12))
totalPay = monthlyPay * 12

print("Your Monthly Payment is: ", monthlyPay)
print("Your Total Payment is: ", totalPay)