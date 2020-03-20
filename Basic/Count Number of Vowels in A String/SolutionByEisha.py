x=input()
cnt=0
def countNumberOfVowels(arr,cnt):
    for i in range(len(arr)):
        if arr[i]=='a' or arr[i]=='e' or arr[i]=='i' or arr[i]=='o' or arr[i]=='u' or\
           arr[i]=='A' or arr[i]=='E' or arr[i]=='I' or arr[i]=='O' or arr[i]=='U':
            cnt+=1
    return cnt
print(countNumberOfVowels(list(x),cnt))
