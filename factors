#!/usr/bin/python3
import sys

def rsa():
    my_file = sys.argv[1]
    try:
        f = open(my_file, "r")

        lines = f.readlines()
        for line in lines:
            a = 2
            num = int(line)
            while a < (num//2):
                if num % a == 0:
                    print("{:d}={:d}*{:d}".format(num, num//a, a))
                    break
                a += 1
    except Exception:
       sys.exit(1) 


rsa()
