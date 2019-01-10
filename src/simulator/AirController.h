/*
 * AirController.h
 *
 *  Created on: 21/07/2014
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

#ifndef AIRCONTROLLER_H_
#define AIRCONTROLLER_H_

#include "Singleton.h"
#include "Position.h"

namespace atcsim{

class AirController: public Singleton<AirController> {
public:
	AirController();
	virtual ~AirController();
	Position get_Position(int i, int j){return posiciones_[i][j];};
	Position get_Aprox(int i){return aproximaciones_[i];};

	void doWork();

private:
	int prueba;
	Position posiciones_[4][9];
	Position aproximaciones_[3];
};

};  // namespace atcsim

#endif /* AIRCONTROLLER_H_ */
