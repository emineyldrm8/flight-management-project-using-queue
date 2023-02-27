# flight-management-project-using-queue
flight management project using queue
# PROJE TANIMI
Bu projenin amacı priority queue yapısını kullanarak
bir havalimanı uçuş yönetim sistemi oluşturmaktır.Bunun
için öncelikle kuyruk yapısının ve priority queue yapısnın
bilinmesi gerekir.
Kuyruk, ilk giren eleman ilk çıkar (First In First Out
– FIFO) mantıgında çalışan bir veri yapısıdır.Örneğin,
kuyruk veri yapısı bankada işlem yaptırmak için sıraya
girmiş insanlara benzetilebilir. Sıraya ilk giren kişilik
işlem yaptıracaktır. Kuyruk tasarımı için dizi ya da bağlı
liste kullanılabilir. Dizi kullanılan sabit boyutlu, bağlı liste 
kullanılarak değişken boyutlu kuyruk oluşturulabilir. Kuyrukta 
işlemler iki uçtan yapılır. Kuyruk veri yapısında yapılabilecek
işlemlerden bazıları aşağıdaki gibidir: 
1. enqueue(): Kuyrugun önüne eleman ekler. 
2. dequeue(): Kuyrugun sonundan eleman çıkarır. 
3. peek(): Silme işlemi uygulamadan sıradaki elemanı (front
işaretçisinin gösterdiği düğüm) döndürür. 
Bazı problemlerin çözümünde doğrudan kuyruk 
oluşturulamaz.Örneğin; bir hastanede muayene sırasına 
girmiş insanlar arasında durumu acil olan birisi bulunabilir
ve bu kişi muayene için öncelikli hale gelebilir. Bu gibi 
durumlarda öncelikli kuyruk kullanılır.Öncelikli kuyrukta ilk 
giren ilk çıkar mantığı geçerli değildir,önemli olan önceliktir. 
Öncelikli kuyruk veri yapısında yapılabilecek işlemlerden 
bazıları aşağıdaki gibidir:
1. add(): Kuyruga eleman eklemek için kullanılır. 
2. poll(): Kuyruktaki son elemanı dondürür ve elemanı 
kuyruktan siler.
3. peek(): Kuyruktaki son elemanı silmeden döndürür.
4. clear(): Kuyruktaki bütün elemanları siler. 
5. remove(): Kuyruktaki belirtilen elemanı siler.

