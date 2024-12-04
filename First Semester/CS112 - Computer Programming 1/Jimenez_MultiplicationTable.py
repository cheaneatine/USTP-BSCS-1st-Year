# Write a program that uses nested for loops to print a multiplication table.
print('                          Multiplication Chart')
for j in range(1,11):
    for k in range(1,11):
        print(j * k, end='\t')
    print('\n')