SIZE = 5
OUT = 0
rear = -1

values = []

def enQueue(value):
    if rear == (SIZE - 1):
        print("Nuestro queue esta lleno \n");
    else:
        rear += 1
        values.append(value)
        print('Se inserto el valor correctamente:  correctamente')


if __name__ == "__main__":
    enQueue(1)