# PROJE KONUSU
1 iniş¸ 1 kalkış¸ olmak uzere 2 pisti bulunan
İstanbul
Havalimanı’nda gün içerisinde (1-24 saat dilimi boyunca) 
yapılan uçuşların yonetimi için bir sistem geliştirilecektir.
Havalimanında aynı anda sadece 1 uçak kalkış¸ yapabiliyorken
sadece 1 uçak iniş yapabilmektedir. Uçakların her biri iniş
ve kalkışta farklı önceliklere sahiptir ve 1 günde maksimum 
24 uçak iniş için izin isteyebilmektedir. Havalimanındaki
uçakların öncelik sırası, inis¸ saati, gecikme süresi ve kalkış,
saati bilgileri kullanılarak;iniş pistini ve kalkış pistini kullanım
sırasının belirlenmesi hedeflenmektedir Havalimanına iniş
yapacak uçaklar öncelikle kuleden iniş yapabilmek için izin
talep etmelidir.
1.İniş izni talep eden her bir uçak için havalimanında
yeterli kapasite olup olmadığı kontrol edilmelidir.
(iniş pisti kullanim sirasi öncelikli kuyruğunda yeni uçak
eklemek için boş alan var mı?). <br> </br>
2. Kuleden iniş izni talep eden uçaklar için öncelikle, 
iniş talep edilen saatte pistin dolu mu boş mu olduğu
kontrol edilmelidir. Pist boş ise iniş yapılmak istenen saate
izin verilmeli ve iniş pisti kullanım sırasında uygun yere
eklenmelidir. Aksi halde uçakların iniş sıralaması önceliğe göre belirlenmelidir. <br> </br>
3. İniş izni talep eden her uçak için “İniş izin
talebiniz onaylanmıştır” veya “. . . nedeniyle iniş izni
verilememektedir.” şeklinde ekranda yazdırılmalıdır. <br> </br>
4. Uçakların iniş ve kalkış saatleri önceliğe göre
belirlenecektir. Uçakların öncelik (öncelik  id) sıralaması
şu şekildedir (yuksekten düşüğe): <br> </br>
1. Ambulans ucagı<br> </br>
2. Savas ucagı<br> </br>
3. Yolcu ucagı<br> </br>
4. Kargo ucagı<br> </br>
5. Havalimanına iniş talep eden uçakların önceliği
(öncelik id), uçak numarası (ucak id) ve talep ettiği
iniş saati (talep edilen iniş saati) input.txt dosyasından
okunacaktır.<br> </br>
6. Tum uçakların iniş ve kalkış¸ süreleri eşittir ve hesaplamalara 
dahil edilmeyecektir. <br> </br>
7. Havalimanına iniş yapan her uçağın, kalkış için bekleme 
süresi 1 saattir. Uçakların kalkış saatine, ¨ötelenmeden dolayı ¨
oluşan gecikme süreleri dahil edilmelidir. Kalkış saati bu 
bilgiler göz önünde bulundurularak hesaplanmalıdır. <br> </br>
8. Aynı önceliğe sahip iki uçak, aynı saatte kalkış yapacaksa 
öncelik ilk iniş yapan uçağa verilmelidir. <br></br>
9. Önceliği yüksek olan uçaklar nedeniyle ¨önceliği
düşük olan herhangi bir uçağın uçuşu,maksimum 3 kez 
ertelenebilir. Eğer 3’ten fazla ertelenme durumu söz 
konusuysa, öncelik gözetilmeksizin beklemede olan uçağın 
kalkışı gerçekleştirilmelidir. <br></br>
10. Kuleden bir günde maksimum 24 uçak iniş için 
izin talep edebilir. Eğer bu kapasite dolmuşsa;o 
iniş için
onay alan uçaklardan en az birinin önceliği (X uçağı olsun), 
iniş izni onayı bekleyen uçağın(Y uçağı olsun önceliğinden
düşükse  yüksek öncelikli uçağa  (Y) inis¸ onayı verilir. ˘
Daha once onay almıs¸ ve ¨ onceli ¨ gi d ˘ us¸¨ uk olan uc¸ak (X) bas¸ka ¨
bir havalimanına yonlendirilmelidir. <br></br>
11. ˙Inis¸ izni daha onceden onaylanan uc¸a ¨ gın (X) izni ˘
iptal edilmis¸se; “Acil inis¸ yapması gereken . . . (Y) uc¸agı˘
nedeniyle inis¸ izniniz iptal edilmis¸tir, inis¸ ic¸in Sabiha Gokc¸en ¨
Havalimanı’na yonlendiriliyorsunuz.” s¸eklinde ekranda ¨
yazdırılmalıdır. <br></br>
# ARAŞTIRMALAR VE YÖNTEM
Bu projeyi yapabilmek ic¸in ilk once is¸e kuyruk ve ¨
oncelikli kuruk yapısını ¨ o¨grenerek bas¸ladık.Daha sonra bu ˘
yapıları kullanarak nasıl bir yol izlememiz gerektigini ˘
olus¸turduk.Projemizdeki uc¸ak bilgilerini dizi ile degil ba ˘ gı˘
liste ile tutmaya karar verdik.C¸ unk ¨ u b ¨ oylece daha esnek ¨
bir veri yapısı kullanabilecek ve is¸lemlerimizi daha ozg ¨ urce ¨
gerc¸ekles¸tirebilecektik.
# Fonksiyon İsmi ve Açıklamaları
1) InisDugumu* yeniInis Fonksiyonu: Bu fonksiyon inen
uçaklar listesine eklenmek için oluşturulması gereken yeni
düğümü oluşturur.Bunun için geçici bir temp düğümünden 
yararlanır.
2) KalkisDugumu* yeniKalkis Fonksiyonu: Bu fonksiyon
kalkan uçaklar listesine eklenmek için oluşturulması
gereken yeni düğümü oluşturur.Bunun için geçici bir temp 
düğümünden yararlanır. 
3) InisPeek Fonksiyonu:İniş kuyrugundaki ilk elemanı geri 
döndürür.
4) printKalkisPistDurumu Fonksiyonu: Kalkış
durumundaki uçakların listesini ekrana yazdırı.Ayrıca
output dosyasına da bu listesi geçirir.
5) pop Fonksiyonu:İniş listesindeki ilk elemanı siler.
6) kalkisEkle Fonksiyonu: Kalkış için yeni olus¸turulan
elemanı kalkış kuyruguna ekler.
7) InisEkle Fonksiyonu:İnis için oluşturulan yeni elemanı
iniş kuyruguna ekler.
8) isEmpty Fonksiyonu:İnis¸ kuyrugu dolu mu boş mu
kontrol eder.

# PROGRAMIN DERLENMESİ
Oluşturduğum kodu CodeBlockes,Dev-C++ gibi derleyici 
kullanarak derleyebilirsiniz.Biz Dev-c++ derleyicisini kullanmayı tercih ettik.Kodumu da bu derleyici uzerinde yazdım..

# SCREENSHOTS
![image](https://user-images.githubusercontent.com/73225797/221413205-3a381efd-9c1a-44d1-986c-8763d20b643e.png)
![image](https://user-images.githubusercontent.com/73225797/221413227-6b15ab68-72a4-47df-be77-dfc170f32215.png)



