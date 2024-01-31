#include <SFML/Graphics.hpp>
#include <iostream>
#include <string>
#include <iomanip>
#include <sstream>
#include <stack>
#include "Sprint_athle.h"
#include "Initialisation_pays.h"
#include "Initialisation_sprinters.h"

class GUI {
public:
    GUI() {
        // Création de la fenêtre SFML
        window.create(sf::VideoMode(1080, 720), "PARIS 2024 simulator");

        // Définir la couleur de fond de la fenêtre principale comme blanche
        window.clear(sf::Color::White);

        // Création du bouton principal
        createMainButtons();

        // Chargement de la police
        LoadFont();

        // Chargement de l'image
        if (!texture.loadFromFile("/Users/davidlamoot/Downloads/Logo_JO_d'été_-_Paris_2024.svg.png")) {
            std::cout << "Erreur lors du chargement de l'image" << std::endl;
        }

        // Création du sprite pour l'image
        sprite.setTexture(texture);
        sprite.setPosition(450, 10); // Position de l'image à l'écran
        sprite.setScale(0.1, 0.1);    // Taille de l'image

        // Création du texte
        welcomeText.setFont(font);
        welcomeText.setString("Bienvenue aux JO de Paris 2024");
        welcomeText.setCharacterSize(30);
        welcomeText.setFillColor(sf::Color::Black);

        // Centrer le texte
        sf::FloatRect textBounds = welcomeText.getLocalBounds();
        welcomeText.setPosition((window.getSize().x - textBounds.width) / 2.f, ((window.getSize().y - textBounds.height) / 2.f)-100) ;

        //Participant
        participantText.setFont(font);
        participantText.setString("");
        participantText.setCharacterSize(30);
        participantText.setFillColor(sf::Color::Black);
        participantText.setPosition(300, 300);

        // Liste des participants
        listeParticipantText.setFont(font);
        listeParticipantText.setString("");
        listeParticipantText.setCharacterSize(30);
        listeParticipantText.setFillColor(sf::Color::Black);
        listeParticipantText.setPosition(300, 300);

        //Createur de l'application
        CreateurApp.setFont(font);
        CreateurApp.setString("Application creee par Gabriel Geraci et David Lamoot. Tous droits reserves.");
        CreateurApp.setCharacterSize(14);
        CreateurApp.setFillColor(sf::Color::Black);
        sf::FloatRect textBounds2 = CreateurApp.getLocalBounds();
        CreateurApp.setPosition((window.getSize().x - textBounds2.width) / 2.f, ((window.getSize().y - textBounds2.height) / 2.f)+300) ;
    }

    // Boucle principale
    void run() {
        int page = 0;
        while (window.isOpen()) {
            page = handleEvents(page);
            draw();
        }
    }

private:
    sf::RenderWindow window;
    sf::Font font;
    sf::Texture texture;  // Texture de l'image
    sf::Sprite sprite;    // Sprite pour afficher l'image
    sf::Text welcomeText; // Texte de bienvenue
    sf::Text participantText; //Texte participants
    sf::Text listeParticipantText; //Texte liste participants
    sf::Text CreateurApp; //Texte Createur de l'application
    std::vector<sf::RectangleShape> buttons;
    std::vector<sf::Text> buttonTexts;
    std::string athlete = "";

    // Fonction pour créer un bouton
    void createButton(float x, float y, const std::string& text) {
        sf::RectangleShape button(sf::Vector2f(200, 50));
        button.setPosition(x, y);
        button.setFillColor(sf::Color::White);

        sf::Text buttonText(text, font, 20);
        buttonText.setPosition(x + 10, y + 10);
        buttonText.setFillColor(sf::Color::Black);

        buttons.push_back(button);
        buttonTexts.push_back(buttonText);
    }

    void createMainButtons() {
        // Créer les boutons de la fenêtre principale
        createButton(200, 400, "Athletisme");
        createButton(700, 400, "Natation");
    }

