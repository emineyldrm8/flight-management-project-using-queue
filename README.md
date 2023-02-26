# flight-management-project-using-queue
flight management project using queue
# PROJE TANIMI
Bu projenin amacı priority queue yapısını kullanarak
bir havalimanı uc¸us¸ yonetim sistemi olus¸turmaktır.Bunun ¨
ic¸in oncelikle kuyruk yapısının ve priority queue yapısnın ¨
bilinmesi gerekir.
Kuyruk, ilk giren eleman ilk c¸ıkar (First In First Out
– FIFO) mantıgında c¸alıs¸an bir veri yapısıdır. ˘ Orne ¨ gin, ˘
kuyruk veri yapısı bankada is¸lem yaptırmak ic¸in sıraya
girmis¸ insanlara benzetilebilir. Sıraya ilk giren kis¸i ilk
is¸lem yaptıracaktır. Kuyruk tasarımı ic¸in dizi ya da baglı ˘
liste kullanılabilir. Dizi kullanılan sabit boyutlu, baglı liste ˘
kullanılarak degis¸ken boyutlu kuyruk olus¸turulabilir. Kuyrukta ˘
is¸lemler iki uc¸tan yapılır. Kuyruk veri yapısında yapılabilecek
is¸lemlerden bazıları as¸agıdaki gibidir: ˘
1. enqueue(): Kuyrugun ˘ on¨ une eleman ekler. ¨
2. dequeue(): Kuyrugun sonundan eleman c¸ıkarır. ˘
3. peek(): Silme is¸lemi uygulamadan sıradaki elemanı (front
is¸aretc¸isinin gosterdi ¨ gi d ˘ u¨g˘um) d ¨ ond ¨ ur¨ ur. ¨
Bazı problemlerin c¸oz¨ um¨ unde do ¨ grudan kuyruk ˘
olus¸turulamaz. Orne ¨ gin; bir hastanede muayene sırasına ˘
girmis¸ insanlar arasında durumu acil olan birisi bulunabilir
ve bu kis¸i muayene ic¸in oncelikli hale gelebilir. Bu gibi ¨
durumlarda oncelikli kuyruk kullanılır. ¨ Oncelikli kuyrukta ilk ¨
giren ilk c¸ıkar mantıgı gec¸erli de ˘ gildir, ˘ onemli olan ¨ onceliktir. ¨
Oncelikli kuyruk veri yapısında yapılabilecek is¸lemlerden ¨
bazıları as¸agıdaki gibidir:
1. add(): Kuyruga eleman eklemek ic¸in kullanılır. ˘
2. poll(): Kuyruktaki son elemanı dond ¨ ur¨ ur ve elemanı ¨
kuyruktan siler.
3. peek(): Kuyruktaki son elemanı silmeden dond ¨ ur¨ ur. ¨
4. clear(): Kuyruktaki but¨ un elemanları siler. ¨
5. remove(): Kuyruktaki belirtilen elemanı siler.

