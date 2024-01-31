//
// Created by David Lamoot on 02/01/2024.
//

#ifndef TEST_JO_INITIALISATION_SPRINTERS_H
#define TEST_JO_INITIALISATION_SPRINTERS_H



//Performance 100m hommes
std::vector<double> Lyles100m = {9.83, 9.85, 9.87, 9.90, 9.92};
std::vector<double> Coleman100m = {9.78, 9.83, 9.83, 9.91, 9.92};
std::vector<double> Omanyala100m = {9.81, 9.84, 9.85, 9.86, 9.92};
std::vector<double> Tebogo100m = {9.88, 9.91, 9.93, 9.98, 10.05};
std::vector<double> Kerley100m = {9.88, 9.91, 9.94, 9.94, 9.98};
std::vector<double> Hughes100m = {9.83, 9.88, 9.93, 10.00, 10.01};
std::vector<double> Simbine100m = {9.92, 9.97, 9.97, 9.98, 9.98};
std::vector<double> Seville100m = {9.86, 9.88, 9.90, 9.91, 9.95};

//Performance 200m hommes

std::vector<double> Lyles200m = {19.47, 19.52, 19.67, 19.80, 19.83};
std::vector<double> Knighton200m = {19.72, 19.75, 19.77, 19.87, 19.89};
std::vector<double> Tebogo200m = {19.50, 19.81, 19.87, 19.97, 20.00};
std::vector<double> Bednarek200m = {19.79, 19.82, 19.95, 19.96, 19.98};
std::vector<double> Hughes200m = {19.93, 19.95, 19.96, 19.97, 19.98};
std::vector<double> DeGrasse200m = {19.76, 19.89, 20.01, 20.10, 20.14};
std::vector<double> Ogando200m = {19.99, 20.02, 20.08, 20.14, 20.23};
std::vector<double> King200m = {20.00, 20.01, 20.10, 20.16, 20.29};


//Sprinters hommes
Sprinter Lyles(24, 79, 1.80, USA, "Lyles", "Noah", "M", "Athlétisme", {"100m", "200m"}, {"9.83s", "19.31s"}, Lyles100m, Lyles200m);
Sprinter Coleman(25, 79, 1.75, USA, "Coleman", "Christian", "M", "Athlétisme", {"100m"}, {"9.76s"}, Coleman100m);
Sprinter Omanyala(26, 70, 1.75, Kenya, "Omanyala", "Ferdinand", "M", "Athlétisme", {"100m"}, {"9.77s"}, Omanyala100m);
Sprinter Tebogo(24, 70, 1.75, Botswana, "Tebogo", "Letsile", "M", "Athlétisme", {"100m", "200m"}, {"9.88s", "19.50s"},Tebogo100m, Tebogo200m);
Sprinter Kerley(26, 75, 1.80, USA, "Kerley", "Fred", "M", "Athlétisme", {"100m"}, {"9.76s"}, Kerley100m);
Sprinter Hughes(26, 75, 1.80, RoyaumeUni, "Hughes", "Zharnel", "M", "Athlétisme", {"100m", "200m"}, {"9.83s", "19.73s"}, Hughes100m, Hughes200m);
Sprinter Simbine(27, 75, 1.80, AfrSud, "Simbine", "Akani", "M", "Athlétisme", {"100m"}, {"9.84s"}, Simbine100m);
Sprinter Seville(26, 75, 1.80, Jamaïque, "Seville", "Oblique", "M", "Athlétisme", {"100m"}, {"9.86s"}, Seville100m);
Sprinter Knighton(20, 77, 1.91, USA, "Knighton", "Erriyon", "M", "Athlétisme", {"200m"}, {"19.49s"}, Knighton200m);
Sprinter Bednarek(25, 77, 1.88, USA, "Bednarek", "Kenneth", "M", "Athlétisme", {"200m"}, {"19.68s"}, Bednarek200m);
Sprinter DeGrasse(30, 70, 1.76, Canada, "De Grasse", "Andre", "M", "Athlétisme", {"200m"}, {"19.62s"}, DeGrasse200m);
Sprinter Ogando(24, 70, 1.76, RepDom, "Ogando", "Alexander", "M", "Athlétisme", {"200m"}, {"19.91s"}, Ogando200m);
Sprinter King(30, 68, 1.81, USA, "King", "Kyree", "M", "Athlétisme", {"200m"}, {"20.00s"},King200m);

Sprinter liste_sprinters_H_100m[8] = {Lyles, Coleman, Omanyala, Tebogo, Kerley, Hughes, Simbine, Seville};
Sprinter liste_sprinters_H_200m[8] = {Lyles, Knighton, Tebogo, Bednarek, Hughes, DeGrasse, Ogando, King};

