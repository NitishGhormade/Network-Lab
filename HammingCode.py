data = [x for x in range(5)]
m = len(data)
r = 0
for rcheck in range(len(data)):
    if(2**rcheck >= m + rcheck + 1):
        r = rcheck
        break

print(r)