# PROJE KONUSU
1 inis¸ 1 kalkıs¸ olmak uzere 2 pisti bulunan ¨
˙Istanbul
Havalimanı’nda gun ic¸erisinde (1-24 saat dilimi boyunca) ¨
yapılan uc¸us¸ların yonetimi ic¸in bir sistem gelis¸tirilecektir. ¨
Havalimanında aynı anda sadece 1 uc¸ak kalkıs¸ yapabiliyorken
sadece 1 uc¸ak inis¸ yapabilmektedir. Uc¸akların her biri inis¸
ve kalkıs¸ta farklı onceliklere sahiptir ve 1 g ¨ unde maksimum ¨
24 uc¸ak inis¸ ic¸in izin isteyebilmektedir. Havalimanındaki
uc¸akların oncelik sırası, inis¸ saati, gecikme s ¨ uresi ve kalkıs¸ ¨
saati bilgileri kullanılarak;inis¸ pistini ve kalkıs¸ pistini kullanım
sırasının belirlenmesi hedeflenmektedir Havalimanına inis¸
yapacak uc¸aklar oncelikle kuleden inis¸ yapabilmek ic¸in izin ¨
talep etmelidir.
1. ˙Inis¸ izni talep eden her bir uc¸ak ic¸in havalimanında
yeterli kapasite olup olmadıgı kontrol edilmelidir ˘
(inis pisti kullanim sirasi oncelikli kuyru ¨ gunda yeni uc¸ak ˘
eklemek ic¸in bos¸ alan var mı?).
2. Kuleden inis¸ izni talep eden uc¸aklar ic¸in oncelikle, ¨
inis¸ talep edilen saatte pistin dolu mu bos¸ mu oldugu˘
kontrol edilmelidir. Pist bos¸ ise inis¸ yapılmak istenen saate
izin verilmeli ve inis pisti kullanim sirasi’nda uygun yere
eklenmelidir. Aksi halde uc¸akların inis¸ sıralaması onceli ¨ ge˘
gore belirlenmelidir. ¨
3. ˙Inis¸ izni talep eden her uc¸ak ic¸in “˙Inis¸ izin
talebiniz onaylanmıs¸tır” veya “. . . nedeniyle inis¸ izni
verilememektedir.” s¸eklinde ekranda yazdırılmalıdır.
4. Uc¸akların inis¸ ve kalkıs¸ saatleri onceli ¨ ge g ˘ ore ¨
belirlenecektir. Uc¸akların oncelik (oncelik ¨ id) sıralaması
s¸u s¸ekildedir (yuksekten d ¨ us¸¨ u¨ge): ˘
1. Ambulans ucagı
2. Savas ucagı
3. Yolcu ucagı
4. Kargo ucagı
5. Havalimanına inis¸ talep eden uc¸akların onceli ¨ gi˘
(oncelik id), uc¸ak numarası (ucak id) ve talep ettigi˘
inis¸ saati (talep edilen inis saati) input.txt dosyasından
okunacaktır.
6. Tum uc¸akların inis¸ ve kalkıs¸ s ¨ ureleri es¸ittir ve hesaplamalara ¨
dahil edilmeyecektir. ˆ
7. Havalimanına inis¸ yapan her uc¸agın, kalkıs¸ ic¸in bekleme ˘
suresi 1 saattir. Uc¸akların kalkıs¸ saatine, ¨ otelenmeden dolayı ¨
olus¸an gecikme sureleri d ¨ ahil edilmelidir. Kalkıs¸ saati bu ˆ
bilgilergoz¨ on¨ unde bulundurularak hesaplanmalıdır. ¨
8. Aynı onceli ¨ ge sahip iki uc¸ak, aynı saatte kalkıs¸ yapacaksa ˘
oncelik ilk inis¸ yapan uc¸a ¨ ga verilmelidir. ˘
9. Onceli ¨ gi y ˘ uksek olan uc¸aklar nedeniyle ¨ onceli ¨ gi˘
dus¸¨ uk olan herhangi bir uc¸a ¨ gın uc¸us¸u,maksimum 3 kez ˘
ertelenebilir. Eger 3’ten fazla ertelenme durumu s ˘ oz¨
konusuysa, oncelik g ¨ ozetilmeksizin beklemede olan uc¸a ¨ gın ˘
kalkıs¸ı gerc¸ekles¸tirilmelidir.
10. Kuleden bir gunde maksimum 24 uc¸ak inis¸ ic¸in ¨
izin talep edebilir. Eger bu kapasite dolmus¸sa;o ˘
˙Inis¸ ic¸in
onay alan uc¸aklardan en az birinin onceli ¨ gi (X uc¸a ˘ gı olsun), ˘
inis¸ izni onayı bekleyen uc¸agın (Y uc¸a ˘ gı olsun) ˘ onceli ¨ ginden ˘
dus¸¨ ukse; y ¨ uksek ¨ oncelikli yeni uc¸a ¨ ga (Y) inis¸ onayı verilir. ˘
Daha once onay almıs¸ ve ¨ onceli ¨ gi d ˘ us¸¨ uk olan uc¸ak (X) bas¸ka ¨
bir havalimanına yonlendirilmelidir. ¨
11. ˙Inis¸ izni daha onceden onaylanan uc¸a ¨ gın (X) izni ˘
iptal edilmis¸se; “Acil inis¸ yapması gereken . . . (Y) uc¸agı˘
nedeniyle inis¸ izniniz iptal edilmis¸tir, inis¸ ic¸in Sabiha Gokc¸en ¨
Havalimanı’na yonlendiriliyorsunuz.” s¸eklinde ekranda ¨
yazdırılmalıdır.
# ARAŞTIRMALAR VE YÖNTEM
Bu projeyi yapabilmek ic¸in ilk once is¸e kuyruk ve ¨
oncelikli kuruk yapısını ¨ o¨grenerek bas¸ladık.Daha sonra bu ˘
yapıları kullanarak nasıl bir yol izlememiz gerektigini ˘
olus¸turduk.Projemizdeki uc¸ak bilgilerini dizi ile degil ba ˘ gı˘
liste ile tutmaya karar verdik.C¸ unk ¨ u b ¨ oylece daha esnek ¨
bir veri yapısı kullanabilecek ve is¸lemlerimizi daha ozg ¨ urce ¨
gerc¸ekles¸tirebilecektik.
A. Fonksiyon ˙Ismi ve Ac¸ıklamaları
1) InisDugumu* yeniInis Fonksiyonu: Bu fonksiyon inen
uc¸aklar listesine eklenmek ic¸in olus¸turulması gereken yeni
du¨g˘um¨ u olus¸turur.Bunun ic¸in gec¸ici bir temp d ¨ u¨g˘um¨ unden ¨
yararlanır.
2) KalkisDugumu* yeniKalkis Fonksiyonu: Bu fonksiyon
kalkan uc¸aklar listesine eklenmek ic¸in olus¸turulması
gereken yeni du¨g˘um¨ u olus¸turur.Bunun ic¸in gec¸ici bir temp ¨
du¨g˘um¨ unden yararlanır. ¨
3) InisPeek Fonksiyonu: ˙Inis¸ kuyrugundaki ilk elemnı geri ˘
dond ¨ ur¨ ur. ¨
4) printKalkisPistDurumu Fonksiyonu: Kalkıs¸
durumundaki uc¸akların listesini ekrana yazdırı.Ayrıca
output dosyasına da bu listesi gec¸irir.
5) pop Fonksiyonu: ˙Inis¸ listesindeki ilk elemanı siler.
6) kalkisEkle Fonksiyonu: Kalkıs¸ ic¸in yeni olus¸turulan
elemanı kalkıs¸ kuyruguna ekler. ˘
7) InisEkle Fonksiyonu: ˙Inis¸ ic¸in olus¸turulan yeni elemanı
inis¸ kuyruguna ekler. ˘
8) isEmpty Fonksiyonu: ˙Inis¸ kuyrugu dolu mu bos¸ mu ˘
kontrol eder.

# PROGRAMIN DERLENMESİ
Olus¸turdugumuz kodu CodeBlockes,Dev-C++ gibi derleyici ˘
kullanarak derleyebilirsiniz.Biz Dev-c++ derleyicisini kullanmayı tercih ettik.Kodumuzu da bu derleyici uzerinde yazdık

# SCREENSHOTS
![image](https://user-images.githubusercontent.com/73225797/221413205-3a381efd-9c1a-44d1-986c-8763d20b643e.png)
![image](https://user-images.githubusercontent.com/73225797/221413227-6b15ab68-72a4-47df-be77-dfc170f32215.png)



