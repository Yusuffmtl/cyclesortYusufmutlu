
# Cycle Sort Algoritması

Cycle Sort, dizi elemanlarını minimum sayıda yazma işlemiyle sıralayan, yerinde (in-place) ve kararsız (unstable) bir sıralama algoritmasıdır. Özellikle yazma işleminin maliyetli olduğu durumlarda tercih edilir.

## 📌 İçindekiler

- [Algoritmanın Açıklaması](#algoritmanın-açıklaması)
- [Kategori ve Çözüm Yolu](#kategori-ve-çözüm-yolu)
- [Kullanım Alanları](#kullanım-alanları)
- [Zaman ve Uzay Karmaşıklığı](#zaman-ve-uzay-karmaşıklığı)
- [Algoritmanın Adımları](#algoritmanın-adımları)
- [Kullanım Örnekleri](#kullanım-örnekleri)
- [Avantajlar ve Dezavantajlar](#avantajlar-ve-dezavantajlar)
- [Nasıl Kullanılır?](#nasıl-kullanılır)
- [Test Dosyası](#test-dosyası)

---

## Algoritmanın Açıklaması

Cycle Sort, diziyi döngüler (cycles) halinde ele alır ve her döngüyü minimum sayıda yazma işlemiyle doğru sıralamaya getirir. Her eleman, olması gereken pozisyona yerleştirilir ve bu işlem, tüm elemanlar doğru pozisyona gelene kadar devam eder.

## Kategori ve Çözüm Yolu

- **Kategori:** Sıralama Algoritmaları
- **Çözüm Yolu:** Karşılaştırmalı sıralama, yerinde sıralama, döngü tabanlı yaklaşım

## Kullanım Alanları

- EEPROM gibi yazma işlemi sınırlı olan belleklerde
- Yazma işleminin maliyetli olduğu sistemlerde
- Minimum yazma işlemi gerektiren uygulamalarda

## Zaman ve Uzay Karmaşıklığı

- **Zaman Karmaşıklığı:** O(n²) – Tüm durumlar için
- **Uzay Karmaşıklığı:** O(1) – Ekstra bellek kullanmaz

## Algoritmanın Adımları

1. Dizinin ilk elemanından başlanır.
2. Her elemanın doğru pozisyonu belirlenir.
3. Eğer eleman doğru pozisyonda değilse, doğru pozisyona yerleştirilir.
4. Yerleştirilen pozisyondaki eski eleman için aynı işlem tekrarlanır.
5. Tüm elemanlar doğru pozisyona gelene kadar işlem devam eder.

## Kullanım Örnekleri

- `{4, 3, 2, 1}` → `{1, 2, 3, 4}`
- `{5, 1, 4, 2, 3}` → `{1, 2, 3, 4, 5}`
- `{1, 1, 1, 1}` → `{1, 1, 1, 1}`

## Avantajlar ve Dezavantajlar

### Avantajlar

- Minimum yazma işlemi gerektirir.
- Yerinde sıralama yapar, ek bellek kullanmaz.

### Dezavantajlar

- Zaman karmaşıklığı yüksektir (O(n²)).
- Kararsız bir algoritmadır; aynı değere sahip elemanların sırası değişebilir.

## Nasıl Kullanılır?

### Derleme ve Çalıştırma

1. `cycle_sort.cpp` ve `test_cycle_sort.cpp` dosyalarını aynı klasöre yerleştirin.
2. Aşağıdaki komutu kullanarak derleyin:

```bash
g++ test_cycle_sort.cpp -o test
```

3. Programı çalıştırın:

```bash
./test
```

## Test Dosyası

`test_cycle_sort.cpp` dosyası, çeşitli test durumlarını içermektedir. Her test, sıralama işleminin doğru çalışıp çalışmadığını kontrol eder ve başarılı testler için mesajlar görüntüler.
