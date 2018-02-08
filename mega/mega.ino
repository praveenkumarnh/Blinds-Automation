//time max
const uint8_t time_max = 28;
//blind up time
const uint8_t pin_room1_blind1_up_time = 25;
const uint8_t pin_room1_blind2_up_time = 24;
//blind down time
const uint8_t blind_down = 15;
const uint8_t pin_room1_blind1_down_time = 15;
const uint8_t pin_room1_blind2_down_time = 10;

// pin init
//room1 = Oliver
const uint8_t pin_room1_vblind1_up = 22;
const uint8_t pin_room1_vblind1_down = 23;
const uint8_t pin_room1_blind1_up = 24;
const uint8_t pin_room1_blind1_down = 25;
const uint8_t pin_room1_blind2_up = 26;
const uint8_t pin_room1_blind2_down = 27;
//room2 = Natalie
const uint8_t pin_room2_vblind1_up = 28;
const uint8_t pin_room2_vblind1_down = 29;
const uint8_t pin_room2_blind1_up = 30;
const uint8_t pin_room2_blind1_down = 31;
//room3 = Corridor upstairs
const uint8_t pin_room3_blind1_up = 31;
const uint8_t pin_room3_blind1_down = 32;
//room4 = Living room
const uint8_t pin_room4_vblind1_up = 33;
const uint8_t pin_room4_vblind1_down = 34;
const uint8_t pin_room4_vblind2_up = 35;
const uint8_t pin_room4_vblind2_down = 36;
const uint8_t pin_room4_vblind3_up = 37;
const uint8_t pin_room4_vblind3_down = 38;
//room5 = Kitchen
const uint8_t pin_room5_vblind1_up = 39;
const uint8_t pin_room5_vblind1_down = 40;
//room6 = Corridor downstairs
const uint8_t pin_room6_vblind1_up = 41;
const uint8_t pin_room6_vblind1_down = 42;
//room7 = Parents room
const uint8_t pin_room7_vblind1_up = 43;
const uint8_t pin_room7_vblind1_down = 44;


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
  for(float a = 0; a <= time_max; a+=0.1){
    if(a>=pin_room1_blind1_up_time || digitalRead(pin_room1_blind1_up)==HIGH){
      digitalWrite(pin_room1_blind1_up, LOW);
    }
    if(a>=pin_room1_blind2_up_time || digitalRead(pin_room1_blind2_up)==HIGH){
      digitalWrite(pin_room1_blind2_up, LOW);
    }
    delay(100);
    }
  }
  void room1_down() {
  digitalWrite(pin_room1_blind1_down, HIGH);
  digitalWrite(pin_room1_blind2_down, HIGH);
  for(float a = 0; a <= time_max; a+=0.1){
    if(a>=pin_room1_blind1_down_time || digitalRead(pin_room1_blind1_down)==HIGH){
      digitalWrite(pin_room1_blind1_down, LOW);
    }
    if(a>=pin_room1_blind2_down_time || digitalRead(pin_room1_blind2_down)==HIGH){
      digitalWrite(pin_room1_blind2_down, LOW);
    }
    delay(100);
    }
  }
