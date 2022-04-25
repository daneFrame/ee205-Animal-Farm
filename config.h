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

#include <iomanip>

#define PROGRAM_TITLE "Animal Farm 2"
#define PROGRAM_NAME "animalFarm2"

#define PRINT_HEADING_FOR_DUMP                                                \
    /* Print =========================================================== */   \
    std::cout << std::setw(80) << std::setfill( '=' ) << "" << std::endl

#define FORMAT_LINE_FOR_DUMP( className, member )         \
    std::cout << std::setfill( ' ' )  /* Space pad    */  \
              << std::left            /* Left justify */  \
              << std::boolalpha  /* Print `true` or `false` for `bool`s */ \
              << std::setw( 8) << (className)             \
              << std::setw(20) << (member)                \
              << std::setw(52)  /* (data) */

enum gender {UNKNOWN_GENDER = 0, MALE, FEMALE};
enum breed {UNKNOWN_BREED = 0, MAINE_COON, MANX, SHORTHAIR, PERSIAN, SPHYNX};

typedef float Weight;
const Weight UNKNOWN_WEIGHT = -1;
