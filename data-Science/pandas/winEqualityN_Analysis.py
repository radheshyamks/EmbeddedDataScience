import os;
import subprocess;
import re;
import sys;
import pandas as pd;
import numpy as np;
#-- read the csv file using pandas library
df = pd.read_csv(r"E:/CSV/winequalityN.csv")
# print(df) # --> reading whole csv file
# print(df.head()) # --> reading first 5 rows of csv file

# print(pd.set_option("display.max_rows", None))
# print(pd.set_option("display.max_columns", None))
# print("dimention: ", df.shape)
# --> it will 
# print(df.describe)
# --> it will print all the data types of columns
# print(df.dtypes)

# --> isna and isnull will print True if value is not present
# print(df.isna())
# --> it will find all the null values in sheet
# print("all null: ", df.isna().sum().sum())
print(df[df['type']=='red'].shape)
print("total red count: ", df[df['type']=='red'].count())
# print(df['type'].value_counts())