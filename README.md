# TORCS Fuzzy Client

An exemplary fuzzy-driven AI client for [The Open Racing Car Simulator](http://torcs.sourceforge.net/) (TORCS). It uses [Computational Intelligence in Games](https://sourceforge.net/projects/cig/files/SCR%20Championship/) client and the project is designed for CIG client-server architecture. The driver is written in [Fuzzy Control Language](https://en.wikipedia.org/wiki/Fuzzy_Control_Language) and uses [fuzzylite](http://www.fuzzylite.com/) library. The original client files are slightly updated and changed.

![Screenshot](https://andre-wojtowicz.github.io/torcs-client-fuzzy-cpp/torcs-screenshot.png)

The project is released as a proof-of-concept and it ought to be improved as, for example, an assignment for students. The driver uses only few available input variables; more about sensors and effectors of a car and the server can be found in [Simulated Car Racing Championship: Competition Software Manual](http://arxiv.org/abs/1304.1672).

To build the project you must provide [fuzzylite](http://www.fuzzylite.com/) 5.1 libraries. In the Release section you can find compiled program with FCL driver.

### Remarks 

The project is notably inspired by [TORCS Fuzzy Logic Robot](https://vimeo.com/14217569), written by my university classmates.
