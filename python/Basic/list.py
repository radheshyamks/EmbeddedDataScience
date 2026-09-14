# find the second largest number in the given lsit
random_list = [100, 101,99, 43]
# sort function will sort the list in ascending order
random_list.sort(reverse=False)
# once list is sorted, we can find the second largest number by accessing the second last index of the list
print(random_list[-2])