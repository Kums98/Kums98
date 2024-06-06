import os
import pandas as pd 

sample = pd.DataFrame({'Yes': [123, 15], 'No': [13, 14]})
print(sample)

new_import = pd.read_csv("C:\\Users\\KUMS\\Downloads\\Bigfoot.csv", index_col=0)

print(new_import.head())

print(new_import.iloc[1:2])
new_class = new_import['Class']

print(type(new_class))

print(new_import.Class.iloc[0])