//Performance 100m femmes
std::vector<double> Richardson100m = {10.65, 10.71, 10.75, 10.75, 10.76};
std::vector<double> Jackson100m = {10.65, 10.70, 10.72, 10.78, 10.79};
std::vector<double> TaLou100m = {10.75, 10.75, 10.75, 10.78, 10.79};
std::vector<double> AsherSmith100m = {10.85, 10.96, 10.97, 10.98, 11.00};
std::vector<double> Alfred100m = {10.83, 10.84, 10.89, 10.92, 10.93};
std::vector<double> Fraser100m = {10.62, 10.67, 10.77, 10.82, 10.83};
std::vector<double> ThompsonHerah100m = {10.79, 10.84, 10.92, 11.00, 11.06};
std::vector<double> Swoboba100m = {10.97,10.98, 11.01, 11.03, 11.07};

//Performance 200m femmes
std::vector<double> Richardson200m = {21.92, 21.94, 22.07, 22.20, 22.54};
std::vector<double> Jackson200m = {21.41, 21.48, 21.57, 21.82, 21.86};
std::vector<double> TaLou200m = {22.10, 22.26, 22.34, 22.64, 22.70};
std::vector<double> AsherSmith200m = {22.23, 22.28, 22.34, 22.43, 22.58};
std::vector<double> Alfred200m = {21.73, 21.91, 22.08, 22.09, 22.28};
std::vector<double> Thomas200m = {21.60, 21.81, 21.97, 22.05, 22.67};
std::vector<double> Neita200m = {22.16, 22.21, 22.25, 22.35, 22.50};
std::vector<double> Strachan200m = {22.15, 22.16, 22.29, 22.30, 22.31};

//Sprinters femmes
Sprinter Richardson(24, 55, 1.65, USA, "Richardson", "Sha'Carri", "F", "Athlétisme", {"100m", "200m"}, {"10.65s", "21.92s"}, Richardson100m, Richardson200m);
Sprinter Jackson(30, 60, 1.70, Jamaïque, "Jackson", "Shericka", "F", "Athlétisme", {"100m", "200m"}, {"10.65s", "21.41s"},Jackson100m,  Jackson200m);
Sprinter TaLou(36, 60, 1.70, CoteIvoire, "Ta Lou", "Marie-Josee", "F", "Athlétisme", {"100m", "200m"}, {"10.72s", "22.08s"}, TaLou100m, TaLou200m);
Sprinter AsherSmith(28, 60, 1.70, RoyaumeUni, "Asher-Smith", "Dina", "F", "Athlétisme", {"100m", "200m"}, {"10.83s", "21.88s"},AsherSmith100m, AsherSmith200m);
Sprinter Alfred(23, 60, 1.70, SainteLucie, "Alfred", "Julien", "F", "Athlétisme", {"100m", "200m"}, {"10.81s", "21.91s"}, Alfred100m, Alfred200m);
Sprinter Fraser(38, 60, 1.70, Jamaïque, "Fraser-Pryce", "Shelly-Ann", "F", "Athlétisme", {"100m"}, {"10.60s"}, Fraser100m);
Sprinter ThompsonHerah(32, 60, 1.70, Jamaïque, "Thompson-Herah", "Elaine", "F", "Athlétisme", {"100m"}, {"10.54s"}, ThompsonHerah100m);
Sprinter Swoboba(26, 60, 1.70, Pologne, "Swoboda", "Ewa", "F", "Athlétisme", {"100m"}, {"10.94s"}, Swoboba100m);
Sprinter Thomas(28, 60, 1.75, USA, "Thomas", "Gabrielle", "F", "Athlétisme", {"200m"}, {"21.60s"}, Thomas200m);
Sprinter Neita(28, 60, 1.75, RoyaumeUni, "Neita", "Daryll", "F", "Athlétisme", {"200m"}, {"22.16s"}, Neita200m);
Sprinter Strachan(27, 60, 1.75, Bahamas, "Strachan", "Anthonique", "F", "Athlétisme", {"200m"}, {"22.15s"}, Strachan200m);

Sprinter liste_sprinters_F_100m[8] = {Richardson, Jackson, TaLou, AsherSmith, Alfred, Fraser, ThompsonHerah, Swoboba};
Sprinter liste_sprinters_F_200m[8] = {Richardson, Jackson, TaLou, AsherSmith, Alfred, Thomas, Neita, Strachan};
#endif //TEST_JO_INITIALISATION_SPRINTERS_H
