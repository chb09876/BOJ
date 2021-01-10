N=int(input())
num_list=input().split()
num_list=list(map(int,num_list))
cnt=len(num_list)

for i in num_list:
    for d in range(2,i):
        if i%d==0:
            cnt-=1
            break

if 1 in num_list:
    cnt-=1

print(cnt)