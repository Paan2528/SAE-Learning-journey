import pandas as pd
import sqlite3

df = pd.read_csv("unisolar/Weather_Data_reordered_all.csv",
                 sep=",",
                 encoding="latin1",
                 on_bad_lines="skip")

print(df.info())
print(df.columns.tolist())
print(df.head())

conn = sqlite3.connect("weather_data.db")
df.to_sql("Weather_Data_reordered_all",
          conn, if_exists="replace", index=False)

query = """
SELECT 
    CampusKey,
    Timestamp,
    AirTemperature,
    WindSpeed,
    WindDirection
FROM Weather_Data_reordered_all

"""
df = pd.read_sql(query, conn)
print(df)

query = """
CREATE TABLE IF NOT EXISTS weather_database(
    id INTEGER PRIMARY KEY,
    CampusKey INTERGER,
    Timestamp TEXT,
    AirTemperature REAL,
    WindSpeed REAL,
    WindDirection REAL
);

"""
# conn.execute(query)
# conn.commit()
# print(df)
df.to_sql("weather_database ",
          conn,
          if_exists="replace",
          index=False)

query = """
WITH avg_data AS (
    SELECT 
        CampusKey,
        Timestamp,
        AVG (AirTemperature) AS avg_data,
        AVG (WindSpeed) AS avg_data,
        AVG (WindDirection) AS avg_dat 
    FROM weather_database
    GROUP BY CampusKey )
SELECT *
FROM avg_data;
"""
df_result = pd.read_sql(query, conn)
print(df_result)

conn.close()
