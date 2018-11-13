# todo:
1. cle gamebuino + arduino * 4

# step workshop 30 min:

1. Expliquer `loop()` et `setup()`
2. Montre `image.hpp` + pixel art tuto
3. Commencer a print le monde + la map + licorne
5. Coder ajouter la physique
6. Coder les events (expliquation des if + else if)
7. Enjoy and play


# detail step workshop:

1. **Expliquation loop + setup (expliquer le concept de fonction):**

	1.	Expliquer ce que c'est une fonction (bloc ou on defini un ensemble d'insctruction qui peux etre executer par la machine si on l'appel (appeller une fonction est une insctruction))
	2. `setup()` --> Cette fonctions sert à setup l'hardware de la console, elle peux aussi servir à paramatrer des variables avant de lancer le jeu (en gros cette fonction set tout ce qu'il faut set pour le bon fonctionnement du programme)
	3. `loop()` --> Cette fonction sera le code executer par la console en boucle ce qui permet de faire de l'affichage et bien d'autre choses comme des robots, des jeux....
	4. Expliquer ce que c'est un include (sert à charger du code dans un autre fichier pour le reutiliser)
	5. Montre le `game.hpp` qui include `GameBuino.h` (la lib de la console) + tout mes .h pour le jeux


2. **Image est un .h:**
	1.	Expliquer ce que c'est une variable ()
	1. Dans `image.hpp` il à des variables constante (qui ne change jamais), ce sont des tableaux d'hexa qui sont ici une couleur (chaque couleur == un pixel) ces datas de pixels serviront plus tard pour afficher le personnage les nuages ....
	2. ouvrire le site <https://www.piskelapp.com/p/agxzfnBpc2tlbC1hcHByEwsSBlBpc2tlbBiAgKCwkOOrCgw/edit> pour
	cree sont pixel art on peux après le convertir en hexa sur cette page (drop le fichier DL)
	<https://gamebuino.com/creations/png-to-code>


3. **Commencer a print le debut du jeu:**
	1. création leur premier variables `Map et World (le Nom des class)` (expliquer une variables)
		> Syntaxe C++ :
		```
			Type *	name = new Type() -->
			Type == La classe Utiliser
			* name == pour le pointer
			new Type() == Malloc la classe avec appele de sont constructeur

			Map * myname_var = new Map();
		```
		> Prototype des constructeur:
		```
			Map::Map(void)
			World::World(Character *, Map *)
		```
	2. Appeler les fonctions de `print_sky()` de la class World et la fonction `print()` de la class Map (dans un ordre specifique sky map licorne)
		> Syntaxe:
		```
			[pointer_name]->fonction_name();
		```
	3. On peut Televerser le programme pour envoyer le jeu sur la GameBuino;


5. **Ajout de la vie, la mort et la gravite:**
	1. Pour ajouter la graviter on peux appeler la fonction `World::add_physical(void)`
	2. Pour ajouter la mort on peux appeler la fonction `World::check_end(void)`
	6. Televerser le programme (Normalement la licorne devrait tomber)


6. **Ajout des events:**
	1. Expliquer ce que c'est un If et un Else If
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
