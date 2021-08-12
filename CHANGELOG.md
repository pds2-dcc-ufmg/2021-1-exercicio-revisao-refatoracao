## Change log

#### Coding Style

​	As it seems there is no guideline specified, I chose to follow the [Google C++ Styleguide](https://google.github.io/styleguide/cppguide.html).

#### Renaming, formatting and organizing data

 1. Changing the class *Cliente*.

    - Renamed variables and methods to match the chosen guideline ([catalog](https://refactoring.com/catalog/renameVariable.html)).
    - Altered the class members to be private, and have access and modifier methods.
    - Added a constructor, as it helps to get rid of a lot of repeated logic on *main.cpp*.
    - Changed indentation and spacing of some files.
    - Changed list of clients in _main.cpp_ to use an array, as it naturally should.

 2. Changing the class *Imovel* and its subclasses.

    - Almost the same changes as the four first points of the last class, but I've used protected members, instead of private, once there are subclasses.

    - Removed redundant storage ([catalog](https://refactoring.com/catalog/replaceDerivedVariableWithQuery.html)).

      

