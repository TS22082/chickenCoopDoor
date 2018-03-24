# Chicken Coop Door

* When the up button is pressed (GPIO 2) the stepper motor will rotate clockwise untill the the top limit button is pressed. Once top limit has been reached the stepper will spin counter clockwise 2 steps to depress button. 

* Pressing the down button (GPIO 3) results in the stepper rotating counter clock-wise untill the bottom limit has been reached. Once the bottom limit has been reached the stepper will spin clockwise 2 steps to depress button.


# Wiring

Buttons
- buttonDown => GPIO 2
- buttonUP => GPIO 3
- bottomLimit => GPIO 4
- topLimit => GPIO 5

Stepper
- blue => GPIO 8
- pink =>  GPIO 9
- yellow => GPIO 10
- orange => GPIO 11

[![chicken_Coop.png](https://s26.postimg.org/c01179yrt/chicken_Coop.png)](https://postimg.org/image/7qwb53vid/)
