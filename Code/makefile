all: spacex

spacex: main.o SimulationStore.o State.o Launch.o Button.o Cargo.o Command.o Contents.o CrewDragon.o Dragon.o DragonFactory.o DragonSpacecraft.o Engine.o EngineFactory.o FalconHeavy.o FalconNine.o FalconRocket.o FirstStage.o Humans.o Memento.o MerlinEngine.o LaunchState.o Observer.o  Satellite.o SecondStage.o SpaceXFactory.o SpaceXProperty.o Stage.o VacuumEngine.o
		g++  main.o SimulationStore.o State.o Launch.o  Button.o Cargo.o Command.o Contents.o CrewDragon.o Dragon.o DragonFactory.o DragonSpacecraft.o Engine.o EngineFactory.o FalconHeavy.o FalconNine.o FalconRocket.o FirstStage.o Humans.o  Memento.o MerlinEngine.o LaunchState.o Observer.o  Satellite.o SecondStage.o SpaceXFactory.o SpaceXProperty.o Stage.o VacuumEngine.o  -o spacex

main.o: main.cpp
		g++ -c -g main.cpp

Button.o: Button.cpp
		g++ -c -g Button.cpp

Cargo.o: Cargo.cpp
		g++ -c -g Cargo.cpp

Command.o: Command.cpp
		g++ -c -g Command.cpp

Contents.o: Contents.cpp
		g++ -c -g Contents.cpp

CrewDragon.o: CrewDragon.cpp
		g++ -c -g CrewDragon.cpp

Dragon.o: Dragon.cpp
		g++ -c -g Dragon.cpp

DragonFactory.o: DragonFactory.cpp
		g++ -c -g DragonFactory.cpp

DragonSpacecraft.o: DragonSpacecraft.cpp
		g++ -c -g DragonSpacecraft.cpp

Engine.o: Engine.cpp
		g++ -c -g Engine.cpp

EngineFactory.o: EngineFactory.cpp
		g++ -c -g EngineFactory.cpp

FalconHeavy.o: FalconHeavy.cpp
		g++ -c -g FalconHeavy.cpp

FalconNine.o: FalconNine.cpp
		g++ -c -g FalconNine.cpp

FalconRocket.o: FalconRocket.cpp
		g++ -c -g FalconRocket.cpp

FirstStage.o: FirstStage.cpp
		g++ -c -g FirstStage.cpp

Humans.o: Humans.cpp
		g++ -c -g Humans.cpp

Launch.o: Launch.cpp
		g++ -c -g Launch.cpp

Memento.o: Memento.cpp
		g++ -c -g Memento.cpp

MerlinEngine.o: MerlinEngine.cpp
		g++ -c -g MerlinEngine.cpp

LaunchState.o: LaunchState.cpp
		g++ -c -g LaunchState.cpp

Observer.o: Observer.cpp
		g++ -c -g Observer.cpp

Satellite.o: Satellite.cpp
		g++ -c -g Satellite.cpp

SecondStage.o: SecondStage.cpp
		g++ -c -g SecondStage.cpp

SpaceXFactory.o: SpaceXFactory.cpp
		g++ -c -g SpaceXFactory.cpp

SpaceXProperty.o: SpaceXProperty.cpp
		g++ -c -g SpaceXProperty.cpp

Stage.o: Stage.cpp
		g++ -c -g Stage.cpp

VacuumEngine.o: VacuumEngine.cpp
		g++ -c -g VacuumEngine.cpp

State.o: State.cpp
		g++ -c -g State.cpp

SimulationStore.o: SimulationStore.cpp
		g++ -c -g SimulationStore.cpp

clean:
	rm -rf *.o *.icloud spacex

