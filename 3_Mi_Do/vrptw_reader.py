#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""

def read_string_list(file="r101"):
    """Functions for reading and working with VRPTW text input files."""
    filetag = ".txt"
    count = 0
    a = []
    if filetag in file:
        with open(file, 'r') as file1:
            for line in file1.readlines():
                count += 1
                if count >= 2:
                    a.append(line)
        return a
    else:
        openfile = file+ ".txt"
        with open(openfile, 'r') as file1:
            for line in file1.readlines():
                count += 1
                if count >= 2:
                    a.append(line)
        return a



def get_demand(i1, cust_no):
    """Functions for returning demand value from read_string_list()."""
    x = int(cust_no) - 1
    a2 = [i for i in i1[x].split()]
    return float(a2[3])
    
def calc_distance(mylist2, c1, c2):
    cust_no1 = int(c1) - 1
    cust_no2 = int(c2) - 1
    a3 = [n1 for n1 in mylist2[cust_no1].split()]
    a4 = [n2 for n2 in mylist2[cust_no2].split()]
    x1 = float(a3[1])
    y1 = float(a3[2])
    x2 = float(a4[1])
    y2 = float(a4[2])
    d = ((x2-x1)**2 + (y2-y1)**2)**0.5
    return d