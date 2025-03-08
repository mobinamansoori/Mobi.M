"""#1
for i in range(10) :
    number=int(input("enter num!"))
    if number%2==0:
        print("even numbers :" , number)
    else:
        print("not even")"""
"""#2
while True :
    n1=float(input("enter your num"))
    if n1==0:
        break
    
    op = input("inter an operator (+,-,*,/):")

    n2=float(input("inter your num:" ))

    if op=='+':
        print(n1+n2)
    elif op == '-':
        print(n1-n2)
    elif op == '*':
        print(n1*n2)
    elif op == '/':
        print(n1/n2)"""
"""#5
#تابع ای برای محاسبه میانگین
def mian(lst):
    if len(lst)==0:
        return 0
    return sum(lst)/len(lst)

num=[1,2,3,4,5,6,7,8,9]
miangin=mian(num)
print("miangin lst:" , miangin)"""
"""#6
listm=[12,14,16,18,20]
for item in listm :
    print(item)"""