from selenium import webdriver
import time
import os
import subprocess
import base64
from lxml import etree
driver = webdriver.Chrome()
profile_dir = r'C:\Users\12697\AppData\Local\Google\Chrome\User Data'
chorme_options = webdriver.ChromeOptions()
chorme_options.add_argument("user-data-dir="+os.path.abspath(profile_dir))
driver = webdriver.Chrome(chorme_options=chorme_options)
driver.get('https://www.pixiv.net/ranking.php?mode=weekly&content=illust')
