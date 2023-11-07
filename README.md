# Matrix-Operations-in-C-Linear-Algebra
Matrix operations like addition and substraction, product etc.

MATRİS İŞLEMLERİ DÖKÜMANTASYON YAZISI
 
Void fonksiyonu yazarak kullanıcıdan matris 1 ve matris 2 satır sutun değerleri alıyoruz.

 
if yapısı ile alınan veriler 1. matrisin sütun sayısı ile 2. matrisin satır sayısı aynı mı kontrol ediliyor.
Eğer şartlar sağlanıyorsa girilen matrisin boyutları yazdırılıyor.
Sonra gerekli değişkenler atanıyor.
Daha sonra döngüler yardımıyla 1. matrisimizin konumlarına karşılık gelen değerler kullanıcıdan alınıyor.
Alınan Matris 1 değerleri yine döngüler yardımıyla konsolda yazdırılıyor.
 
Aynı şekilde döngüler yardımıyla 2. matrisimizin konumlarına karşılık gelen değerler kullanıcıdan alınıyor.
Matris 2 yine döngüler yardımıyla konsolda yazdırılıyor.
Çarpma işlemine geçildiğinde ise 3 adet döngü bizi karşılıyor.
Matrisin çarpım kuralına göre kaç satır kaç sütün var ise birbirleri ile çarpılıp toplamları yine matris olacak şekilde yazdırlıyor.
Örneğin 2x3 ve 3x2 bir matriste  matris 1 ,1.satır matris2 1 ve 2.sutun çarpılıp toplanıyor. Sonra aynı işlem 2.satıra uygulanıp işlem yazdırılıyor.
Bizim programımızda toplam değeri atadığımız çarpım dizisine swaplanıyor.
 
Swaplama işleminde sonra matrisimizi yine döngü yardımıyla yazdırıyoruz.
İşlemimiz konsolda basılmış oluyor.
---------------------------------------------------------------------------------------------------------------
 
Void fonksiyonu yazarak kullanıcıdan matris 1 ve matris 2 değerleri alıyoruz.
 
Matrislerde toplama yapabilmek için boyutları aynı olmalı if yapısıyla bu koşulu sağlıyor mu kontrol ediyoruz.
Sonra satir sutun sayısına göre matris boyutunu yazdırıyoruz.
Gerekli değişkenleri atıyoruz.
Alınan Matris 1 değerleri yine döngüler yardımıyla konsolda yazdırılıyor.
 
Aynı şekilde döngüler yardımıyla 2. matrisimizin konumlarına karşılık gelen değerler kullanıcıdan alınıyor.
Matris 2 yine döngüler yardımıyla konsolda yazdırılıyor.
 
Son olarak toplama işlemine geçiyoruz.
Toplanan matris1 ve matris2 değerleri yeni oluşan toplam matrisi döngüler yardımıyla yazdırılıyor.
Alttaki else yapısı ise fonksiyonun başında verilen if yapısının devamıdır. Matrislerin boyutları aynı olmadığında konsolda içinde bulunduğu printf i yazdıracaktır.
Bu şekilde işlemimiz konsolda basılmış oluyor.
---------------------------------------------------------------------------------------------------------------
 
Void fonksiyonu yazarak kullanıcıdan matris satır sutun değerleri alıyoruz.
Daha sonra determinant işlemi için kare matrisler kullanıldığında onu if else karar yapısı ile kontrol ediyoruz.
 
1x1 boyutlu matrislerin determinantı için karar yapısı oluşturuyoruz.
Matrisin boyutunu yazdırıyoruz.
Daha sonra döngüler yardımıyla kullanıcıdan matris değerleri alıyoruz.
En son matrisimiz 1 elemanlı olduğundan direk olarak matrisin 0,0 değerini komut ekranında bastırıyoruz.
 
2x2 boyutlu matrislerin  determinantı için karar yapısı oluşturuyoruz.
Matrisin boyutunu yazdırıyoruz.
Daha sonra döngüler yardımıyla kullanıcıdan matris değerleri alıyoruz.
Alınan matris değerlerini konsolda bastırıyoruz.
Sonra determinant formülü ile determinant işlemini yaptırıyoruz.
En son 2x2 matris determinantını bastırıyoruz.
 
3x3 boyutlu matrislerin  determinantı için karar yapısı oluşturuyoruz.
Matrisin boyutunu yazdırıyoruz.
Daha sonra döngüler yardımıyla kullanıcıdan matris değerleri alıyoruz.
Alınan matris değerlerini konsolda bastırıyoruz.
Sonra 3x3 boyutlu matrisler için kullanılan sarrus determinant formülü ile determinant işlemini yaptırıyoruz.
En son 3x3 matris determinantını bastırıyoruz.
---------------------------------------------------------------------------------------------------------------
 
Void fonksiyonu yazarak kullanıcıdan matris satır sutun değerleri alıyoruz.
Daha sonra ters alma işlemi için kare matrisler kullanıldığında onu if else karar yapısı ile kontrol ediyoruz.
 
1x1 boyutlu matrislerin tersi için karar yapısı oluşturuyoruz.
Matrisin boyutunu yazdırıyoruz.
Daha sonra döngüler yardımıyla kullanıcıdan matris değerleri alıyoruz.
En son matrisimiz 1 elemanlı olduğundan direk olarak matrisin 0,0 değerini komut ekranında bastırıyoruz.
 
2x2 boyutlu matrislerin tersi için karar yapısı oluşturuyoruz.
Matrisin boyutunu yazdırıyoruz.
Daha sonra döngüler yardımıyla kullanıcıdan matris değerleri alıyoruz.
Alınan matris değerlerini konsolda bastırıyoruz.
Sonra determinant formülü ile determinant işlemini yaptırıyoruz.
 
Matrislerin tersini bulabilmek için ekstra bir matris olan eşlenik matrisini kulanıyoruz ve swaplama işlemini hallediyoruz.
Sonra döngüler yardımıyla eşlenik matrsini determinanta bölüp onu da en son çıkacak olan ters matrisimize swaplıyoruz.
Konsolda yazdırıyoruz.
İşlemimiz bitiyor.

ENSAR YİĞİT SARITAŞ












 
















