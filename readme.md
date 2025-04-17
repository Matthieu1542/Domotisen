# DOMOTISEN
# Projet STM32 DOMOTISEN (ATAROUWA Abdou-Malik / HADJ-SAID Matthieu / CARLUT Adam)
# Centrale Domotique Connectée 

# I - Description :

Ce projet consiste en la création d'une centrale domotique multifonctions avec interface tactile embarquée. L'objectif est d'offrir une gestion simple et intuitive de différents dispositifs de la maison, tout en assurant un contrôle optimal de l'énergie et de la sécurité.


# II - Objectifs :

•	Gestion des volets roulants via servomoteurs.

•	Détection de présence et d’intrusion avec des capteurs PIR.

•	Affichage des données environnementales (température, humidité, séisme).

•	Optimisation de la consommation d’énergie avec des fonctionnalités comme la mise en veille automatique de l’écran.


# III - Matériel utilisé & connexions :

## *1. STM32F746G :*

Carte principale utilisée pour la logique embarquée, l’affichage et la gestion des périphériques.


## *2. Base Shield (sur le STM32 via headers) :*

Permet de connecter facilement les capteurs Grove avec des câbles 4 broches.


## *3. IKS01A3 (Capteur environnemental) :*

•	Connexion : Grove I2C → Base Shield I2C (port I2C1 par défaut sur STM32)

•	Broches utilisées :

-	SCL → PB8

-	SDA → PB9

-	VCC → 3.3V

- GND → GND


## *4. Capteurs PIR (x2) (Détection de mouvement) :*

•	Utilisation de câbles Dupont pour les connecter à la Base Shield ou directement au STM32.

•	PIR 1 → D6 (PH6) → Alarme

•	PIR 2 → D7 (PI3) → Veille

•	Câblage :

-	Signal → D6 / D7

-	VCC → 5V

-	GND → GND


## *5. Buzzer (Alarme sonore) :*

Connecté sur D5 (PI0)

Signal : sortie digitale HIGH/LOW pour activer le son (PWM).


## *6. Servomoteurs (x2) (Contrôle des volets roulants) :*

Câblage avec Dupont vers des sorties PWM du STM32 via Base Shield.

•	Servo 1 → D10 (PA8)

•	Servo 2 → D9 (PA15)

•	Câblage :

-	Signal → D9 / D10 (PWM)

-	VCC → 5V externe recommandé

-	GND → GND STM32


## *7. Capteur ultrason (Détection de proximité) :*

•	Câblé en Dupont directement sur le Base Shield ou STM32

•	Trigger → D7

•	Echo → D8

•	Alimentation : 5V + GND


# IV -	Réalisation du prototype

1.	Fixer la carte STM32 sur une base pour stabiliser l’écran (impression 3D)
   
2.	Connecter la Base Shield sur les headers (côtés GPIO)

3.	Branchement des modules avec câbles Grove (pour capteurs compatibles) ou Dupont pour les autres connexions

4.	Vérification des alimentations : ne pas dépasser les limites de 3.3V/5V
  
5.	Flasher le firmware après configuration via STM32CubeIDE


# V -	Logicielles utilisées

→	*TouchGFX*, pour la création de l'interface graphique

→	*STM32CubeIDE*, pour le développement embarqué en C/C++


# *Configuration logicielle*

## *1.	Créer l’interface TouchGFX :*

•	Ajouter des widgets (jauges, boutons, textes)

•	Lier les composants aux callbacks en C++ pour les actions utilisateur


## *2.	Configuration STM32CubeIDE :*

•	Configurer les pins, les interruptions, le PWM et I2C

•	Ajouter le code pour le traitement des capteurs, la logique des volets et la détection des mouvements


## *3.	Compilation et flash du code :*

Mode debug disponible pour observer le comportement du système


# VI - Fonctionnalités et Utilisations :

Le système propose une interface tactile intuitive, permettant à l'utilisateur d'interagir facilement avec les différentes fonctions domotiques :

•	*Affichage en temps réel des données environnementales :* température, humidité, détection de séisme, directement sur l’écran

•	*Détection d’intrusion :* grâce aux capteurs PIR, tout mouvement déclenche une alerte sonore via le buzzer

•	*Commande des volets roulants :* contrôle manuel depuis l'écran tactile

•	*Veille automatique de l'écran :* activation après une période d’inactivité pour réduire la consommation énergétique

•	*Mesures et actions automatiques :* les capteurs effectuent des relevés sans besoin d'intervention, garantissant un suivi constant de l’environnement


# VII -	Améliorations possibles :

→ *Intégration WiFi/Bluetooth :* Utilisation d'un module BLE pour ajouter la connectivité sans fil

→	*Application mobile :* Développer une application mobile pour contrôler le système à distance

→	*Commandes vocales :* Intégrer des commandes vocales

→	*Automatisation des volets roulants :* en fonction de la luminosité les volets s'ouvrent et se ferment


