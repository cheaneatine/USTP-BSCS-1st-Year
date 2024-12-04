# Convert feet into meters (1ft = 0.3048m)
feet = float(input('Enter Feet Value: '))
meter = feet * 0.3048
print(meter, 'meters')

# Sum the digits in an integer
num = int(input("Enter your number: "))
total = 0
while num:
    total += num % 10
    num //= 10
print(total)