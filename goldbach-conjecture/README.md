<h1 align="center"><img src="https://img.icons8.com/ios-filled/50/FFFFFF/brain.png" height="22px" /> Goldbach's Conjecture � Visual C++</h1>

Ten projekt to prosty program konsolowy napisany w j�zyku C++, kt�ry demonstruje **Hipotez� Goldbacha** � niesprawdzon� hipotez� matematyczn� m�wi�c�, �e ka�da parzysta liczba wi�ksza od 2 jest sum� dw�ch liczb pierwszych. Program pozwala u�ytkownikowi wpisywa� kolejne liczby i sprawdza, czy mo�na je przedstawi� jako sum� dw�ch liczb pierwszych. Narz�dzie dzia�a w spos�b interaktywny i edukacyjny.

---

## <img src="https://img.icons8.com/pastel-glyph/64/FFFFFF/code--v2.png" height="22px" /> Technologie i �rodowisko

- **J�zyk:** C++  
- **�rodowisko IDE:** Visual Studio  
- **Biblioteki:**  
  - `iostream` � obs�uga wej�cia/wyj�cia w konsoli  
  - Brak dodatkowych bibliotek � wykorzystano tylko standardow� bibliotek� j�zyka C++

---

<details>
  <summary><img src="https://img.icons8.com/ios-filled/50/FFFFFF/pin.png" height="22px"/> Funkcje programu (kliknij, aby rozwin��)</summary>

### 1. `czyPierwsza(int n)`
Funkcja sprawdzaj�ca, czy dana liczba jest liczb� pierwsz�.  
Zwraca `true`, je�li liczba jest pierwsza, `false` w przeciwnym przypadku.  
- Dzia�a w oparciu o dzielenie pr�bne do pierwiastka z liczby.

---

### 2. `main()`
G��wna funkcja programu obs�uguj�ca:
- P�tl� wej�ciow� u�ytkownika
- Walidacj� wprowadzonej liczby
- Wyszukiwanie par liczb pierwszych sumuj�cych si� do danej liczby
- Wy�wietlanie wynik�w w formacie:  
  `10 = 3 + 7`  
  `10 = 5 + 5`
- Komunikat ko�cowy:  
  `Hipoteza Goldbacha obalona!` (gdy nie znaleziono �adnej pary)

---

### 3. Zmienne pomocnicze:
- `int liczba` � przechowuje liczb� podan� przez u�ytkownika  
- `bool znaleziono` � flaga informuj�ca, czy znaleziono poprawn� par� liczb pierwszych  
- `int i, j` � liczby pierwsze sk�adowe testowane w ka�dej iteracji

</details>

---

<details>
  <summary><img src="https://img.icons8.com/ios-filled/50/FFFFFF/camera.png" height="22px"/> Podgl�d dzia�ania (kliknij, aby rozwin��)</summary>

Poni�ej przyk�ad dzia�ania aplikacji w terminalu (folder `/images`):

![Podgl�d dzia�ania](images/goldbach-demo.png)

</details>
