INSTALLATION

`
git clone https://gitlab.com/JonathanDUFOUR/mkgen.git
cd mkgen
`

First, you have to define the Makefile template you want to use, and store it whenever you want on your computer.
Once done, modify the TEMPLATE_FILENAME macro in the 'private/mkgen.h' header and put the full name of your own template.
You can now run
`
make mkgen
sudo cp mkgen /usr/bin/
make fclean
`

DONE !

Note: make sure that `/usr/bin` is in you PATH
