mapaHexadecimal = {
        '0000': '0',
        '0001': '1',
        '0010': '2',
        '0011': '3',
        '0100': '4',
        '0101': '5',
        '0110': '6',
        '0111': '7',
        '1000': '8',
        '1001': '9',
        '1010': 'A',
        '1011': 'B',
        '1100': 'C',
        '1101': 'D',
        '1110': 'E',
        '1111': 'F'
    }

def converterHexa(numero):
    return mapaHexadecimal.get(numero)

codigoErro = str(input())

parte1 = '0x' + converterHexa(codigoErro[:4]) + converterHexa(codigoErro[4:8])
parte2 = '0x' + converterHexa(codigoErro[8:12]) + converterHexa(codigoErro[12:])
codigoConvertido = parte1 + ' ' + parte2
print(codigoConvertido)