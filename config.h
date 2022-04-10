///////////////////////////////////////////////////////////////////////////////
///         University of Hawaii, College of Engineering
/// @brief  ee205_lab_08d_animal_farm_1_to_clion - EE 205 - Spr 2022
///
/// @file config.h
/// @version 1.0
///
/// @author Dane Sears <dsears@hawaii.edu>
/// @date   09_APR_2022
///////////////////////////////////////////////////////////////////////////////
#pragma once

#define PROGRAM_TITLE "Animal Farm 2"

#define PROGRAM_NAME "animalFarm2"

enum gender {UNKNOWN_GENDER = 0, MALE, FEMALE};
enum breed {UNKNOWN_BREED = 0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

typedef float Weight;
const Weight UNKNOWN_WEIGHT = -1;
