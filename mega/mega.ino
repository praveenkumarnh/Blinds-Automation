//time max
const uint16_t time_max = 28;
//blind up time
const uint16_t pin_room1_blind1_up_time = 25;
const uint16_t pin_room1_blind2_up_time = 24;
//blind down time
const uint16_t blind_down = 15;

// pin init
//room1 = Oliver
const int pin_room1_vblind1_up = 22;
const int pin_room1_vblind1_down = 23;
const int pin_room1_blind1_up = 24;
const int pin_room1_blind1_down = 25;
const int pin_room1_blind2_up = 26;
const int pin_room1_blind2_down = 27;
//room2 = Natalie
const int pin_room2_vblind1_up = 28;
const int pin_room2_vblind1_down = 29;
const int pin_room2_blind1_up = 30;
const int pin_room2_blind1_down = 31;
//room3 = Corridor upstairs
const int pin_room3_blind1_up = 31;
const int pin_room3_blind1_down = 32;
//room4 = Living room
const int pin_room4_vblind1_up = 33;
const int pin_room4_vblind1_down = 34;
const int pin_room4_vblind2_up = 35;
const int pin_room4_vblind2_down = 36;
const int pin_room4_vblind3_up = 37;
const int pin_room4_vblind3_down = 38;
//room5 = Kitchen
const int pin_room5_vblind1_up = 39;
const int pin_room5_vblind1_down = 40;
//room6 = Corridor downstairs
const int pin_room6_vblind1_up = 41;
const int pin_room6_vblind1_down = 42;
//room7 = Parents room
const int pin_room7_vblind1_up = 43;
const int pin_room7_vblind1_down = 44;


void setup() {
pinMode(pin_room1_vblind1_up, OUTPUT);
pinMode(pin_room1_vblind1_down, OUTPUT);
pinMode(pin_room1_blind1_up, OUTPUT);
pinMode(pin_room1_blind1_down, OUTPUT);
pinMode(pin_room1_blind2_up, OUTPUT);
pinMode(pin_room1_blind2_down, OUTPUT);
pinMode(pin_room2_vblind1_up, OUTPUT);
pinMode(pin_room2_vblind1_down, OUTPUT);
pinMode(pin_room2_blind1_up, OUTPUT);
pinMode(pin_room2_blind1_down, OUTPUT);
pinMode(pin_room3_blind1_up, OUTPUT);
pinMode(pin_room3_blind1_down, OUTPUT);
pinMode(pin_room4_vblind1_up, OUTPUT);
pinMode(pin_room4_vblind1_down, OUTPUT);
pinMode(pin_room4_vblind2_up, OUTPUT);
pinMode(pin_room4_vblind2_down, OUTPUT);
pinMode(pin_room5_vblind1_up, OUTPUT);
pinMode(pin_room5_vblind1_down, OUTPUT);
pinMode(pin_room6_vblind1_up, OUTPUT);
pinMode(pin_room6_vblind1_down, OUTPUT);
pinMode(pin_room7_vblind1_up, OUTPUT);
pinMode(pin_room7_vblind1_down, OUTPUT);
}

void loop() {

}

void room1_up() {
  digitalWrite(pin_room1_blind1_up, HIGH);
  digitalWrite(pin_room1_blind2_up, HIGH);
  for(float a = 0; a < time_max; a+=0.1){
    if(a>=pin_room1_blind1_up_time){
      digitalWrite(pin_room1_blind1_up, LOW);
    }
    if(a>=pin_room1_blind2_up_time){
      digitalWrite(pin_room1_blind2_up, LOW);
    }
    delay(100);
    }
  }
