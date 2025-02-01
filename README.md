# README - Programma di Analisi del Colore di un Pixel

## Descrizione
Questo programma utilizza OpenCV per caricare un'immagine, ottenere le coordinate di un pixel dall'utente e restituire il valore del colore RGB del pixel selezionato.

## Requisiti
- OpenCV installato
- Compilatore C++ (ad esempio, g++)

## Installazione
### Installare OpenCV
Se OpenCV non è installato, puoi installarlo con:
```sh
sudo apt-get install libopencv-dev # Per Linux
brew install opencv # Per macOS
```

Su Windows, puoi scaricare e configurare OpenCV dal sito ufficiale: https://opencv.org/

## Compilazione ed Esecuzione
### Compilazione
Compila il codice con:
```sh
g++ -o image_color image_color.cpp `pkg-config --cflags --libs opencv4`
```

### Esecuzione
Esegui il programma con:
```sh
./image_color
```

## Utilizzo
1. Avvia il programma.
2. Inserisci il percorso dell'immagine quando richiesto.
3. Il programma mostrerà le dimensioni dell'immagine.
4. Inserisci le coordinate x e y di un pixel.
5. Il programma restituirà il colore RGB del pixel selezionato.
6. L'immagine verrà visualizzata in una finestra. Premi un tasto per chiuderla.

## Esempio di Output
```
Inserisci il percorso dell'immagine: esempio.jpg
Dimensioni immagine: 800 x 600
Inserisci le coordinate x, y: 200 150
Colore al pixel (200, 150): R=120, G=200, B=255
```

## Licenza
Questo progetto è rilasciato sotto la licenza MIT.

