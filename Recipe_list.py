from subprocess import call
import os

class decorator:
    BOLD = '\033[1m'
    UNDERLINE = '\033[4m'
    ITALIC = '\x1B[3m'
    NORMAL = '\033[0m'


def clear():
    x = input("Press enter to continue")
    os.system('cls' if os.name=='nt' else 'clear')


item = ["Chicken Strips", "French Fries", "Hamburger", "Hotdog", "Large Drink", "Medium Drink", "Milk Shake", "Salad",
        "Small Drink"]

cost = [3.50, 2.50, 4.00, 3.50, 1.75, 1.50, 2.25, 3.75, 1.25]

print(decorator.BOLD + decorator.UNDERLINE + "MENU CALCULATOR" + decorator.NORMAL)
print("")
val = None
while True:
    print(decorator.BOLD + decorator.ITALIC + "MENU CARD" + decorator.NORMAL)
    print("")
    for i in range(len(item)):
        print(decorator.ITALIC + str(i + 1) + " " + item[i] + " : $" + str(cost[i]) + decorator.NORMAL)
    print("")
    print(decorator.ITALIC + "Enter exit to end to terminate." + decorator.NORMAL)
    print("")
    val = input("Enter your order : ")
    print("")
    if val == 'exit':
        break
    v = []
    flag = 0
    for i in val:
        try:
            v.append(int(i) - 1)
        except ValueError:
            flag = 1
            break
    if flag == 1:
        print("Please enter integer values to order. \n")
        clear()
        continue
    v.sort()
    dic = {}
    c = 0
    for i in v:
        if i >= len(item) or i < 0:
            flag = 2
            break
        if i in dic:
            c += cost[i]
            dic[i] += 1
        else:
            c += cost[i]
            dic.update({i: 1})
    if flag == 2:
        print(decorator.ITALIC + "Item no given is unavailable.\n" + decorator.NORMAL)
        clear()
        continue
    print(decorator.BOLD + decorator.UNDERLINE + "ITEMS ORDERED" + decorator.NORMAL)
    for i in dic:
        print(decorator.ITALIC + str(item[i]) + " : " + str(dic[i]) + decorator.NORMAL)
    print()
    print(decorator.BOLD + "Total Cost : $" + str(c) + decorator.NORMAL)
    print()
    clear()







