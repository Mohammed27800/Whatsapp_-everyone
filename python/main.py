import pyautogui as auto

No = int(input("How many group memebers ?")) - 1
auto.sleep(3)
for i in range(No):
    auto.write("@")
    for j in range(i):
        auto.press("Down")
        # auto.sleep(1)
    auto.press("Enter")