
# Define an interval to cover:
min, max = 100, 1000

print(f"The prime numbers between {min} and {max} include:")

for n in range(min, max + 1):
    # Number must be greater than 1:
    if n > 1:
        for i in range(2, n):
            if (n % i) == 0:
                break
        else:
            print(n)
