# Cuadrados minimos lineales

La implementacion de CML se encuentra en `src/cml.cpp`.

Los scripts de preprocesamiento en la carpeta `tools`.

La experimentación en la carpeta `notebooks` y se corre con `jupyter`.

Para correr los notebooks

```
eval "$(pyenv init -)"
pyenv global 3.6.5
pyenv virtualenv 3.6.5 tp3
pyenv activate tp3
pip install -r requirements.txt
jupyter notebook notebooks/
```

## Más ayuda

Compilar y correr el archivo `help.cpp`.

```
g++ help.cpp -o help
./help
```