    // Ajouter deux nouveaux boutons
    void addNewButtons() {
        // Effacer les anciens boutons
        buttons.clear();
        buttonTexts.clear();

        // Créer les deux nouveaux boutons
        createButton(200, 400, "100m masculin");
        createButton(700, 400, "100m feminin");
    }

    //Boutons Athletisme
    void createAthleticsButtons() {
        clearButtons();
        createButton(50, 400, "Sprint");
        createButton(300, 400, "Haies");
        createButton(550, 400, "Demi-fond");
        createButton(800, 400, "Fond");
        createButton(50, 500, "Lancer");
        createButton(300, 500, "Saut");
        createButton(550, 500, "Decathlon");
        createButton(800, 500, "Heptathlon");
        createReturnButton();
    }

    void createSprintButtons() {
        clearButtons();
        createButton(50, 400, "100m masculin");
        createButton(300, 400, "100m feminin");
        createButton(550, 400, "200m masculin");
        createButton(800, 400, "200m feminin");
        createButton(200, 500, "400m masculin");
        createButton(700, 500, "400m feminin");
        createReturnButton();
    }

    void createHurdlesButtons() {
        clearButtons();
        createButton(50, 400, "110m haies masculin");
        createButton(300, 400, "110m haies feminin");
        createButton(550, 400, "400m haies masculin");
        createButton(800, 400, "400m haies feminin");
        createReturnButton();
    }

    void createMiddleDistanceButtons() {
        clearButtons();
        createButton(50, 400, "800m masculin");
        createButton(300, 400, "800m feminin");
        createButton(550, 400, "1500m masculin");
        createButton(800, 400, "1500m feminin");
        createButton(200, 500, "300m steeple masculin");
        createButton(700, 500, "300m steeple feminin");
        createReturnButton();
    }

    void createLongDistanceButtons() {
        clearButtons();
        createButton(50, 400, "5000m masculin");
        createButton(300, 400, "5000m feminin");
        createButton(550, 400, "10000m masculin");
        createButton(800, 400, "10000m feminin");
        createButton(200, 500, "Marathon masculin");
        createButton(700, 500, "Marathon feminin");
        createReturnButton();
    }

    void createThrowButtons() {
        clearButtons();
        createButton(50, 400, "Lancer de poids masculin");
        createButton(300, 400, "Lancer de poids feminin");
        createButton(550, 400, "Lancer de disque masculin");
        createButton(800, 400, "Lancer de disque feminin");
        createButton(200, 500, "Lancer de marteau masculin");
        createButton(700, 500, "Lancer de marteau feminin");
        createButton(50, 600, "Lancer de javelot masculin");
        createButton(300, 600, "Lancer de javelot feminin");
        createReturnButton();
    }

    void createJumpButtons() {
        clearButtons();
        createButton(50, 400, "Saut en hauteur masculin");
        createButton(300, 400, "Saut en hauteur feminin");
        createButton(550, 400, "Saut a la perche masculin");
        createButton(800, 400, "Saut a la perche feminin");
        createButton(200, 500, "Saut en longueur masculin");
        createButton(700, 500, "Saut en longueur feminin");
        createButton(50, 600, "Triple saut masculin");
        createButton(300, 600, "Triple saut feminin");
        createReturnButton();
    }

    //Boutons Natation
    void createSwimmingButton() {
        clearButtons();
        createButton(300, 50, "400m 4 nages");
    }

    void clearButtons() {
        buttons.clear();
        buttonTexts.clear();
    }

    void createReturnButton() {
        sf::RectangleShape button(sf::Vector2f(100, 30));
        button.setPosition(20, 650);
        button.setFillColor(sf::Color::Red);

        sf::Text buttonText("Retour", font, 20);
        buttonText.setPosition(35, 650);
        buttonText.setFillColor(sf::Color::White);

        buttons.push_back(button);
        buttonTexts.push_back(buttonText);
    }

