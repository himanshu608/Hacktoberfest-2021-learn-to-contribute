from functools import reduce


def sqr(a):
    return a * a


def find_odd(a):
    if a % 2 == 0:
        return a


def sun(a, b):
    return a + b


arr = [2, 3, 5, 6, 7]

d = map(sqr, arr)
print("Map= ", list(d))

f = filter(find_odd, arr)
print("filter= ", list(f))

r = reduce(sun, arr)

print("reduce", r)
