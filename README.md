# maruino
Game for Gamebuino

todo:
1/ cle gamebuino + arduino * 4

step workshop:
1/ Expliquer loop et setup
2/ Montre image.hpp + pixel art tuto
3/ commencer a print le monde + la map
4/ coder Unicorn::print() + print la licorne (expliquation des la lib gamebuino)
5/ coder l'affichage des vies et ajouter la physique + le check de la mort (expliquation d'un boucle while)
6/ coder les events (expliquation des if + else if)
7/ Enjoy et play


detail step workshop:

1/ Expliquation loop + setup (expliquer le concept de fonction):
	1.0/ setup() --> Cette fonctions sert à setup l'hardware de la console, elle peux aussi servir à paramatrer
	des variables avant de lancer le jeu (en gros cette fonction set tout ce qu'il faut set pour le bon fonctionnement
	du programme)
	1.1/ loop() --> Cette fonction sera le code executer par la console en boucle ce qui permet de faire de l'affichage et
	bien d'autre choses comme des robots, des jeux....
	1.2/ Expliquer ce que c'est un include (sert à charger du code dans un autre fichier pour le reutiliser)
	1.3/ Montre le <game.hpp> qui include <GameBuino.h> (la lib de la console) + tout mes .h pour le jeux

2/ Image est un .h:
	2.0/ Dans image.hpp il à des variables constante (qui ne change jamais), ce sont
	des tableaux d'hexa qui sont ici une couleur (chaque couleur == un pixel) ces datas de pixels serviront plus
	tard pour afficher le personnage les nuages ....
	2.1/ ouvrire le site <https://www.piskelapp.com/p/agxzfnBpc2tlbC1hcHByEwsSBlBpc2tlbBiAgKCwkOOrCgw/edit> pour
	cree sont pixel art on peux après le convertir en hexa sur cette page (drop le fichier DL)
	<https://gamebuino.com/creations/png-to-code>

3/ Commencer a print le debut du jeu:
	3.0/ Leur faire include <game.hpp>
	3.1/ création leur premier variables <Map et World (le Nom des class)> (expliquer une variables)
		Syntaxe C++ :
			Type *	name = new Type() -->
				Type == La classe Utiliser
				* name == pour le pointer
				new Type() == Malloc la classe avec appele de sont constructeur
		Prototype des constructeur:
			Map::Map(void)
			World::World(Character *, Map *)
	3.2/ Set l'hardware avec la fonction <gb.begin();> dans la fonction setup()
	3.3/ Commencer a print des choses dans loop():
		Ajouter une boucle <while (!gb.update());> et <gb.display.clear();>:
		Le while sert a attendre d'un event se produit.
		La fonction clear(sert a clear les pixels de l'ecran).
	3.4/ Appeler les fonctions de print_sky() de la class World et la fonction print() de la class Map
		Syntaxe:
			[pt_name]->fonction_name();
	3.5/ On peut Televerser le programme pour envoyer le jeu sur la GameBuino;

4/ Coder Unicorn::print():
	4.0/ <Unicorn::print()> sert a dire que la fonction print appartient a la class Unicorn
	4.1/ Include <unicorn.hpp>
	4.2/ Ajouter deux variables global heartI et UnicornI qui seront la convertion des ImageData en struct Image
	de GameBuino
	4.3/ 2 option:
		- cree 4 variables (position_x, position_y, life, position_heart_x (tous des int))
		Il faudra set les valeurs de ces variable en recuperant des valeur de la class mère de Unicorn (la class Character)
		pour recuperer un valeur de cette class il faut une syntaxe specifique:
			Syntaxe C++:
				Character::_var_name
				si c'est une autre class comme un Vector:
					Character::_var_name.fonction()
		- instancer une variable de la Struct <Box> (si sturcture expliquer ce que c'est une structure
		(la definition d'une structure de C sera suffisante)) puis appeler la fontion <this->_init_box()>
		cette fonction retourne une Struct Box
			Expliquation du < this-> > une fonction de class a toujour une variable nommer this qui est un pointeur
			sur sa propre instancer
	4.4/ Appeler la fonction <gb.display.drawImage()> elle prend 5 param (c'est pas a la norme :)
		(x, y, Image, SizeX, SizeY)
	4.5/ Il peux print la licorne (cree un pointeur) le prototype du constructeur Unicorn::Unicorn(void)
	4.6/ Televerser le programme

5/ Ajout de la vie, la mort et la gravite:
	5.0/ Pour ajouter la graviter on peux appeler la fonction <World::add_physical(void)>
	5.1/ Pour ajouter la mort on peux appeler la fonction <World::check_end(void)>
	5.2/ Pour ajouter la vie on doit continuer de coder la fonction <Unicorn::print(void)>
	5.3/ Il faut crée un boucle <while> qui doit ce stopper quand <i est <= a box.life ou life> (expliquer ce que
	c'est un while)
	5.4/ a chaque tour du while appeler la fonction <Gamebuino::drawImage> avec la heartI et la position_x de heart et
	modifier la valeur de <position_heart_x> en supprimant la valeur S_HEART (macro dans <macro.hpp>) + 2
	5.5/ Televerser le programme (Normalement la licorne devrait tomber)

6/ Ajout des events:
	6.0/ Expliquer ce que c'est un If et un Else If
	6.1/ Pour les events du personnage il existe une fonction pour Jump <Character::jump(void)>, une autre pour Run
	<Character::run(void)> et une autre pour reculer <Character::moveBack(void)> ces fonctions sont aussi prototyper
	en <Unicorn::fonction(void)> car elle sont ovewrite par celle existante dans la class Unicorn (si trop complexe
	demander a @delay)
	6.2/ Commencer à ecrire le code:
		exemple pour les events:
			if (gb.buttons.repeat(Bouton, temps))
				fonction to execute
		Gamebuino a plusieurs fonction pour les events des boutons comme repeat() pour appuyer longtemps sur une touche
		ou pressed pour le faire qu'une seule fois. Pour dire sur quel bouton on appuye Gamebuino a plusieurs macro
		```BUTTON_A
		BUTTON_B
		BUTTON_MENU (used to be BUTTON_C)
		BUTTON_UP
		BUTTON_RIGHT
		BUTTON_DOWN
		BUTTON_LEFT```
	6.3/ Televerser le code

Dans le dossier workshop il le code step by step :)
