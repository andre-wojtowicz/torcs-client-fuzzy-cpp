# TORCS Fuzzy Client

An exemplary fuzzy-driven AI client for [The Open Racing Car Simulator](http://torcs.sourceforge.net/) (TORCS). It uses [Computational Intelligence in Games](https://sourceforge.net/projects/cig/files/SCR%20Championship/) client and the project is designed for CIG client-server architecture. The driver is written in [Fuzzy Control Language](https://en.wikipedia.org/wiki/Fuzzy_Control_Language) and uses [fuzzylite](http://www.fuzzylite.com/) library. The original client files are slightly updated and changed.

The project is released as a proof-of-concept and it ought to be improved as, for example, an assignment for students. The driver uses only few available input variables; more about sensors and effectors of a car and the server can be found in [Simulated Car Racing Championship: Competition Software Manual](http://arxiv.org/abs/1304.1672).

To build the project you must provide [fuzzylite](http://www.fuzzylite.com/) 5.1 libraries. In the Release section you can find compiled program with FCL driver.

### Usage

```
$ .\torcs-client-fuzzy.exe
Config:
        host: localhost
        port: 3001
        id: SCR_Fuzzy
        max steps: 0
        max episodes: 0
        track name: unknown
        stage: unknown
        fcl file: driver.fcl

Sending init: SCR_Fuzzy(init -90 -75 -60 -45 -30 -20 -15 -10 -5 0 5 10 15 20 30 45 60 75 90)
Driver identified
trackPos: -0.299, angle: -0.000, speedX: 61.793, track9: 200.000, steer: -0.000, accel: 1.000, brake: 0.000
Client shutdown
Bye bye!
```

### Remarks 

The project is notably inspired by [TORCS Fuzzy Logic Robot](https://vimeo.com/14217569), written by my university classmates.
