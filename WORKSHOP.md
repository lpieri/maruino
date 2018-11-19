# todo (Delay):
1. cle gamebuino + arduino * 4

# step workshop 30 min:

1.	Présentation
2.	Expliquer le concept d'une fonction
4.	Commencer a print `le monde` + `la map` + `licorne`
6.	Coder ajouter la physique
7.	Coder les events (expliquation des `if`)
8.	Enjoy and play

# detail step workshop:

0.	**Présentions animateur enfants:**

	1.	Presentation
	2.	Priser la glace avec des questions du genre (ton jeu pref)
	3.	Presenter gamebuino et les jeux retro (Mario, Sonic...)
	4.	Expliquer comment marche le code et ou on le trouve avec des exemples courant : telephone, facebook, jeux video, console de jeux.... (le code sert à communiquer avec la machine et lui donner des ordres)


1. **Expliquer le concept de fonction:**

	1.	Expliquer ce que c'est une fonction (bloc ou on defini un ensemble d'insctruction qui peux etre executé par la machine si on l'appel (appeller une fonction est une insctruction))
	2. `setup()` --> Cette fonction sert à setup l'hardware de la console, elle peut aussi servir à paramatrer des variables avant de lancer le jeu (en gros cette fonction set tout ce qu'il faut set pour le bon fonctionnement du programme et de la console)
	3. `loop()` --> Cette fonction sera le code executer par la console en boucle ce qui permet de faire de l'affichage et bien d'autre choses comme des robots, des jeux....
	4. Expliquer ce que c'est un include (sert à charger du code dans un autre fichier pour le reutiliser)
	5. Montre le `game.hpp` qui include `GameBuino.h` (la lib de la console) + tout mes .h pour le jeux (librairi == bibli ou on se sert uniquement des titres des livres (les functions)) (exemple livre de magie + sort + appel du sort) [optionnel]


2. **Je commence a coder.com:**
	1.	Expliquer ce que c'est une variable (c'est un container qui contient des choses d'une certaine typologie, ```ex une boutielle contient des types liquide```, ```un frigo des types bouffes```. ce qu'il contient peux `influencer tout le reste du code`) expliquer les types que l'on a (`Map`, `World`, `Character`) en montrant les lignes dans le code
	2. création de leur première variable `Character`
		> Syntaxe C++ :
		```
			Type *	name = new Type();
			 - Type == La classe Utiliser
			 - * name == pour le pointer
			 - new Type() == Malloc la classe avec appele de sont constructeur

			Character*	name = new Unicorn();
		```
		> Prototype des constructeur:
		```
			Unicorn::Unicorn(void)
		```
	3.	remplir le world avec le personnage (rajouter le nom de la variable a la place `/*??*/`) (expliquer les parametres des fonctions)
	4.	On peut Televerser le programme pour envoyer le jeu sur la GameBuino (montrer le boutons en haut a gauche (la flèche (trop de parenthèse (recursive))));
	5.	Ajouter les autres prints en plus de l'exemple `maps->print();` (le personnage + le world) (il a un ordre d'affichage 1 world, 2 map, 3 personnage sinon ca s'overwrite), (vous pouvez le laisser ecrire dans n'import qu'elle ordre pour lui expliquer que le code s'execute de facon bete et mechant (de haut en bas))


5. **Ajout de la vie, la mort et la gravite:**
	1. Pour ajouter la gravite on peux appeler la fonction `World::add_physics(void)` (`name_var_world->add_physics()`)
	2. Televerser le programme (Normalement la licorne devrait tomber mais elle peut pas bouger)


6. **Ajout des events/utilisation des buttons:**
	1. Expliquer ce que c'est un If
	2. Pour les events du personnage il existe une fonction pour Jump `Character::jump(void)`, une autre pour Run
	`Character::run(void)` et une autre pour reculer `Character::moveBack(void)` ces fonctions sont aussi prototyper
	en `Unicorn::fonction(void)` car elle sont ovewrite par celle existante dans la class Unicorn (si trop complexe
	demander a @delay)
	3. Commencer à ecrire le code:
		1. Exemple pour les events:
			```
			if (gb.buttons.repeat(Bouton, temps))
				fonction to execute
			```
		2. Gamebuino a plusieurs fonction pour les events des boutons comme repeat() pour appuyer longtemps sur une touche ou pressed pour le faire qu'une seule fois. Pour dire sur quel bouton on appuye Gamebuino a plusieurs macro
		```
		BUTTON_A
		BUTTON_B
		BUTTON_MENU (used to be BUTTON_C)
		BUTTON_UP
		BUTTON_RIGHT
		BUTTON_DOWN
		BUTTON_LEFT
		```
	4. Televerser le code

Dans le dossier workshop il le code step by step :)

pour les non interessees: terminer l'atelier rapidement et discuter avec lui (orientation, la programmation t'interesse?)
pour les interesses et/ou les plus "experts": site gamebuino (tuto, autres jeux), discord, orientation dev --> stand Le-101