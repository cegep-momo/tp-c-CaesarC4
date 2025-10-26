# Construire le projet
Vous pouvez utiliser un dev container de base C++ de VScode.
Le projet utilise cmake, pensez à l'inclure dans votre dev container.

Voici les lignes de commandes pour compiler le projet:
```
$ mkdir build
$ cd build
$ cmake ..
$ make
```

# Répertoire data

Il contient 2 fichiers `books.txt`et `users.txt` que vous pouvez utilisez pour tester votre code.
Pour ca il suffit de les copiers dans le repertoire `build` avec l'application `bibliotheque`

Question 1 : 
La fonctionnalité exploite std::filesystem pour gérer les chemins et fichiers de manière portable et sécurisée. En utilisant std::filesystem::path, cela cree des chemin fiable , on cree automatiquement le dossier data/ avec create_directories() et on ajoute dans data/ en mode (std::ios::app). Cela reduit les erreurs des chemins, et facilite la persistance des taches.