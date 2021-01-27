def duplikat(arr, size): 

	print("\nElemen duplikat :") 
	for i in range (0, size):
            for j in range (i + 1, size):
                if arr[i] == arr[j]: 
                        print(arr[i]) 
	
a = [8, 12, 8, 5, 12, 4, 1, 1] 
size = len(a)
print(a)
duplikat(a, size)
