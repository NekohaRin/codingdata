import time
start_time = time.time()
print("haloooo")
print("hello world")
a = 20
b = 51
c = 13
print(a-c+b)
print("a-c+b=")
d = 4
print(d+b-c)
#comment blabla bla bla

"""comment multiline
memakai tanda petik double"""
#variabel
print("hello baby")
print(time.time() - start_time, "detik")

#compile python menjadi bytecode
#cara mengcompile,open terminal dan tuliskan
# python -m py_compile Main.py


#variabel = tempat menyimpan data
#menaruh/assignment nilai
panjang = 9999
#pemanggilan pertama
print("Nilai a = ", a)
print("Nilai b = ", b)
print("Nilai panjang =", panjang)

#penamaan
nilai_y = 14 # dengan menggunakan underscore
# 10juta = 10000000 tidak boleh
juta10 = 10000000 # boleh
nilaiZ = 14.3 # boleh

#pemanggilan kedua
print("Nilai a = ", a)
a = 7
print("Nilai a = ", a)

#assignment indirect
x = a 

print("Nilai x = ", x)
####clu cara merubah beberapa kata sekaligus alt + click(word) 
#TIPE DATA

#integer (angka satuan)
data_integer = 3
print("data : ", data_integer)
print("- bertipe : ", type(data_integer))

#tipe data: angka dengan koma (float)
data_float = 3.9
print("data : ", data_float)
print("- bertipe : ", type(data_float))

#tipe data: kumpulan karakter (string)
data_string = "hayyy"
print("data : ", data_string)
print("- bertipe : ", type(data_string))

#tipe data: boolean(biner true/false)
data_bool = False
print("data : ", data_bool)
print("- bertipe : ", type(data_bool))

#TIPE DATA KHUSUS!!!!

print("====tipe data khusus====")

#bilangan kompleks
data_complex = complex(4,3)
print("data : ", data_complex)
print("- bertipe : ", type(data_complex))

#tipe data dari bahasa "C"
from  ctypes import c_double

data_c_double = c_double(10.4)
print("data : ", data_c_double)
print("- bertipe : ", type(data_c_double))


#LEARNING CASTING
# CASTING = MERUBAH TIPE DATA DARI SATU TIPE KE TIPE LAIN
# contoh tipe data (int, float, str, bool)

print("===BAB CASTING TIPE DATA===")

print("--INTEGER--")

data_int = 9;
print("data = ", data_int, ",type =",type(data_int))

data_float = float(data_int)
data_str   = str(data_int)
data_bool  = bool(data_int) #hasil true jika nilai bukan nol, false jika = 0

print("data = ", data_float, ",type =",type(data_float))
print("data = ", data_str, ",type =",type(data_str))
print("data = ", data_bool, ",type =",type(data_bool))

#-------------------------------

print("--FLOAT--")

data_float = 9.7;
print("data = ", data_float, ",type =",type(data_float))

data_int  = int(data_float) #angka dibulatkan kebawah 9.7=9  9.4=9
data_str  = str(data_float)
data_bool = bool(data_float) 

print("data = ", data_int, ",type =",type(data_int))
print("data = ", data_str, ",type =",type(data_str))
print("data = ", data_bool, ",type =",type(data_bool))

#-------------------------------

print("--STRING--")

data_str = 1;
print("data = ", data_str, ",type =",type(data_str))

data_int  = int(data_str) #angka dibulatkan kebawah 9.7=9  9.4=9
data_float  = float(data_str)
data_bool = bool(data_str) 

print("data = ", data_int, ",type =",type(data_int))
print("data = ", data_float, ",type =",type(data_float))
print("data = ", data_bool, ",type =",type(data_bool)) #hasil false jika kosong

#-------------------------------

print("--BOOLEAN--")

data_bool = False;
print("data = ", data_bool, ",type =",type(data_bool))

data_int  = int(data_bool) #angka dibulatkan kebawah 9.7=9  9.4=9
data_float  = float(data_bool)
data_str = str(data_bool) #harus angka

print("data = ", data_int, ",type =",type(data_int))
print("data = ", data_float, ",type =",type(data_float))
print("data = ", data_str, ",type =",type(data_str))