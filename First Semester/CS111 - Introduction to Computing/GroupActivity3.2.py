# Design an algorithm (pseudocode) and flowchart that, given a list of five or 
# more numbers, finds the five smallest and five largest numbers 
# in the list without sorting the entire list.

x = [2, 0, 13, 3, 9, 7, 6, 5, 20, 4, 8, 1]

# initial slices
maximum = x[0:5]
minimum = x[0:5]

for a in x[5:]:                                         # evaluate next to each
    for b in maximum:
        if a > b:                                       # if larger to at least one
            maximum.append(a)                           # append to the least          
            maximum.remove(min(maximum))                # remove the smallest
            break

    for b in minimum:
        if a < b:                                       # if smaller to at least one
            minimum.append(a)                           # append to the last
            minimum.remove(max(minimum))                # remove the largest
            break

print(maximum, minimum)

#input
[2, 0, 13, 3, 9, 7, 6, 5, 20, 4, 8, 1]

# five largest numbers
# 3  5  6   9  11
[13, 9, 7, 20, 8]

# five smallest numbers
#1  2  4  10 12
[2, 0, 3, 4, 1]

# initial five
[2, 0, 13, 3, 9]

# check if next is larger to at least one
[2, 0, 13, 3, 9] << 7

# append to the last
[2, 0, 13, 3, 9, (7)]

# remove the smallest
[2, (0), 13, 3, 9, 7] >> 0

# check if the next smaller to at least one
[2, 0, 13, 3, 9] << 7

# append to the last
[2, 0, 13, 3, 9, (7)]

# remove the largest
[2, 0, (13), 3, 9, 7] >> 13