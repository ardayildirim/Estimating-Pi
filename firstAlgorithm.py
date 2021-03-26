import random
import math

#feel free to change the number of test cases
TEST_CASE = 10 ** 6

#consider unit circle,
#we create random points with x in (-1,1) interval , y in (-1,1) interval
#if the point is in the unit circle, we increment successor by 1
successor = 0
for i in range(TEST_CASE):
    px = random.uniform(-1.0,1.0)
    py = random.uniform(-1.0,1.0)

    if( px*px + py*py <= 1.0 ):
        successor += 1


#area of unit circle is pi, area of possible point space is 4
#we expect to see that 
# pi/4 = number_of_points_in_circle / number_of_all_points

estimated_pi =  4 * successor / TEST_CASE
print("Estimation:",estimated_pi)

print(f"Error is { round( abs(math.pi - estimated_pi) / math.pi * 100,6 ) } %")
