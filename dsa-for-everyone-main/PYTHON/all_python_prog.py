# factorial of a number

# n=int(input("Enter the number: "))
# fact=1
# for i in range(1,n+1):
#     fact=fact*i
# print("Factorial of the number is",fact)



# Armstrong number

# n=int(input("Enter the number: "))
# c=0
# temp=n
# for i in range(0,n):
#     a=n%10
#     b=a*a*a
#     c=c+b
#     n=n//10
# if(temp==c):
#     print("Number is armstrong")
# else:
#     print("Number is not armstrng")


# reverse of a Number

# n=int(input("Enter the number: "))
# temp=0
# while(n!=0):
#     a=n%10
#     temp=(temp*10)+a
#     n=n//10
# print("Reverse of the number is",temp)


# prime or not

# n=int(input("Enter the number: "))
# flag=False
# if(n>1):
#     for i in range(2,n):
#         if(n%i==0):
#             flag=True
#             break
# if flag:
#     print("Number is not a prime number")
# else:
#     print("Number is a prime number")


# palindrome or not

# n=int(input("Enter the number: "))
# tmp,temp=n,0
# while(n!=0):
#     a=n%10
#     temp=(temp*10)+a
#     n=n//10
# if(tmp==temp):
#     print("Number is a palindrome number")
# else:
#     print("Number is not a plaindrome number")


# fabonaci series

# n=int(input("Enter the number: "))
# a,b = 0, 1
# print("Fibonacci Series:",a,b,end=" ")
# for i in range(2,n):
#     c = a + b
#     a = b
#     b = c
#     print(c,end=" ")
# print()

# concatinate


# n,m=map(str,input("Enter the numbers: ").split())

# print(n+m)
