# Self divisible numbers

# function to check self div or not.
# input: single integer
# returns true if check passes
def self_div_num(num_in):
    digit_list = [int(temp_num) for temp_num in str(num_in)]
    #print digit_list
    for x in digit_list:
        if not x or (num_in % x):
            return False
    return True

# function computes and prints of self dividing numbers in the range given
# input - left - starting range boundary
#         right - ending range boundary
# output - list of self dividing numbers
def compute_self_div_range(left, right):
    return [ temp_num for temp_num in range(left,right+1) if self_div_num(temp_num)]

print compute_self_div_range(1,22)
print compute_self_div_range(1,10000)

#print (self_div_num(1208))


