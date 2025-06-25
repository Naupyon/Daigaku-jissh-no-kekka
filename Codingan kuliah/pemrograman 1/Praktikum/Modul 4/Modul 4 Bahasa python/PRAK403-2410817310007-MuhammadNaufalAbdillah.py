mulai, henti =map(int,input(" ").split())

i,j=mulai,henti

if mulai<henti:
    while i<=henti and j>=mulai:
        print(f"{i} {j}", end=" ")
        
        if i<henti or j>mulai:
            print("-", end=" ")
        i +=1
        j -=1
elif i>j:
    while i>= henti and j<= mulai:
        print(f"{i} {j}", end=" ")

        if i>henti or j < mulai:
            print("-", end=" ")
        i -=1
        j +=1