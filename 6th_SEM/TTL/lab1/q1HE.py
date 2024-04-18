meter = int(input("enter distance in meter"))

km = meter // 1000
meter = meter % 1000

print("the distance is {} km and {} meters.".format(km,meter))