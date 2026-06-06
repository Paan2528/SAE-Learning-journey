

print("____________________________________________________")
print("|-------------   Fahrenheight:   ------------------|")
tempF = input()
print("|--------------------------------------------------|")
print("|--------      Distance in Meter(m):    -----------|")
distance_m = input()

# weight_kg = input()


def converter_Temp():
    print("|--------------------------------------------------|")
    print("|                                                  |")

    print("|----------Celcuis(C) to Fahrenheit(F)-------------|")
    tempC = (float(tempF) - int(32))*(5/9)
    print(f"|-------------Result:{int(tempC)} C.------------------------|")

    print("|**************************************************|")
    print("|                                                  |")


def converter_Distance():
    print("|--------------------------------------------------|")
    print("|                                                  |")
    print("|--------Distance kilometer(km) to meter(m)--------|")
    distance_km = float(distance_m) / 100
    print(
        f"|-------------Result:{int(distance_km)} km.------------------------|")
    print("|                                                  |")
    print("|--------------------------------------------------|")


result_Temp = converter_Temp()
result_Dist = converter_Distance()
