<h1 align="center"><img src="https://img.icons8.com/ios-filled/50/FFFFFF/brain.png" height="22px" /> Goldbach's Conjecture – Visual C++</h1>

Ten projekt to prosty program konsolowy napisany w jêzyku C++, który demonstruje **Hipotezê Goldbacha** – niesprawdzon¹ hipotezê matematyczn¹ mówi¹c¹, ¿e ka¿da parzysta liczba wiêksza od 2 jest sum¹ dwóch liczb pierwszych. Program pozwala u¿ytkownikowi wpisywaæ kolejne liczby i sprawdza, czy mo¿na je przedstawiæ jako sumê dwóch liczb pierwszych. Narzêdzie dzia³a w sposób interaktywny i edukacyjny.

---

## <img src="https://img.icons8.com/pastel-glyph/64/FFFFFF/code--v2.png" height="22px" /> Technologie i œrodowisko

- **Jêzyk:** C++  
- **Œrodowisko IDE:** Visual Studio  
- **Biblioteki:**  
  - `iostream` – obs³uga wejœcia/wyjœcia w konsoli  
  - Brak dodatkowych bibliotek – wykorzystano tylko standardow¹ bibliotekê jêzyka C++

---

<details>
  <summary><img src="https://img.icons8.com/ios-filled/50/FFFFFF/pin.png" height="22px"/> Funkcje programu (kliknij, aby rozwin¹æ)</summary>

### 1. `czyPierwsza(int n)`
Funkcja sprawdzaj¹ca, czy dana liczba jest liczb¹ pierwsz¹.  
Zwraca `true`, jeœli liczba jest pierwsza, `false` w przeciwnym przypadku.  
- Dzia³a w oparciu o dzielenie próbne do pierwiastka z liczby.

---

### 2. `main()`
G³ówna funkcja programu obs³uguj¹ca:
- Pêtlê wejœciow¹ u¿ytkownika
- Walidacjê wprowadzonej liczby
- Wyszukiwanie par liczb pierwszych sumuj¹cych siê do danej liczby
- Wyœwietlanie wyników w formacie:  
  `10 = 3 + 7`  
  `10 = 5 + 5`
- Komunikat koñcowy:  
  `Hipoteza Goldbacha obalona!` (gdy nie znaleziono ¿adnej pary)

---

### 3. Zmienne pomocnicze:
- `int liczba` – przechowuje liczbê podan¹ przez u¿ytkownika  
- `bool znaleziono` – flaga informuj¹ca, czy znaleziono poprawn¹ parê liczb pierwszych  
- `int i, j` – liczby pierwsze sk³adowe testowane w ka¿dej iteracji

</details>

---

<details>
  <summary><img src="https://img.icons8.com/ios-filled/50/FFFFFF/camera.png" height="22px"/> Podgl¹d dzia³ania (kliknij, aby rozwin¹æ)</summary>

Poni¿ej przyk³ad dzia³ania aplikacji w terminalu (folder `/images`):

![Podgl¹d dzia³ania](images/goldbach-demo.png)

</details>
