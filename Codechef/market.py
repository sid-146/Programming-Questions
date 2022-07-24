n = int(input())

k = int(input())

li1= []

for i in range(n):
    names = map(str, input().split(" "))
    li1[i] = list(names)
    # li1.append(names)


for i in range(n):
    li1[i].split(" ")

for i in range(len(li1)):
    print(li1[i])