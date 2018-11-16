# Sujet

###	Les types de variables differente:
	1.	Map*
	2.	World*
	3.	Character* (ou Unicorn*)

###	Comment creer une variable:
	Type_de_la_variable* 	nom_de_la_variable = new contenue_de_la_variable();

### Fonction D'affichage:
	1.	Print () [afficher]

###	Fonction D'event:
	1.	gb.buttons.pressed (bouttons)
	2.	gb.buttons.repeat (bouttons, temps)
	3.	Run (Debut de la map) [Courrir]
	4.	Moveback (Debut de la map) [Reculer]
	5.	Jump () [Sauter]
	6.	restart_game () [redemarrer le jeu]

###	Fonction pour ajouter la gravite, la mort, la vie, et l'univers
	1.	add_physics() [ajouter la physique]

### Bouttons de la Gamebuino:
	1.	BUTTON_A
	2.	BUTTON_B
	3.	BUTTON_MENU
	4.	BUTTON_LEFT
	5.	BUTTON_RIGHT
	6.	BUTTON_UP
	7.	BUTTON_DOWN

### Comment utiliser une fonction:

	1.	nom_de_la_fonction(parametre_1, parametre_2);

	2.	explication : les parenthèses servent a passer à la fonction des valeur exterieur pour influencer sont comportement.
	3.	Il faut toujours mettre un `;` pour terminer la ligne

	4. Pour appeler une fonction du personnage par exemple, il faut preciser le personnage en question:
		1.	nom_du_hero->nom_de_la_fonction(parametre....);
		2.	la fleches `->` sert à utiliser la fonction pour ce personnage.

### Toute les fonctions autre que `gb.display.repeat` ou `gb.display.pressed` sont a utiliser avec une flèche `->` avant