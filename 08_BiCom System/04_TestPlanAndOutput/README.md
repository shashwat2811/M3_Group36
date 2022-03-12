# Test Plan and Output for the System

## High level test plan

| ID | Description | Input | Expected output | Actual output | Status |
| -- | ---------- | ----- | ------------ | ---------- | -------- |
| 01 | Button | Press it | LED_13 on | LED_13 on | ✅ |
| 02 | LED_12 | Read pin | on | on | ✅ |
| 03 | All LED | Press button | on | on | ✅ |

## Low level test plan
| ID | Description | Input | Expected output | Actual output | Status |
| -- | ---------- | ----- | ------------ | ---------- | -------- |
| 01 | Button | Press it | LED_13 on | LED_13 on | ✅ |
| 02 | Count 1 | Pess button 1 time | All LED glow | All LED glow | ✅ |
| 03 | Count 2 | Press button 2 time | All LED off | All LED off | ✅ |
| 04 | Count 3 | Press button 3 time | All LED on clockwise | All LED on clockwise | ✅ |
| 03 | Count 2 | Press button 4 time | All LED on anticlockwise | All LED on anticlockwise | ✅ |
