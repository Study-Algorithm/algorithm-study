def solution(n, left, right):
    answer = []
    arr=[]
    for i in range(0, n):
        put=i
        j=0
        while(j<n-1):
            if(j==0):
                for k in range(0,put+1):
                    arr.append(put+1)
                    j+=1              
            put+=1
            arr.append(put+1)
            print(j)
            j+=1
    print(arr)
    

solution(3,4,3)