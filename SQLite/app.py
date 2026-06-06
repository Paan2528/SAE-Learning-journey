# np.random = sensor จำลอง
# st.session_state = เก็บข้อมูลเก่าไว้
# pd.concat = เพิ่มข้อมูลใหม่
# st.line_chart = วาดกราฟ
# st.rerun = refresh dashboard


import streamlit as st
import pandas as pd
import numpy as np
import time
from datetime import datetime

st.set_page_config(page_title="Wind Turbine Dashboard", layout="wide")

st.title("Wind Turbine Monitoring Dashboard")

# keep data real-time in session
if "data" not in st.session_state:
    st.session_state.data = pd.DataFrame(columns=[
        "timestemp", "wind_speed", "temperature", "power_output"
    ])
# create sensor data
new_data = {
    "timestamp": datetime.now(),
    "wind_speed": np.random.uniform(2, 25),
    "temperature": np.random.uniform(20, 80),
    "power_output": np.random.uniform(100, 900)
}
# add new data
st.session_state.data = pd.concat(
    [st.session_state.data, pd.DataFrame([new_data])],
    ignore_index=True
)
df = st.session_state.data.tail(50)

# KPI cards
col1, col2, col3 = st.columns(3)

col1.metric("Wind speed", f"{df['wind_speed'].iloc[-1]:.2f} m/s")
col2.metric("Temperature", f"{df['temperature'].iloc[-1]:.2f} C")
col3.metric("Power Output", f"{df['power_output'].iloc[-1]:.2f} kW")

st.subheader("Power Output Real-Time")

st.line_chart(
    df,
    x="timestamp",
    y="power_output"
)

st.subheader("Wind Speed Real-time")

st.line_chart(
    df,
    x="timestamp",
    y="wind_speed"
)
st.subheader("Raw Data")
st.dataframe(df)

# refresh every 2 second
time.sleep(2)
st.rerun()
