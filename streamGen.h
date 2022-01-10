/*
 * streamGen - a fio add-on that generates synthetic data defined by a
 * configuration file.
 *
 * Copyright (c) 2021 Red Hat
 *
 * This program is free software; you can redistribute it and/or	      
 * modify it under the terms of the GNU General Public License	      
 * as published by the Free Software Foundation; either version 2	      
 * of the License, or (at your option) any later version.		      
 * 								      
 * This program is distributed in the hope that it will be useful,	      
 * but WITHOUT ANY WARRANTY; without even the implied warranty of	      
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the	      
 * GNU General Public License for more details.			      
 * 								      
 * You should have received a copy of the GNU General Public License     
 * along with this program; if not, write to the Free Software	      
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA	      
 * 02110-1301, USA.
 *
 */

#ifndef STREAM_GEN_H
#define STREAM_GEN_H

#include <inttypes.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/queue.h>

/**********************************************************************/
void globalInitAlbGenStream(int maxJobs);

/**********************************************************************/
void globalFreeAlbGenStream();

/**********************************************************************/
void initAlbGenStream(int threadNumber, FILE *rfp, unsigned int blocksize,
                      unsigned int compressPercent);

/**********************************************************************/
bool getNextAlbGenChunk(int threadNumber, char *buffer,
                        unsigned int blocksize);

/**********************************************************************/
uint64_t getAlbGenTotalRunLength(int threadNumber);

/**********************************************************************/
bool isAlbGenStreamEmpty(int threadNumber);

#endif /* STREAM_GEN_H */
