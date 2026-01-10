

arr = [1,2,3,5,6,32]
sorted(arr)
print(arr)
duplicate = False
dup_arr = []
for i in arr:
    if i not in dup_arr:
        dup_arr.append(i)

    else:
        duplicate = True

print(duplicate)