def baca_data(nama_file): 
    file = open(nama_file)


    dict_kamus = {
        "id" : [],
        "en" : [],
        "su" : [],
        "ja" : []
    }

    teks = file.readline().replace("\n", "")
    while teks != "":
        list_kata = teks.split() 

        dict_kamus["id"].append(list_kata[0])
        dict_kamus["en"].append(list_kata[1])
        dict_kamus["su"].append(list_kata[2])
        dict_kamus["ja"].append(list_kata[3])


        teks = file.readline().replace("\n", "")

    file.close()

    return dict_kamus

def id_to_en(kamus, kata):
    idx = kamus["id"].index(kata)
    return kamus["en"][idx]

def id_to_su(kamus, kata):
    idx = kamus["id"].index(kata)
    return kamus["su"][idx]


def id_to_ja(kamus, kata):
    idx = kamus["id"].index(kata)
    return kamus["ja"][idx]


def su_to_ja(kamus, kata):
    idx = kamus["su"].index(kata)
    return kamus["ja"][idx]

#mainprogram
nama_file = "kamus.txt"
kamus = baca_data(nama_file)
terjemahan = input("Terjemahan: ")
kata = input("Kata: ")
if terjemahan == "id_to_en" :
    print(id_to_en(kamus, kata))
elif terjemahan == "id_to_su" :
    print(id_to_su(kamus, kata))
elif terjemahan == "id_to_ja" : 
    print(id_to_ja(kamus, kata))
elif terjemahan == "su_to_ja" : 
    print(su_to_ja(kamus, kata))