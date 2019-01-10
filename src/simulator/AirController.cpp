
 /*  Created on: 21/07/2014
 *      Author: paco
 *
 *  Copyright 2014 Francisco Martín
 *
 *  This file is part of ATCSim.
 *
 *  ATCSim is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  ATCSim is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with ATCSim.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "AirController.h"
#include "Airport.h"
#include "Flight.h"
#include "Position.h"
#include <list>
#include <fstream>

namespace atcsim{

AirController::AirController() {

  Position pos0(6442.0,15572.0,3000.0);
  Position pos1(4042.0,15572.0,3000.0);
  Position pos2(2842.0,13493.0,3000.0);
  Position pos3(4042.0,11415.0,3000.0);
  Position pos4(6442.0,11415.0,3000.0);
  Position pos5(7642.0,13493.0,3000.0);
  Position pos6(10000.0,10030.0,2000.0);
  Position pos7(9185.0,3807.0,1000.0);
  Position pos8(7251.0,0.0,500.0);

  posiciones_[0][0]= pos0;
  posiciones_[0][1]= pos1;
  posiciones_[0][2]= pos2;
  posiciones_[0][3]= pos3;
  posiciones_[0][4]= pos4;
  posiciones_[0][5]= pos5;
  posiciones_[0][6]= pos6;
  posiciones_[0][7]= pos7;
  posiciones_[0][8]= pos8;

  Position pos9(6442.0,-15572.0,3000.0);
  Position pos10(4042.0,-15572.0,3000.0);
  Position pos11(2842.0,-13493.0,3000.0);
  Position pos12(4042.0,-11415.0,3000.0);
  Position pos13(6442.0,-11415.0,3000.0);
  Position pos14(7642.0,-13493.0,3000.0);
  Position pos15(10000.0,-10030.0,2000.0);
  Position pos16(9185.0,-3807.0,1000.0);
  Position pos17(7251.0,0.0,500.0);

  posiciones_[1][0]= pos9;
  posiciones_[1][1]= pos10;
  posiciones_[1][2]= pos11;
  posiciones_[1][3]= pos12;
  posiciones_[1][4]= pos13;
  posiciones_[1][5]= pos14;
  posiciones_[1][6]= pos15;
  posiciones_[1][7]= pos16;
  posiciones_[1][8]= pos17;

  Position pos18(15715.0,6515.0,3000.0);
  Position pos19(14515.0,8593.0,3000.0);
  Position pos20(12115.0,8593.0,3000.0);
  Position pos21(10915.0,6515.0,3000.0);
  Position pos22(12115.0,4436.0,3000.0);
  Position pos23(14515.0,4436.0,3000.0);
  Position pos24(15715.0,6515.0,3000.0);
  Position pos25(13250.0,1664.0,2000.0);
  Position pos26(7251.0,0.0,500.0);

  posiciones_[2][0]= pos18;
  posiciones_[2][1]= pos19;
  posiciones_[2][2]= pos20;
  posiciones_[2][3]= pos21;
  posiciones_[2][4]= pos22;
  posiciones_[2][5]= pos23;
  posiciones_[2][6]= pos24;
  posiciones_[2][7]= pos25;
  posiciones_[2][8]= pos26;

  Position pos27(15715.0,-6515.0,3000.0);
  Position pos28(14515.0,-8593.0,3000.0);
  Position pos29(12115.0,-8593.0,3000.0);
  Position pos30(10915.0,-6515.0,3000.0);
  Position pos31(12115.0,-4436.0,3000.0);
  Position pos32(14515.0,-4436.0,3000.0);
  Position pos33(15715.0,-6515.0,3000.0);
  Position pos34(13250.0,-1664.0,2000.0);
  Position pos35(7251.0,0.0,500.0);

  posiciones_[3][0]= pos27;
  posiciones_[3][1]= pos28;
  posiciones_[3][2]= pos29;
  posiciones_[3][3]= pos30;
  posiciones_[3][4]= pos31;
  posiciones_[3][5]= pos32;
  posiciones_[3][6]= pos33;
  posiciones_[3][7]= pos34;
  posiciones_[3][8]= pos35;

  Position pos36(100.0,0.0,25.0);
  Position pos37(75.0,0.0,25.0);
  Position pos38(-750.0,0.0,25.0);

  aproximaciones_[0]=pos36;
  aproximaciones_[1]=pos37;
  aproximaciones_[2]=pos38;








}

AirController::~AirController() {
	// TODO Auto-generated destructor stub
}

void
AirController::doWork()
{
  std::list<Flight*> flights = Airport::getInstance()->getFlights();
  std::list<Flight*>::iterator it;


  for(it = flights.begin(); it!=flights.end(); ++it)
  {
    if((*it)->getRoute()->empty())
    {

      Position pos= (*it)->getPosition();
      float x= pos.get_x();
      float y= pos.get_y();

      if(x>=0.0 && x<=14142.0 && y>=11415.0 && y<=20000.0){
        Route r0, r1, r2, r3, r4, r5, r6, r7, r8;

        r0.pos = get_Position(0,0);
        r0.speed = 400.0;
        r1.pos = get_Position(0,1);
        r1.speed = 400.0;
        r2.pos = get_Position(0,2);
        r2.speed = 400.0;
        r3.pos = get_Position(0,3);
        r3.speed = 400.0;
        r4.pos = get_Position(0,4);
        r4.speed = 400.0;
        r5.pos = get_Position(0,5);
        r5.speed = 400.0;
        r6.pos = get_Position(0,6);
        r6.speed = 200.0;
        r7.pos = get_Position(0,7);
        r7.speed = 150.0;
        r8.pos = get_Position(0,8);
        r8.speed = 100.0;
        (*it)->getRoute()->push_back(r5);
        (*it)->getRoute()->push_front(r4);
        (*it)->getRoute()->push_front(r3);
        (*it)->getRoute()->push_front(r2);
        (*it)->getRoute()->push_front(r1);
        (*it)->getRoute()->push_front(r0);
      }else if(x>=0.0 && x<=14142.0 && y<=-11415.0 && y>=-20000.0){
        Route r9, r10, r11, r12, r13, r14, r15, r16, r17;

        r9.pos = get_Position(1,0);
        r9.speed = 400.0;
        r10.pos = get_Position(1,1);
        r10.speed = 400.0;
        r11.pos = get_Position(1,2);
        r11.speed = 400.0;
        r12.pos =  get_Position(1,3);
        r12.speed = 400.0;
        r13.pos =get_Position(1,4);
        r13.speed = 400.0;
        r14.pos = get_Position(1,5);
        r14.speed = 400.0;
        r15.pos = get_Position(1,6);
        r15.speed = 200.0;
        r16.pos = get_Position(1,7);
        r16.speed = 150.0;
        r17.pos = get_Position(1,8);
        r17.speed = 100.0;

        (*it)->getRoute()->push_back(r14);
        (*it)->getRoute()->push_front(r13);
        (*it)->getRoute()->push_front(r12);
        (*it)->getRoute()->push_front(r11);
        (*it)->getRoute()->push_front(r10);
        (*it)->getRoute()->push_front(r9);
      }else if(x>=14142.0 && x<=20000.0 && y<=20000.0 && y>=0.0){
        Route r18, r19, r20, r21, r22, r23, r24, r25, r26;

                r18.pos = get_Position(2,0);
                r18.speed = 400.0;
                r19.pos = get_Position(2,1);
                r19.speed = 400.0;
                r20.pos = get_Position(2,2);
                r20.speed = 400.0;
                r21.pos =  get_Position(2,3);
                r21.speed = 400.0;
                r22.pos =get_Position(2,4);
                r22.speed = 400.0;
                r23.pos = get_Position(2,5);
                r23.speed = 400.0;
                r24.pos = get_Position(2,6);
                r24.speed = 200.0;
                r25.pos = get_Position(2,7);
                r25.speed = 150.0;
                r26.pos = get_Position(2,8);
                r26.speed = 100.0;
                if(y<=7500.0){
                  (*it)->getRoute()->push_back(r24);
                  (*it)->getRoute()->push_front(r23);
                  (*it)->getRoute()->push_front(r22);
                  (*it)->getRoute()->push_front(r21);
                  (*it)->getRoute()->push_front(r20);
                  (*it)->getRoute()->push_front(r19);
                }else{
                  (*it)->getRoute()->push_back(r19);
                  (*it)->getRoute()->push_front(r24);
                  (*it)->getRoute()->push_front(r23);
                  (*it)->getRoute()->push_front(r22);
                  (*it)->getRoute()->push_front(r21);
                  (*it)->getRoute()->push_front(r20);
                }

      }else if(x>=14142.0 && x<=20000.0 && y>=-20000.0 && y<=0.0){

          Route r27, r28, r29, r30, r31, r32, r33, r34, r35;

        r27.pos = get_Position(3,0);
        r27.speed = 500.0;
        r28.pos = get_Position(3,1);
        r28.speed = 500.0;
        r29.pos =  get_Position(3,2);
        r29.speed = 500.0;
        r30.pos =get_Position(3,3);
        r30.speed = 500.0;
        r31.pos = get_Position(3,4);
        r31.speed = 500.0;
        r32.pos = get_Position(3,5);
        r32.speed = 500.0;
        r33.pos = get_Position(3,6);
        r33.speed = 500.0;
        r34.pos = get_Position(3,7);
        r34.speed = 500.0;
        r35.pos = get_Position(3,8);
        r35.speed = 500.0;
        if(y>=-7500.0){
          (*it)->getRoute()->push_back(r27);
          (*it)->getRoute()->push_front(r32);
          (*it)->getRoute()->push_front(r31);
          (*it)->getRoute()->push_front(r30);
          (*it)->getRoute()->push_front(r29);
          (*it)->getRoute()->push_front(r28);
        }else{
          (*it)->getRoute()->push_back(r28);
          (*it)->getRoute()->push_front(r27);
          (*it)->getRoute()->push_front(r32);
          (*it)->getRoute()->push_front(r31);
          (*it)->getRoute()->push_front(r30);
          (*it)->getRoute()->push_front(r29);
        }
      }


    }


    if (!(Airport::getInstance()->is_booked_landing())){
      (*it)->getRoute()->clear();

      Airport::getInstance()->book_landing();

      Position pos= (*it)->getPosition();
      float x= pos.get_x();
      float y= pos.get_y();


      Route r36, r37, r38;

      r36.pos = get_Aprox(0);
      r36.speed = 150.0;
      r37.pos = get_Aprox(1);
      r37.speed = 19.0;
      r38.pos = get_Aprox(2);
      r38.speed = 15.0;

      (*it)->getRoute()->push_back(r38);
      (*it)->getRoute()->push_front(r37);
      (*it)->getRoute()->push_front(r36);

      if(x>=0.0 && x<=14142.0 && y>=11415.0 && y<=20000.0){
        Route r6, r7, r8;

        r6.pos = get_Position(0,6);
        r6.speed = 350;
        r7.pos = get_Position(0,7);
        r7.speed = 350.0;
        r8.pos = get_Position(0,8);
        r8.speed = 150.0;
        (*it)->getRoute()->push_front(r8);
        (*it)->getRoute()->push_front(r7);
        (*it)->getRoute()->push_front(r6);

      }else if(x>=0.0 && x<=14142.0 && y<=-11415.0 && y>=-20000.0){
        Route r15, r16, r17;

        r15.pos = get_Position(1,6);
        r15.speed =350.0;
        r16.pos = get_Position(1,7);
        r16.speed = 350.0;
        r17.pos = get_Position(1,8);
        r17.speed = 150.0;
        (*it)->getRoute()->push_front(r17);
        (*it)->getRoute()->push_front(r16);
        (*it)->getRoute()->push_front(r15);
      }else if((x>=10000.0 && x<=16000.0 && y>=4400.0 && y<=8700.0)||(x>=14142.0 && x<=20000.0 && y<=20000.0 && y>=0.0)){
        Route r24, r25, r26;

        r24.pos = get_Position(2,6);
        r24.speed = 350.0;
        r25.pos = get_Position(2,7);
        r25.speed = 350.0;
        r26.pos = get_Position(2,8);
        r26.speed = 150.0;
        (*it)->getRoute()->push_front(r26);
        (*it)->getRoute()->push_front(r25);
        (*it)->getRoute()->push_front(r24);
      }else if((x>=10000.0 && x<=16000.0 && y<=-4400.0 && y>=-8700.0)||(x>=14142.0 && x<=20000.0 && y>=-20000.0 && y<=0.0)){
        Route r33, r34, r35;

        r33.pos = get_Position(3,6);
        r33.speed = 350.0;
        r34.pos = get_Position(3,7);
        r34.speed = 350.0;
        r35.pos = get_Position(3,8);
        r35.speed = 150.0;
        (*it)->getRoute()->push_front(r35);
        (*it)->getRoute()->push_front(r34);
        (*it)->getRoute()->push_front(r33);
      }


    }
}

}

}  // namespace atcsim
