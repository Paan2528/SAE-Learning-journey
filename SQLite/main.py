import pandas as pd
import matplotlib.pyplot as plt

data = {
    "day": ["Mon", "Tue", "Wed", "Thu", "Fri"],
    "power_output": [400, 520, 610, 580, 700],
    "temperature": [10, 15, 20, 25, 30]
}

df = pd.DataFrame(data)
print(df)

# Grahp
# plot grahp between day and power output

############# Line Chart ##########
plt.plot(df["day"], df["power_output"])

plt.title("Power Output")
plt.xlabel("day")
plt.ylabel("power")

plt.show()
############# Bar Chart ############

plt.bar(df["day"], df["power_output"])
plt.title("Power Output")
plt.xlabel("day")
plt.ylabel("power")

plt.show()

############ Scatter Plot ##########

plt.scatter(df["temperature"], df["power_output"])

plt.title("Temperature VS Power")
plt.xlabel("Temperature")
plt.ylabel("Power")

plt.show()
####################################
