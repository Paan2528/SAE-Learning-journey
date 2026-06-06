import pandas as pd
import matplotlib.pyplot as plt

data = {
    "temperature": [10, 15, 20, 25, 30],
    "power_output": [200, 350, 500, 650, 800]
}
df = pd.DataFrame(data)

plt.scatter(df["temperature"], df["power_output"])

plt.title("Temperature VS Power")
plt.xlabel("Temperature")
plt.ylabel("Power")

plt.show()
