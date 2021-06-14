'''
冒泡排序
Python 实例
By WeepingDogel
'''
def sort(arr):
    for i in range(1,len(arr)):
        for j in range(0, len(arr) - i):
            if arr[j] > arr[j+1]:
                arr[j],arr[j+1] = arr[j+1],arr[j]
    return arr
arr = [5, 8, 9 ,7]

print(sort(arr))