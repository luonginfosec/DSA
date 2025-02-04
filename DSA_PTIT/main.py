import win32gui
import win32con
import time

target_title = "NEMO - CHÀO XUÂN 2025"
# target_title = "Paint"
found_hwnd = None

def enum_handler(hwnd, _):
    global found_hwnd
    if win32gui.IsWindowVisible(hwnd):
        title = win32gui.GetWindowText(hwnd)
        if target_title in title:
            found_hwnd = hwnd
            print(f"Found window: {hwnd} - {title}")

win32gui.EnumWindows(enum_handler, None)

if not found_hwnd:
    print(f" '{target_title}'.")
    exit(1)

client_rect = win32gui.GetClientRect(found_hwnd)
client_width = client_rect[2] - client_rect[0]
client_height = client_rect[3] - client_rect[1]
print(f": {client_width} x {client_height}")

base_width = 1920
base_height = 1080
target_x = 1100
target_y = 850

relative_x = target_x / base_width
relative_y = target_y / base_height

click_x = int(client_width * relative_x)
click_y = int(client_height * relative_y)

offset_x = 50
offset_y = -15

click_x += offset_x
click_y += offset_y

print(f": ({click_x}, {click_y})")

lParam = (click_y << 16) | (click_x & 0xFFFF)

try:
    while True:
        win32gui.PostMessage(found_hwnd, win32con.WM_LBUTTONDOWN, win32con.MK_LBUTTON, lParam)
        win32gui.PostMessage(found_hwnd, win32con.WM_LBUTTONUP, 0, lParam)
        time.sleep(1)
except KeyboardInterrupt:
    print(".")
