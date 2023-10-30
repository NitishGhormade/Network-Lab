mdata = input("Enter the Data: ")
parity = int(input("Enter 1 for EVEN PARITY and 0 for ODD PARITY: "))
m = len(mdata)
r = 0
for rcheck in range(len(mdata)):
    if(2**rcheck >= m + rcheck + 1):
        r = rcheck
        break

hammingCode = []

p = [x for x in range(m+r) if(2**x <= m+r)]

counter = 0
for i in range(1,m+r+1):
    if(i in p):
        hammingCode.append(-1)
    else:
        hammingCode.append(mdata[counter])
        counter += 1

for pow in p:
    s = []
    for idx in range(pow-1,m+r,2*pow):
        s = hammingCode[idx:idx + pow]

