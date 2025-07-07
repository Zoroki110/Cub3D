# Cub3D

## 📝 Aperçu du projet

**Cub3D** est un premier RayCaster écrit en **C** utilisant la **MiniLibX**, inspiré de *Wolfenstein 3D*. L’objectif est de comprendre les principes du ray-casting pour rendre dynamiquement une scène 3D à partir d’une carte 2D au format `.cub` dans laquelle le joueur peut se déplacer et tourner en temps réel :contentReference[oaicite:4]{index=4}.

---

## 🎯 Fonctionnalités

- ✅ **Ray-casting en temps réel** : rendu 3D d’un labyrinthe à partir d’une map 2D.  
- ✅ **Textures murales** : images XPM différentes pour les faces Nord, Sud, Est, Ouest.  
- ✅ **Couleurs sol/plafond** personnalisables via le fichier `.cub`.  
- ✅ **Déplacement & rotation** : touches **W/A/S/D** pour avancer/reculer/déplacer latéralement, flèches **←/→** pour pivoter la caméra.  
- ✅ **Gestion de la fenêtre** : fermeture propre au clic sur la croix ou à la touche **ESC**.  
- ✅ **Parsing robuste** du fichier de configuration `.cub` (textures, couleurs, carte) avec détection d’erreurs et sortie `"Error\n"` en cas de problème :contentReference[oaicite:5]{index=5}.  
- ✅ **Libft intégrée** : utilisation de la bibliothèque personnelle pour les fonctions basiques.  
- ✅ **Gestion mémoire** sans fuites.

---

## 🚀 Prérequis

- **GCC** ou autre compilateur C conforme (C99 ou supérieur).  
- **make**.  
- **MiniLibX** installée (ou compilée depuis les sources).  
- Environnement UNIX-like (Linux/macOS).

---

## 🚀 Installation & Exécution

```bash
# Cloner le dépôt
git clone https://github.com/Zoroki110/Cub3D.git
cd Cub3D

# Compiler
make

# Exécuter avec une map .cub
./cub3D maps/example_map.cub
```