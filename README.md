INSTALLATION

```
git clone https://gitlab.com/JonathanDUFOUR/mkgen.git
cd mkgen
git submodule init
git submodule update
```

First, you have to define the MK_PATH macro with the path to the directory you store your mk templates in.
You can now run
```
make mkgen
sudo cp mkgen /usr/bin/
make fclean
```

DONE !

Note: make sure that `/usr/bin` is in you PATH
