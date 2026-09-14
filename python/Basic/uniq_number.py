random_list = [1,3,3,1,4,2,4,7,8,7,8]
def uniq_fun(number_list:list):
    # filter the list to get the unique numbers
    uniq_list = []
    print(hex(id(number_list)))
    for i in number_list:
        if i not in uniq_list:
            uniq_list.append(i)
    # number_list = uniq_list.copy()
    # print(uniq_list)
    return uniq_list;
print("original list: ", random_list)
random_list = uniq_fun(random_list)
print("after function call: ", random_list)
print(hex(id(random_list)))