/*

Шифрование открытого текста 'z' по ключу '&' - получаем зашифрованный текст '\':

    00100110 (ASCII код для &)
XOR
    01111010 (ASCII код для z) 
    --------
    01011100 (ASCII код для \)

Дешифрование '\' по ключу '&' - получаем открытый текст 'z':

    00100110 (ASCII код для &)
XOR
    01011100 (ASCII код для \) 
    --------
    01111010 (ASCII код для z)
*/



