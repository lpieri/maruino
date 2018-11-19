# todo (Delay):
1. cle gamebuino + arduino * 4

# step workshop 30 min:

1.	Présentation
2.	Expliquer le concept d'une fonction
4.	Commencer à print `le monde` + `la map` + `licorne`
6.	Coder pour ajouter la physique
7.	Coder les events (explication des `if`)
8.	Enjoy and play

# detail step workshop:

0.	**Présentations animateur enfants:**

	1.	Présentation
	2.	Briser la glace avec des questions du genre (ton jeu pref ?)
	3.	Présenter gamebuino et les jeux rétro (Mario, Sonic...)
	4.	Expliquer comment marche le code et où on le trouve avec des exemples courant : téléphone, Facebook, jeux vidéo, console de jeux.... (le code sert à communiquer avec la machine et à lui donner des ordres)


1. **Expliquer le concept de fonction:**

	1.	Expliquer ce que c'est une fonction (bloc où on définit un ensemble d'insctructions qui peut-être exécuté par la machine si on l'appelle (appeler une fonction est une instruction))
	2. `setup()` --> Cette fonction sert à setup l'hardware de la console, elle peut aussi servir à paramétrer des variables avant de lancer le jeu (en gros cette fonction set tout ce qu'il faut set pour le bon fonctionnement du programme et de la console)
	3. `loop()` --> Cette fonction sera le code exécuter par la console en boucle ce qui permet de faire de l'affichage et bien d'autre chose comme des robots, des jeux....
	4. Expliquer ce que c'est un include (sert à charger du code dans un autre fichier pour le réutiliser)
	5. [optionnel] Montre le `game.hpp` qui include `GameBuino.h` (la lib de la console) + tous mes .h pour le jeu (exemple: un livre de magie avec plein de sort où on peut les appeler en disant la formule du sort)


2. **Je commence à coder.com:**
	1.	Expliquer ce que c'est une variable (c'est un container qui contient des choses d'une certaine typologie, ```ex une boutielle contient des types liquides```, ```un frigo des types bouffes```. ce qu'il contient peut `influencer tout le reste du code`) expliquer les types que l'on a (`Map`, `World`, `Character`) en montrant les lignes dans le code
	2. création de leur première variable `Character`
		> Syntaxe C++ :
		```
			Type *	name = new Type();
			 - Type == La classe Utiliser
			 - * name == pour le pointer
			 - new Type() == Malloc la classe avec appele de sont constructeur

			Character*	name = new Unicorn();
		```
		> Prototype du constructeur:
		```
			Unicorn::Unicorn(void)
		```
	3.	Remplir le world avec le personnage (rajouter le nom de la variable a la place `/*??*/`) (expliquer les paramètres des fonctions)
	4.	On peut Televerser le programme pour envoyer le jeu sur la GameBuino (montrer les boutons en haut à gauche (la flèche (trop de parenthèse (récursive))));
	5.	Ajouter les autres prints en plus de l'exemple `maps->print();` (le personnage + le world) (il y a un ordre d'affichage 1 world, 2 map, 3 personnage sinon ça s'overwrite), (vous pouvez le laisser écrire dans n'importe quel ordre pour lui expliquer que le code s'exécute de façon bête et méchant (de haut en bas))


5. **Ajout de la vie, la mort et la gravite 42:**
	1. Pour ajouter la gravite on peut appeler la fonction `World::add_physics(void)` (`name_var_world->add_physics()`)
	2. Téléverser le programme (normalement la licorne devrait tomber mais elle ne peut pas bouger)


6. **Ajout des events/utilisation des buttons:**
	1. Expliquer ce que c'est un If
	2.	Il y a des fonctions pour tous les events `Unicorn::jump(void)`, `Unicorn::run(int& starter_map)`, `Unicorn::moveBack(int& starter_map)`. Pour get le starter de la map il faut appeler une fonction `Map::getStart(void)`.
	3. Commencer à écrire le code:
		1. Exemple pour les events:
			```
			if (gb.buttons.repeat(Bouton, temps))
				fonction to execute
			```
		2. Gamebuino ont plusieurs fonctions pour les events des boutons comme `repeat()` pour appuyer longtemps sur une touche ou `pressed()` pour le faire qu'une seule fois. Pour référencer les boutons Gamebuino ont créé plusieurs macros:
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

### Dans le dossier workshop il y le code step by step :)

**Pour les personnes non intéressées: terminer l'atelier rapidement et discuter avec lui (orientation, la programmation t'intéresse ?)**
**Pour les intéresses et/ou les plus "experts": site gamebuino (tuto, autres jeux), discord, orientation dev --> stand Le-101**