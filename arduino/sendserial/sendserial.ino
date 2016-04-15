/*
   sendserial.ino - Sends upper-case letters from Arduino to host computer.

   Use this in conjunction with the readserial example in the main folder.

   Copyright (C) 2016 Simon D. Levy

   This file is part of Besties.

   Besties is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   BreezySTM32 is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   You should have received a copy of the GNU General Public License
   along with Besties.  If not, see <http://www.gnu.org/licenses/>.
 */

void setup() {


  Serial1.begin(115200);

}

void loop() {

 static char c = 'A';

 Serial1.print(c);

 c++;

 if (c > 'Z') {
  Serial1.print('\n');
  c = 'A';
 }
}
