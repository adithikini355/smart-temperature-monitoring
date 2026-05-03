import serial

ser = serial.Serial('COM3', 9600)  # change port

set_temp = 28
set_humidity = 60

while True:
    try:
        data = ser.readline().decode().strip()
        print(data)

        # Simple check
        parts = data.replace("Temp: ", "").replace(" C, Humidity: ", ",").split(",")

        if len(parts) == 2:
            temp = float(parts[0])
            hum = float(parts[1])

            if temp > set_temp:
                print("Alert: Temperature too high")

            if hum < set_humidity:
                print("Alert: Humidity too low")

    except:
        pass
