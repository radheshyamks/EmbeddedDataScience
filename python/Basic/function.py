error = 0
def fun():
    global error;
    # it will throw an error because of the global variable
    # to fix this issue, we can use the global keyword to access the global variable
    # like: global error; 
    error+=10 # --> error prone line
    # return error
fun()
print(error)