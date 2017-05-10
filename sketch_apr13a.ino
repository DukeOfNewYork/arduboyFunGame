#include <Arduboy2.h>
#include "CubeSprite.h"
#include "quests.h"
#include "titles.h"


Arduboy2 arduboy;
Sprites sprites;


//fun veriables!
byte questerMarkerFrame = 0;
byte manFrame = 0;
//detects any directional button press
byte DirectionPress = 0;
//the players location
int playerx = 0;
int playery = 0;
//the current rooms location
int xRoom = 0;
int yRoom = 0;

int playerRunFrame=0;

int pageDisplayed = 0;

void setup()
{
  arduboy.begin();
  arduboy.clear();
  arduboy.setFrameRate(30);
  
}
//the game loop proper!
void loop() {
    if (!arduboy.nextFrame()) {
    return;
  }
    arduboy.clear();
mainGameLoop();
  arduboy.display();
}
//Loops and displays current Quests
void questPage(){
  arduboy.clear();
  arduboy.setCursor(0, 8);
  arduboy.print(currentQuests[0]);
  arduboy.setCursor(0, 16);
  arduboy.print(currentQuests[1]);
  arduboy.setCursor(0, 24);
  arduboy.print(currentQuests[2]);
  arduboy.display();
}

void menuManager(){
      
    switch(pageDisplayed){
    case '0' : mainGameLoop();
    break;
  }
    
}

void mainGameLoop(){
  //steps the man animation and the quest animation
  frameStepM();
  frameStepQ();

  //draws the player and their animation frame
  sprites.drawSelfMasked(playerx,playery, player, playerRunFrame);
  //detects if the player is moving in any direction
  anyDirectionPress();
  //moves the players location and loops the direction sprite 
  playerMovement();
  //checks if on the edge of the screen!
  checkEdge();
  //a quick check for player movement, if there is none then it switches to the idle frame
  if(DirectionPress == 0){
    playerRunFrame = 0;
  }
  arduboy.display();
}

//input x,y cordanates for a man with a quest marker!
void manWithQuest(int tmpx, int tmpy){
  sprites.drawSelfMasked(tmpx, tmpy, QuestMaker, questerMarkerFrame);
  sprites.drawSelfMasked((tmpx-5), (tmpy+9), cube, manFrame);
}
//sets the animation speed for the quest marker
void frameStepQ(){
  if (arduboy.everyXFrames(6)) questerMarkerFrame++;
  if (questerMarkerFrame > 3) questerMarkerFrame = 0;
}

//sets the animation speed for the man with quest
void frameStepM(){
  if (arduboy.everyXFrames(5)) manFrame++;
  if (manFrame > 7) manFrame = 0;

}

//sets the animation loop speed
void playerRun(int startFrame,int endFrame){
  if (arduboy.everyXFrames(3)) playerRunFrame++;
  if (playerRunFrame > endFrame) playerRunFrame = startFrame;
  if (playerRunFrame < startFrame) playerRunFrame = startFrame;
  
}


void anyDirectionPress() {
  if(arduboy.pressed(UP_BUTTON) || arduboy.pressed(DOWN_BUTTON) || arduboy.pressed(RIGHT_BUTTON) || arduboy.pressed(LEFT_BUTTON)){
    DirectionPress = 1;
  } else {
    DirectionPress = 0;
  }
}
  void playerMovement() {
    
    if ( arduboy.pressed(UP_BUTTON)){
      playery -= 1;
      playerRun(3,4);
    } else if (arduboy.pressed(DOWN_BUTTON)){
      playery += 1;
      playerRun(1,2);
    }
    if (arduboy.pressed(RIGHT_BUTTON)){
      playerx += 1;
      playerRun(1,2);
    }else if (arduboy.pressed(LEFT_BUTTON)){
      playerx -= 1;
      playerRun(3,4);
    }
  }

     void stuffOnScreen(){
    if(yRoom == 0 && xRoom == 0){
        manWithQuest(16,16);
        manWithQuest(72,34);
    }
  }
  
  void checkEdge(){
stuffOnScreen();
    switch(playery){
      case 60:
      yRoom +=1;
      playery = -5;
      break;
      case -10:
      yRoom -= 1;
      playery = 55;
      break;
    }
    switch(playerx){
      case -10:
      playerx = 120;
      xRoom -=1;
      break;
      case 125:
      xRoom += 1;
      playerx = -5;
      break;
    }
  }


