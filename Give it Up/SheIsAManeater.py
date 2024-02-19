import ctypes

# Carga la biblioteca compartida (.so)
lib_ejemplo = ctypes.CDLL('./IWillSurvive.so')

# Define el prototipo de la función
lib_ejemplo.findOriginalLength.argtypes = (ctypes.POINTER(ctypes.c_int), ctypes.c_int)
lib_ejemplo.findOriginalLength.restype = ctypes.c_int

while True:
    num_parts = int(input())
    
    if num_parts == 0:
        break

    parts = (ctypes.c_int * num_parts)(*map(int, input().split()))

    # Llama a la función desde la biblioteca compartida
    result = lib_ejemplo.findOriginalLength(parts, num_parts)

    # Imprime el resultado
    print(result)
