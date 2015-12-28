/* 
 * File:   main.c
 * Author: OJL
 *
 * Created on 2015年12月28日, 下午 5:08
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    // h is height, w is width d is deep
    int h, w, d;

    int surface_area, volume;
    
    printf("enter height:");
    scanf("%d", &h);
    printf("enter width:");
    scanf("%d", &w);
    printf("enter deep:");
    scanf("%d", &d);
    
    //Surface is 2 * ( h * w) + 2 * (h * d) + 2 * (w * d)
    surface_area = 2 * (h * w) + 2 * (h * d) + 2 * (w * d);

    // Volume is h * w * d
    volume = h * w * d;

    printf("surface area is %d\n", surface_area);
    printf("volume is %d\n", volume);
  
    return (EXIT_SUCCESS);
}

