### Radio Logger: Your whimsical, extensible, and ready to use logger for C++ applications
> *Video might have killed radio stars, but this electromagnetically inspired logger class is here to stay.*
> <br><cite> The Buggles (probably) </cite>

### Usage
You use your radio (a singleton class) to query a certain channel.
Each channel can make use of multiple modulations.
File-modulation and standard-output modulations are ready to be used out of the box.

### Example
You will find a simple example in the test folder.
To run it, create a new folder called build:

> mkdir build && cd build

Then run cmake and make to compile the project:

> cmake .. && make

Finally, run the test application with:

> ./log_test
