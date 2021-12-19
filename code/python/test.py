# -*- coding:utf-8 -*-
import requests
from bs4 import BeautifulSoup
import os
import time
import re
import random

se = requests.session() 


class Pixiv():

    def __init__(self):
        self.base_url = 'https://accounts.pixiv.net/login?lang=zh&source=pc&view_type=page&ref=wwwtop_accounts_index'
        self.login_url = 'https://accounts.pixiv.net/login?lang=zh'
        self.target_url = 'https://www.pixiv.net/ranking_area.php?type=detail&no=6'
        self.main_url = 'http://www.pixiv.net'
        self.headers = {
            'Referer': 'https://accounts.pixiv.net/login?lang=zh&source=pc&view_type=page&ref=wwwtop_accounts_index',
            'User-Agent': 'Mozilla/5.0 (Windows NT 6.3; WOW64) '
                          'AppleWebKit/537.36 (KHTML, like Gecko) Chrome/58.0.3013.3 Safari/537.36'
        }
        self.pixiv_id = '1269736732@qq.com'
        self.password = 'cmj263618'
        self.post_key = []
        self.return_to = 'http://www.pixiv.net/'
        self.rank = 0 

    def login(self):
        post_key_html = se.get(self.base_url, headers=self.headers).text
        post_key_soup = BeautifulSoup(post_key_html, 'lxml')
        self.post_key = post_key_soup.find('input')['value']
        # 上面是去捕获postkey
        data = {
            'pixiv_id': self.pixiv_id,
            'password': self.password,
            'return_to': self.return_to,
            'post_key': self.post_key
        }
        se.post(self.login_url, data=data, headers=self.headers)

    def get_url(self):
        html_rank = requests.get(self.target_url).text 
        soup = BeautifulSoup(html_rank, 'lxml') 
        list = soup.select("div > div.work_wrapper ") 
        for x in list:
            y=str(x) 
            id=re.findall(r"href=\"(.+?)\"",y,re.I) 
            url = "https://www.pixiv.net/"+id[0]  # 获取图片的html
            jump_to_html=se.get(url, headers=self.headers).text 
            img_soup = BeautifulSoup(jump_to_html, 'lxml') 
            img_info = img_soup.find('div', attrs={'class', '_layout-thumbnail ui-modal-trigger'}) 
            img_original = img_soup.find('img', attrs={'class', 'original-image'}) 
            self.rank += 1 
            if img_original !=None:  # 有些找不到url,continue会报错
                img_ori_url =re.findall(r"src=\"(.+?)\"",str(img_original),re.I)[0] 
                self.download_img(img_info, url,img_ori_url)  # 去下载这个图片
            else:
                many_url = url.replace("medium&amp;illust","manga&illust")
                print(url) 
                print(many_url)
                self.download_many_img(img_info,many_url)

    def download_img(self, img_info,url,img_ori_url):
        title = img_info.find('img')['alt']  # 提取标题
        src = img_ori_url   # 提取图片位置       
        src_headers = self.headers
        src_headers['Referer'] = url  # 增加一个referer,否则会403,referer就像上面登陆一样找
        try:
            html = requests.get(src, headers=src_headers)
            img = html.content
        except:  # 有时候会发生错误导致不能获取图片.直接跳过这张图吧
            print('获取该图片失败')
            return False

        title = title.replace('?', '_').replace('/', '_').replace('\\', '_').replace('*', '_').replace('|', '_')\
            .replace('>', '_').replace('<', '_').replace(':', '_').replace('"', '_').strip()
        # 去掉那些不能在文件名里面的.记得加上strip()去掉换行
        print('正在保存名字排行第{}的图片'.format(self.rank))
        with open("{}.".format(self.rank) + title + '.jpg', 'ab') as f:  # 图片要用b
            f.write(img)
        print('保存该图片完毕')
    def download_many_img(self, img_info,many_url):
        src_headers = self.headers 
        src_headers['Referer'] = many_url # 增加一个referer,否则会403,referer就像上面登陆一样找
        html = requests.get(many_url, headers=src_headers) 
        soup = BeautifulSoup(html.content, 'lxml')
        total = soup.find('span', attrs={'class', 'total'}).get_text() 
        title = soup.find("title").get_text() 
        title = title.replace('?', '_').replace('/', '_').replace('\\', '_').replace('*', '_').replace('|', '_')\
            .replace('>', '_').replace('<', '_').replace(':', '_').replace('"', '_').strip()
        # 去掉那些不能在文件名里面的.记得加上strip()去掉换行
        img_many = soup.find_all('img', attrs={'class', 'image ui-scroll-view'}) 
        for x in range(eval(total)):
            img_many_url = re.findall(r"data-src=\"(.+?)\"",str(img_many),re.I)[x] 
            print('正在保存名字排行第{}的图片第{}张'.format(self.rank,x+1)) 
            src_headers = self.headers
            src_headers['Referer'] = img_many_url   # 增加一个referer,否则会403,referer就像上面登陆一样找
            html = requests.get(img_many_url,headers=src_headers) 
            img = html.content
            with open("{}.".format(self.rank) + title +"{}".format(x+1)+ '.jpg', 'ab') as f:  # 图片要用b
                f.write(img)
            print('保存该图片完毕')

    def work(self):
        self.login() 
        self.get_url() 


pix=Pixiv() 
pix.work() 