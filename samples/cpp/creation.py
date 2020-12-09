
# -*- coding: utf-8 -*

# use : python creation.py 4_1_7 4_1_8

import sys
import os
import shutil

input_dir = sys.argv[1]
output_dir = sys.argv[2]

source_path = os.path.abspath(input_dir)
target_path = os.path.abspath(output_dir)

if not os.path.exists(target_path):
    # 如果目标路径不存在原文件夹的话就创建
    os.makedirs(target_path)

if os.path.exists(source_path):
    # 如果目标路径存在原文件夹的话就先删除
    shutil.rmtree(target_path)

# 复制目录
shutil.copytree(source_path, target_path)

# 删除其他文件
templist = os.listdir(target_path)
for name in templist:
    fullname = os.path.join(target_path, name)
    if(os.path.isdir(fullname) == False):
        if( (fullname[-3:].lower()=="cpp") or (fullname[-3:].lower()=="hpp") or 
        (fullname[-1:].lower()=="c") or (fullname[-1:].lower()=="h") or 
        (name.lower() == "makefile") ):
            pass
        else:
            os.remove(fullname)

#改名
os.rename(target_path + "/" + input_dir + ".cpp", target_path + "/" + output_dir + ".cpp")

#改makefile
f = open(target_path + "/makefile", 'r')
str = f.read()
f.close()
new_str = str.replace(input_dir, output_dir)

f = open(target_path + "/makefile", 'w+')
f.write(new_str)
f.close()

