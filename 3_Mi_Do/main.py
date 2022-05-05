#!/usr/bin/env python3
"""
.. moduleauthor:: Mi Do <thi.do@bulme.at>
"""
import sys

import equations
import addition
import conversion
import geometry
import business
import rot13
import vrptw_reader
from math import pi
from math import hypot

"""Main module of this homework."""

def main():

    #1. Equations
    def testequations():
        print('equations.quadratic(a, b, c); expected: x1 = 2\nx2 = -3, actual:',
          equations.quadratic(1, 1, -6))
        x1, x2 = equations.quadratic(1, 1, -6)
        if (x1 == x1 and x2 == x2) or (x1 == x2 and x2 == x1):
            return 0
        else:
            return 1
            
            
    #2. Integer Addition
    def testsuminteger():
        print('addition.sum_to(10); expected: 55, actual:',
          addition.sum_to(10))
        if 55 == addition.sum_to(10):
            return 0
        else:
            return 1
    
    
    #3. Conversion
    def testconversion():
        print('conversion.celsius2fahrenheit(celsius); expected: 87.8, actual:',
          conversion.celsius2fahrenheit(31))
        if 87.8 == conversion.celsius2fahrenheit(31):
            return 0
        else:
            return 1
    
    
    def testconversion2():    
        print('conversion.fahrenheit2celsius(fahrenheit); expected: -32/ 1.8, actual:', 
          conversion.fahrenheit2celsius(0))
        if -32/ 1.8 == conversion.fahrenheit2celsius(0):
            return 0
        else:
            return 1
    
        
    #4. Geometry
    #4.1. Perimeter of right triangle
    def testperitriangle():
        print('geometry.perimeter_right_triangle(c1, c2); expected: 12.0, actual:', 
          geometry.perimeter_right_triangle(4, 3))
        if geometry.perimeter_right_triangle(4, 3) == 12.0:
            return 0
        else:
            return 1
    
        
    #4.2. Area of right triangle
    def testareatriangle():
        print('geometry.area_right_triangle(4, 3); expected: 6.0, actual:', 
          geometry.area_right_triangle(4, 3))
        if geometry.area_right_triangle(4, 3) == 6.0:
            return 0
        else:
            return 1
    
        
    #4.3. Perimeter of a circle
    def testpericircle():
        print('geometry.perimeter_circle(r); expected: 2.5 * 2 * pi, actual:',
          geometry.perimeter_circle(2.5))
        if geometry.perimeter_circle(2.5) == 2.5 * 2 * pi:
            return 0
        else:
            return 1
    
    
    #4.4. Area of a circle
    def testareacircle():
        print('geometry.area_circle(r); expected: 2.5 * 2.5 * pi, actual:',
          geometry.area_circle(2.5))
        if geometry.area_circle(2.5) == 2.5 * 2.5 * pi:
            return 0
        else:
            return 1
    
    
    #4.5. Surface of a sphere
    def testsurfacecircle():
        print('geometry.surface_sphere(r); expected: ',4 * pi * 2.5 * 2.5,' actual:',
          geometry.surface_sphere(2.5))
        if geometry.surface_sphere(2.5) == 4 * pi * 2.5 * 2.5:
            return 0
        else:
            return 1
    
        
    #4.6. Volume of a sphere
    def testvolsphere():
        print('geometry.volume_sphere(r); expected:',(4 / 3) * pi * 2.5**3,' actual:',
          geometry.volume_sphere(2.5))
        if geometry.volume_sphere(2.5) == (4 / 3) * pi * 2.5**3:
            return 0
        else:
            return 1
    
    
    #4.7. Surface of a cylinder
    def testsurfacecy():
        print('geometry.surface_cylinder(r, h); expected:',2*pi,'actual:',
          geometry.surface_cylinder(1, 0))
        if geometry.surface_cylinder(1, 0) == 2 * pi:
            return 0
        else:
            return 1
    
    
    #4.8. Volume of a cylinder
    def testvolcy():
        print('geometry.volume_cylinder(r, h); expected:',pi,'actual:',
          geometry.volume_cylinder(1, 1))
        if geometry.volume_cylinder(1, 1) == pi:
            return 0
        else:
            return 1
    
        
    #4.9. Surface of a cone
    def testsurcone():
        print('geometry.surface_cone(r, h); expected:',pi + hypot(1, 1) * pi,'actual:',
          geometry.surface_cone(1, 1))
        if geometry.surface_cone(1, 1) == pi + hypot(1, 1) * pi:
            return 0
        else:
            return 1
    
        
    #4.10. Volume of a cone
    def testvolcone():
        print('geometry.volume_cone(r, h); expected:',pi / 3.0,'actual:',
          geometry.volume_cone(1, 1))
        if geometry.volume_cone(1, 1) == pi / 3.0:
            return 0
        else:
            return 1
    
    
    #5. Business
    def testinterest():
        print('business.interest(capital, rate, years=1, tax=0); expected: 16.64, actual:',
          business.interest(100, 0.1, 2, 0.2))
        if 16.64 == business.interest(100, 0.1, 2, 0.2):
            return 0
        else:
            return 1
    
    
    def testterminal():
        print('business.terminal_value(capital, rate, years=1, tax=0)); expected: 121, actual:',
          business.terminal_value(100, 0.1, 2))
        if 121 == business.terminal_value(100, 0.1, 2):
            return 0
        else:
            return 1
        
    #6. Rot13
    s_eng = "Never trust a program you don't have sources for."
    s_encrypted = "Arire gehfg n cebtenz lbh qba'g unir fbheprf sbe."
    def rot13encode():
        print("rot13.encode(s); expected: Arire gehfg n cebtenz lbh qba'g unir fbheprf sbe., actual:",
          rot13.encode(s_eng).lower())
        s1 = rot13.encode(s_eng)
        if s1 == s_encrypted.upper():
            return 0
        else:
            return 1

    
    def rot13decode():      
        print("rot13.decode(sd); expected: Never trust a program you don't have sources for., actual:",
          rot13.decode(s_encrypted).lower())
        s2 = rot13.encode(s_encrypted)
        if s2 == s_eng.upper():
            return 0
        else:
            return 1

          
    #7&8. VRPTW InstancesS
    #7&8.1. Test read_string_list
    def testreadstr():
        n1 = '    1      35.00      35.00       0.00       0.00     230.00       0.00\n'
        print("vrptw_reader.read_string_list(file='r101'); expected: ",n1,", actual:",
          vrptw_reader.read_string_list("r101")[0])
        str0 = vrptw_reader.read_string_list("r101")[0]
        if n1 == str0:
            return 0
        else:
            return 1

    
    #7&8.2. Test get_demand
    def testdemand():
        i1 = []
        count = 0
        with open('r101.txt', 'r') as file:
            for line in file:
                count += 1
                if count >= 2:
                    i1.append(line)
        
        
        print("vrptw_reader.get_demand(i1, cust_no); expected: 9.0, actual: ",
          vrptw_reader.get_demand(i1, 9))
        if 9.0 == vrptw_reader.get_demand(i1, 9):
            return 0
        else:
            return 1

    
    #7&8.3. Test calc_distance
    def testdistance():
        mylist2 = []
        count = 0
        with open('r101.txt', 'r') as file:
            for line in file:
                count += 1
                if count >= 2:
                    mylist2.append(line)
        print("vrptw_reader.calc_distance(mylist2, c1, c2); expected: 18.0, actual: ",
          vrptw_reader.calc_distance(mylist2, 1, 3))
        if 18.0 == vrptw_reader.calc_distance(mylist2, 1, 3):
            return 0
        else:
            return 1
    
    if (testequations()==0 and \
        testsuminteger()==0 and \
        testconversion()==0 and \
        testconversion2()==0 and \
        testperitriangle()==0 and \
        testareatriangle()==0 and \
        testpericircle()==0 and \
        testareacircle()==0 and \
        testsurfacecircle()==0 and \
        testvolsphere()==0 and \
        testsurfacecy()==0 and \
        testvolcy()==0 and \
        testsurcone()==0 and \
        testvolcone()==0 and \
        testinterest()==0 and \
        testterminal()==0 and \
        rot13encode()==0 and \
        rot13decode()==0 and \
        testreadstr()==0 and \
        testdemand()==0 and \
        testdistance()==0):
        return 0
    else: 
        return 1
        
          

    

    

if __name__ == "__main__":
    sys.exit.main()