    void createSimulateButton() {
        sf::RectangleShape button(sf::Vector2f(100, 30));
        button.setPosition(925, 650);
        button.setFillColor(sf::Color::Green);

        sf::Text buttonText("Simuler", font, 20);
        buttonText.setPosition(935, 650);
        buttonText.setFillColor(sf::Color::White);

        buttons.push_back(button);
        buttonTexts.push_back(buttonText);
    }

    // Gestion des événements
    int handleEvents(int page) {
        sf::Event event;
        int page_temp = page;
        while (window.pollEvent(event)) {
            switch (event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                /*case sf::Event::KeyPressed: // Vérifier si une touche est pressée
                    if (event.key.code == sf::Keyboard::Escape) { // Vérifier si la touche Échap est pressée
                        revertToPreviousWindow();
                    }
                    break;*/
                case sf::Event::MouseButtonPressed:
                    page = handleClick(event.mouseButton.x, event.mouseButton.y, page_temp);
                    break;
                default:
                    break;
            }
        }
        return page;
    }

    // Gestion du clic de souris
    int handleClick(int x, int y, int page_actu) {
        for (size_t i = 0; i < buttons.size(); ++i) {
            if (buttons[i].getGlobalBounds().contains(x, y)) {
                //Athletisme
                if (buttonTexts[i].getString() == "Athletisme") {
                    page_actu = 1;
                    createAthleticsButtons();
                    updateWelcomeText("Bienvenue aux epreuves d'athletisme", page_actu);
                    createReturnButton();
                }
                //Sprint
                else if(buttonTexts[i].getString() == "Sprint"){
                    page_actu = 10;
                    createSprintButtons();
                    updateWelcomeText("Bienvenue aux epreuves de sprint", page_actu);
                    //createReturnButton();
                }
                else if (buttonTexts[i].getString() == "100m masculin") {
                    page_actu = 100;
                    updateWelcomeText("Bienvenue pour la finale du 100m masculin du 04/08/2024 a Saint-Denis : Stade de France.", page_actu);
                    participant("Participants : ");
                    for(int i = 0; i < 8; ++i) {
                        athlete += liste_sprinters_H_100m[i].afficher_interface("100m");
                    }
                    listeParticipant(athlete, 200);
                    athlete = "";
                } else if (buttonTexts[i].getString() == "100m feminin") {
                    page_actu = 101;
                    updateWelcomeText("Bienvenue pour la finale du 100m feminin du 03/08/2024 a Saint-Denis : Stade de France.", page_actu);
                    participant("Participantes : ");
                    for(int i = 0; i < 8; ++i) {
                        athlete += liste_sprinters_F_100m[i].afficher_interface("100m");
                    }
                    listeParticipant(athlete, 200);
                    athlete = "";
                } else if (buttonTexts[i].getString() == "200m masculin") {
                    page_actu = 102;
                    updateWelcomeText("Bienvenue pour la finale du 200m masculin du 08/08/2024 a Saint-Denis : Stade de France.", page_actu);
                    participant("Participants : ");
                    for(int i = 0; i < 8; ++i) {
                        athlete += liste_sprinters_H_200m[i].afficher_interface("200m");
                    }
                    listeParticipant(athlete, 200);
                    athlete = "";
                } else if (buttonTexts[i].getString() == "200m feminin") {
                    page_actu = 103;
                    updateWelcomeText("Bienvenue pour la finale du 200m feminin du 07/08/2024 a Saint-Denis : Stade de France.", page_actu);
                    participant("Participantes : ");
                    for(int i = 0; i < 8; ++i) {
                        athlete += liste_sprinters_F_200m[i].afficher_interface("200m");
                    }
                    listeParticipant(athlete, 200);
                    athlete = "";
                }
                //Haies
                else if (buttonTexts[i].getString() == "Haies"){
                    page_actu = 11;
                    createHurdlesButtons();
                    updateWelcomeText("Bienvenue aux epreuves de haies", page_actu);
                } else if (buttonTexts[i].getString() == "110m haies masculin") {
                    page_actu = 110;
                    updateWelcomeText("Bienvenue pour la finale du 110m haies masculin du 06/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "110m haies feminin") {
                    page_actu = 111;
                    updateWelcomeText("Bienvenue pour la finale du 110m haies feminin du 05/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "400m haies masculin") {
                    page_actu = 112;
                    updateWelcomeText("Bienvenue pour la finale du 400m haies masculin du 09/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "400m haies feminin") {
                    page_actu = 113;
                    updateWelcomeText("Bienvenue pour la finale du 400m haies feminin du 08/08/2024 a Saint-Denis : Stade de France.", page_actu);
                }
                //Demi-fond
                else if (buttonTexts[i].getString() == "Demi-fond") {
                    page_actu = 12;
                    clearButtons();
                    updateWelcomeText("Bienvenue aux epreuves de demi-fond", page_actu);
                } else if (buttonTexts[i].getString() == "800m masculin") {
                    page_actu = 120;
                    updateWelcomeText("Bienvenue pour la finale du 800m masculin du 05/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "800m feminin") {
                    page_actu = 121;
                    updateWelcomeText("Bienvenue pour la finale du 800m feminin du 04/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "1500m masculin") {
                    page_actu = 122;
                    updateWelcomeText("Bienvenue pour la finale du 1500m masculin du 07/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "1500m feminin") {
                    page_actu = 123;
                    updateWelcomeText("Bienvenue pour la finale du 1500m feminin du 06/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "300m steeple masculin") {
                    page_actu = 124;
                    updateWelcomeText("Bienvenue pour la finale du 300m steeple masculin du 10/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "300m steeple feminin") {
                    page_actu = 125;
                    updateWelcomeText("Bienvenue pour la finale du 300m steeple feminin du 09/08/2024 a Saint-Denis : Stade de France.", page_actu);
                }
                //Fond
                else if (buttonTexts[i].getString() == "Fond") {
                    page_actu = 13;
                    clearButtons();
                    updateWelcomeText("Bienvenue aux epreuves de fond", page_actu);
                } else if (buttonTexts[i].getString() == "5000m masculin") {
                    page_actu = 130;
                    updateWelcomeText("Bienvenue pour la finale du 5000m masculin du 08/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "5000m feminin") {
                    page_actu = 131;
                    updateWelcomeText("Bienvenue pour la finale du 5000m feminin du 07/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "10000m masculin") {
                    page_actu = 132;
                    updateWelcomeText("Bienvenue pour la finale du 10000m masculin du 10/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "10000m feminin") {
                    page_actu = 133;
                    updateWelcomeText("Bienvenue pour la finale du 10000m feminin du 09/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Marathon masculin") {
                    page_actu = 134;
                    updateWelcomeText("Bienvenue pour la finale du marathon masculin du 12/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Marathon feminin") {
                    page_actu = 135;
                    updateWelcomeText("Bienvenue pour la finale du marathon feminin du 11/08/2024 a Saint-Denis : Stade de France.", page_actu);
                }
                //Lancer
                else if (buttonTexts[i].getString() == "Lancer") {
                    page_actu = 14;
                    clearButtons();
                    updateWelcomeText("Bienvenue aux epreuves de lancer", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de poids masculin") {
                    page_actu = 140;
                    updateWelcomeText("Bienvenue pour la finale du lancer de poids masculin du 06/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de poids feminin") {
                    page_actu = 141;
                    updateWelcomeText("Bienvenue pour la finale du lancer de poids feminin du 05/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de disque masculin") {
                    page_actu = 142;
                    updateWelcomeText("Bienvenue pour la finale du lancer de disque masculin du 09/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de disque feminin") {
                    page_actu = 143;
                    updateWelcomeText("Bienvenue pour la finale du lancer de disque feminin du 08/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de marteau masculin") {
                    page_actu = 144;
                    updateWelcomeText("Bienvenue pour la finale du lancer de marteau masculin du 11/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de marteau feminin") {
                    page_actu = 145;
                    updateWelcomeText("Bienvenue pour la finale du lancer de marteau feminin du 10/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de javelot masculin") {
                    page_actu = 146;
                    updateWelcomeText("Bienvenue pour la finale du lancer de javelot masculin du 13/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Lancer de javelot feminin") {
                    page_actu = 147;
                    updateWelcomeText("Bienvenue pour la finale du lancer de javelot feminin du 12/08/2024 a Saint-Denis : Stade de France.", page_actu);
                }
                //Saut
                else if (buttonTexts[i].getString() == "Saut") {
                    page_actu = 15;
                    clearButtons();
                    updateWelcomeText("Bienvenue aux epreuves de saut", page_actu);
                } else if (buttonTexts[i].getString() == "Saut en hauteur masculin") {
                    page_actu = 150;
                    updateWelcomeText("Bienvenue pour la finale du saut en hauteur masculin du 07/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Saut en hauteur feminin") {
                    page_actu = 151;
                    updateWelcomeText("Bienvenue pour la finale du saut en hauteur feminin du 06/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Saut a la perche masculin") {
                    page_actu = 152;
                    updateWelcomeText("Bienvenue pour la finale du saut a la perche masculin du 10/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Saut a la perche feminin") {
                    page_actu = 153;
                    updateWelcomeText("Bienvenue pour la finale du saut a la perche feminin du 09/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Saut en longueur masculin") {
                    page_actu = 154;
                    updateWelcomeText("Bienvenue pour la finale du saut en longueur masculin du 12/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Saut en longueur feminin") {
                    page_actu = 155;
                    updateWelcomeText("Bienvenue pour la finale du saut en longueur feminin du 11/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Triple saut masculin"){
                    page_actu = 156;
                    updateWelcomeText("Bienvenue pour la finale du triple saut masculin du 14/08/2024 a Saint-Denis : Stade de France.", page_actu);
                } else if (buttonTexts[i].getString() == "Triple saut feminin"){
                    page_actu = 157;
                    updateWelcomeText("Bienvenue pour la finale du triple saut feminin du 13/08/2024 a Saint-Denis : Stade de France.", page_actu);
                }


                //Natation
                else if (buttonTexts[i].getString() == "Natation") {
                    page_actu = 2;
                    createSwimmingButton();
                }else if (buttonTexts[i].getString() == "400m 4 nages") {
                    updateWelcomeText("Bienvenue pour la finale du 400m 4 nages du 07/08/2024 a Saint-Denis : Stade de France.", page_actu);
                }


                //Bouton Retour et Simuler
                else if (buttonTexts[i].getString() == "Retour") {
                    //int temp = page_actu;
                    //std::cout << "temp = " << page_actu << std::endl;
                    revertToPreviousWindow(page_actu);
                    page_actu = page_actu/10;
                } else if (buttonTexts[i].getString() == "Simuler") {
                    if (page_actu ==100){ //100m masculin
                        participant("");
                        Sprint_athle Sprint_athle_100m_H("Finale olympique 100m Masculin", "Saint-Denis : Stade de France", "04/08/2024", "100m", "M");
                        athlete = Sprint_athle_100m_H.setEpreuve("100m", "M", liste_sprinters_H_100m);
                        listeParticipant(athlete, 200);
                        athlete = "";
                    }
                    if (page_actu ==101){ //100m feminin
                        participant("");
                        Sprint_athle Sprint_athle_100m_F("Finale olympique 100m Feminin", "Saint-Denis : Stade de France", "03/08/2024", "100m", "F");
                        athlete = Sprint_athle_100m_F.setEpreuve("100m", "F", liste_sprinters_F_100m);
                        listeParticipant(athlete, 200);
                        athlete = "";
                    }
                    if (page_actu ==102){ //200m masculin
                        participant("");
                        Sprint_athle Sprint_athle_200m_H("Finale olympique 200m Masculin", "Saint-Denis : Stade de France", "08/08/2024", "200m", "M");
                        athlete = Sprint_athle_200m_H.setEpreuve("200m", "M", liste_sprinters_H_200m);
                        listeParticipant(athlete, 200);
                        athlete = "";
                    }
                    if (page_actu ==103){ //200m masculin
                        participant("");
                        Sprint_athle Sprint_athle_200m_F("Finale olympique 200m Feminin", "Saint-Denis : Stade de France", "07/08/2024", "200m", "M");
                        athlete = Sprint_athle_200m_F.setEpreuve("200m", "F", liste_sprinters_F_200m);
                        listeParticipant(athlete, 200);
                        athlete = "";
                    }
                }
            }
        }
        std::cout << page_actu << std::endl;
        return page_actu;
    }

    // Revenir à la fenêtre précédente
    void revertToPreviousWindow(int page_actu) {
        if (page_actu == 1) {
            clearButtons();
            createMainButtons();
            //createReturnButton();
            updateWelcomeText("Bienvenue aux JO de Paris 2024", page_actu);
            //return 0;
        } if (10 <= page_actu) {
            participant("");
            listeParticipant("", 0);
            createAthleticsButtons();
            updateWelcomeText("Bienvenue aux epreuves d'athletisme", page_actu);
            //return 1;
        } if (100 <= page_actu){
            //clearButtons();
            //createSprintButtons();
            createAthleticsButtons();
            updateWelcomeText("Bienvenue aux epreuves de sprint", page_actu);
            //return 10;
        }
        if (110 <= page_actu) {
            //createHurdlesButtons();
            createAthleticsButtons();
            updateWelcomeText("Bienvenue aux epreuves de haies", page_actu);
            //return 11;
        }
        //return page_actu/10;
    }

    // Police écriture
    void LoadFont() {
        if (!font.loadFromFile("/Users/davidlamoot/Downloads/Poppins/Poppins-Black.ttf")) {
            std::cout << "Erreur lors du chargement de la police" << std::endl;
        }
    }

    // Dessiner la fenêtre et les éléments
    void draw() {
        window.clear(sf::Color::White);

        // Dessiner les boutons de la fenêtre principale
        for (const auto& button : buttons) {
            window.draw(button);
        }

        // Dessiner le texte des boutons de la fenêtre principale
        for (const auto& buttonText : buttonTexts) {
            window.draw(buttonText);
        }

        // Dessiner l'image
        window.draw(sprite);

        // Dessiner le texte de bienvenue
        window.draw(welcomeText);
        window.draw(participantText);
        window.draw(listeParticipantText);
        window.draw(CreateurApp);
        window.display();
    }

    void updateWelcomeText(const std::string& newText, int page_actu) {
        welcomeText.setString(newText);
        if (page_actu == 1){
            welcomeText.setCharacterSize(30);
        }
        else{
            welcomeText.setCharacterSize(15);
        }
        sf::FloatRect textBounds = welcomeText.getLocalBounds();
        welcomeText.setPosition((window.getSize().x - textBounds.width) / 2.f, ((window.getSize().y - textBounds.height) / 2.f) - 100);
    }

    void participant(const std::string& newText){
        buttons.clear();
        buttonTexts.clear();
        participantText.setString(newText);
        participantText.setCharacterSize(15);
        participantText.setFillColor(sf::Color::Black);
        sf::FloatRect textBounds = welcomeText.getLocalBounds();
        participantText.setPosition(((window.getSize().x - textBounds.width) / 2.f) - 50, ((window.getSize().y - textBounds.height) / 2.f) - 50);
    }

    void listeParticipant(const std::string& newText, int placement_x){
        buttons.clear();
        buttonTexts.clear();
        createReturnButton();
        createSimulateButton();
        listeParticipantText.setString(newText);
        listeParticipantText.setCharacterSize(15);
        listeParticipantText.setFillColor(sf::Color::Black);
        sf::FloatRect textBounds = participantText.getLocalBounds();
        listeParticipantText.setPosition(((window.getSize().x - textBounds.width) / 2.f) - placement_x, ((window.getSize().y - textBounds.height) / 2.f) - 50);
    }

};


int main() {
    GUI gui;
    gui.run();

    return 0;
}