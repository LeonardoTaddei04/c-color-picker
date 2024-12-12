#include <opencv2/opencv.hpp>
#include <stdio.h>

int main() {
    char image_path[256];
    printf("Inserisci il percorso dell'immagine: ");
    scanf("%s", image_path);

    // Carica l'immagine
    cv::Mat image = cv::imread(image_path);
    if (image.empty()) {
        printf("Errore: impossibile aprire l'immagine!\n");
        return -1;
    }

    printf("Dimensioni immagine: %d x %d\n", image.cols, image.rows);

    int x, y;
    printf("Inserisci le coordinate x, y: ");
    scanf("%d %d", &x, &y);

    // Controllo che le coordinate siano valide
    if (x < 0 || x >= image.cols || y < 0 || y >= image.rows) {
        printf("Errore: coordinate fuori dai limiti dell'immagine!\n");
        return -1;
    }

    // Ottieni il colore del pixel
    cv::Vec3b pixel = image.at<cv::Vec3b>(y, x); // Nota: y è la riga, x è la colonna
    int blue = pixel[0];
    int green = pixel[1];
    int red = pixel[2];

    printf("Colore al pixel (%d, %d): R=%d, G=%d, B=%d\n", x, y, red, green, blue);

    // Mostra l'immagine (opzionale)
    cv::imshow("Immagine", image);
    cv::waitKey(0); // Aspetta che l'utente prema un tasto

    return 0;
}

