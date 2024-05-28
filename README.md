Clone the project

`git clone https://github.com/lolirelia/GDExDemo.git`

Load the godot-cpp submodule

`git submodule update --init --recursive`

Run scons

`scons`

The first time this is done it will take a couple of minutes because the entire godot-cpp library has to be compiled.
Every subsequent compilation will take just a couple of seconds since it will only need to compile your own source files

Once the project is compiled, the .gdextenion file will look for the relevant library depending on which OS you're currently running.
You can create a new project in the same directory as the .gdextension file or use the existing project.
When the engine launches it will use the .gdextension file to automatically load the libraries into the engine.



