//	This Source Code Form is subject to the terms of the Mozilla Public
//	License, v. 2.0. If a copy of the MPL was not distributed with this
//	file, You can obtain one at http://mozilla.org/MPL/2.0/.
//
//	<author>Sivaram Ambikasaran, Ruoxi Wang</author>
//	
//	kernel_types.cpp
//

#include"kernel_types.hpp"


double kernel_Logarithm::kernel_func(Point r0, Point r1){
    double R_square	=	(r0.x-r1.x)*(r0.x-r1.x) + (r0.y-r1.y)*(r0.y-r1.y);
    if (R_square == 0){
        return 0;
    }
    else{
        return 0.5*log(R_square);
    }
}

double kernel_OneOverR2::kernel_func(Point r0, Point r1){
    double R_square	=	(r0.x-r1.x)*(r0.x-r1.x) + (r0.y-r1.y)*(r0.y-r1.y);
    if (R_square == 0){
        return 0;
    }
    else{
        return 1.0/R_square;
    }
}

double kernel_Gaussian::kernel_func(Point r0, Point r1){
    double R_square	=	(r0.x-r1.x)*(r0.x-r1.x) + (r0.y-r1.y)*(r0.y-r1.y);
    return exp(-R_square);
}

double kernel_Quadric::kernel_func(Point r0, Point r1){
    double R_square	=	(r0.x-r1.x)*(r0.x-r1.x) + (r0.y-r1.y)*(r0.y-r1.y);
    return 1.0+R_square;
}

double kernel_InverseQuadric::kernel_func(Point r0, Point r1){
    double R_square	=	(r0.x-r1.x)*(r0.x-r1.x) + (r0.y-r1.y)*(r0.y-r1.y);
    return 1.0/(1.0+R_square);
}

double kernel_ThinPlateSpline::kernel_func(Point r0, Point r1){
    double R_square	=	(r0.x-r1.x)*(r0.x-r1.x) + (r0.y-r1.y)*(r0.y-r1.y);
    if (R_square == 0){
        return 0;
    }
    else{
        return 0.5*R_square*log(R_square);
    }
}

