#include "sqc_api.h"
#include <stdlib.h>
#include <string.h>

#if defined(FAKE_PROVIDER) 
#define KIND (Fake20QV1)
#ifndef OPT_LEVEL
sqcFakeProviderOption opt = {0};
#else
sqcFakeProviderOption opt = {OPT_LEVEL};
#endif
#elif defined(IBM_PROVIDER)
#fatal /* Not Implemented */
#else /* other */
#fatal 
#endif

int main(int argc, char *argv[])
{
  sqcInitialize(NULL, NULL);

  sqcQC* q;
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, -0.37708749449885187, 0);
  sqcRZGate(q, -3.057718908087875, 0);
  sqcRYGate(q, 2.0715976653694077, 1);
  sqcRZGate(q, -2.2061563900248125, 1);
  sqcRYGate(q, -0.07985870294250574, 2);
  sqcRZGate(q, 0.7590237361477712, 2);
  sqcRYGate(q, -2.5269117070855933, 3);
  sqcRZGate(q, 1.5240478027742983, 3);
  sqcRYGate(q, 1.5383577733094245, 4);
  sqcRZGate(q, 0.8955790133622497, 4);
  sqcRYGate(q, -0.1974364888406152, 5);
  sqcRZGate(q, -1.5604560027590404, 5);
  sqcRYGate(q, -0.1898122240370934, 6);
  sqcRZGate(q, -0.25374037870114435, 6);
  sqcRYGate(q, -2.222645425177908, 7);
  sqcRZGate(q, -0.4054527302658286, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.6183044935068014, 0);
  sqcRZGate(q, -2.0757582865235387, 0);
  sqcRYGate(q, 0.8496522535343912, 1);
  sqcRZGate(q, 1.0886427988959584, 1);
  sqcRYGate(q, 0.06957154207543312, 2);
  sqcRZGate(q, -1.423263957867317, 2);
  sqcRYGate(q, -0.4437217416447874, 3);
  sqcRZGate(q, -3.0929356481034076, 3);
  sqcRYGate(q, -3.1204642274125476, 4);
  sqcRZGate(q, -2.473757021456412, 4);
  sqcRYGate(q, -0.2438481217997752, 5);
  sqcRZGate(q, -0.3263324643081162, 5);
  sqcRYGate(q, -1.6609552573604514, 6);
  sqcRZGate(q, 0.8876724429625548, 6);
  sqcRYGate(q, 1.6640546494933728, 7);
  sqcRZGate(q, -0.010364201455825395, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5759911407136409, 0);
  sqcRZGate(q, -1.6206328951427957, 0);
  sqcRYGate(q, -0.4115675888476584, 1);
  sqcRZGate(q, -1.8041300154663034, 1);
  sqcRYGate(q, 2.425593807310346, 2);
  sqcRZGate(q, 3.0859341467253585, 2);
  sqcRYGate(q, 2.305228413270067, 3);
  sqcRZGate(q, -2.6384142512235615, 3);
  sqcRYGate(q, 1.5356727311464073, 4);
  sqcRZGate(q, 1.009365900391325, 4);
  sqcRYGate(q, -1.4120954765371254, 5);
  sqcRZGate(q, -0.9659325459938949, 5);
  sqcRYGate(q, -0.2827280933067166, 6);
  sqcRZGate(q, 2.5690348744524414, 6);
  sqcRYGate(q, -2.340243824938029, 7);
  sqcRZGate(q, 2.4809174935276403, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.244706569550715, 0);
  sqcRZGate(q, -0.9654454981653854, 0);
  sqcRYGate(q, -1.56225177132737, 1);
  sqcRZGate(q, 2.047409530939717, 1);
  sqcRYGate(q, -1.510619647907288, 2);
  sqcRZGate(q, 0.8160957668967672, 2);
  sqcRYGate(q, -0.32424160239756095, 3);
  sqcRZGate(q, 2.2619222295176167, 3);
  sqcRYGate(q, 2.992704459592997, 4);
  sqcRZGate(q, -2.755614721944997, 4);
  sqcRYGate(q, -1.575768108276342, 5);
  sqcRZGate(q, 0.6579762772955755, 5);
  sqcRYGate(q, 1.6929436631914898, 6);
  sqcRZGate(q, 2.6025996506174756, 6);
  sqcRYGate(q, -1.4063601229550518, 7);
  sqcRZGate(q, 1.1426097024876876, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.4289898188823473, 0);
  sqcRZGate(q, 0.22104666100910925, 0);
  sqcRYGate(q, 2.5024093937028886, 1);
  sqcRZGate(q, -2.1604309550007095, 1);
  sqcRYGate(q, 2.0354410707817654, 2);
  sqcRZGate(q, 2.9257069308553345, 2);
  sqcRYGate(q, 1.6810703550060175, 3);
  sqcRZGate(q, 1.1163394123195207, 3);
  sqcRYGate(q, -2.3565413377211297, 4);
  sqcRZGate(q, -3.119069723527635, 4);
  sqcRYGate(q, -2.9851439885902327, 5);
  sqcRZGate(q, -1.9169666006765875, 5);
  sqcRYGate(q, 2.937118976750031, 6);
  sqcRZGate(q, -2.978879167520631, 6);
  sqcRYGate(q, -2.8960198737964653, 7);
  sqcRZGate(q, 1.9098486344603032, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.8915485367445328, 0);
  sqcRZGate(q, 1.6106479864695527, 0);
  sqcRYGate(q, 0.6584972782447869, 1);
  sqcRZGate(q, -0.41266675313604845, 1);
  sqcRYGate(q, -0.6726854121979997, 2);
  sqcRZGate(q, -1.9380105988610516, 2);
  sqcRYGate(q, -1.169357737767859, 3);
  sqcRZGate(q, 1.5309259036498624, 3);
  sqcRYGate(q, 1.967795124598665, 4);
  sqcRZGate(q, -2.1456454789995987, 4);
  sqcRYGate(q, 0.621441951844913, 5);
  sqcRZGate(q, 0.60138698838121, 5);
  sqcRYGate(q, -1.3155295148127486, 6);
  sqcRZGate(q, 0.74149598269338, 6);
  sqcRYGate(q, 2.5896118267647714, 7);
  sqcRZGate(q, -1.2762473715216471, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.2655985078183915, 0);
  sqcRZGate(q, 2.8121432179934756, 0);
  sqcRYGate(q, 1.7909789920505017, 1);
  sqcRZGate(q, -1.5260226245998494, 1);
  sqcRYGate(q, -0.4977917662749815, 2);
  sqcRZGate(q, 1.0774550119936612, 2);
  sqcRYGate(q, -2.9203635918279534, 3);
  sqcRZGate(q, -0.19034102993745175, 3);
  sqcRYGate(q, -2.802956975712334, 4);
  sqcRZGate(q, -1.857923270978728, 4);
  sqcRYGate(q, -0.18725932594922767, 5);
  sqcRZGate(q, -2.160125835491792, 5);
  sqcRYGate(q, -0.10676507400523763, 6);
  sqcRZGate(q, -1.2932110761305031, 6);
  sqcRYGate(q, 2.4642255246650344, 7);
  sqcRZGate(q, -3.09610056834422, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.3461563979722586, 0);
  sqcRZGate(q, 0.3806335137346633, 0);
  sqcRYGate(q, -0.09873347170712066, 1);
  sqcRZGate(q, 1.1342071025987877, 1);
  sqcRYGate(q, -2.1739443560192466, 2);
  sqcRZGate(q, 2.375579728640637, 2);
  sqcRYGate(q, -2.812390034805442, 3);
  sqcRZGate(q, 2.886287313856008, 3);
  sqcRYGate(q, -3.04964786444902, 4);
  sqcRZGate(q, 2.071063981375259, 4);
  sqcRYGate(q, 0.15598231011071648, 5);
  sqcRZGate(q, 0.14906116557373308, 5);
  sqcRYGate(q, -1.1799401636500415, 6);
  sqcRZGate(q, 2.661287059352052, 6);
  sqcRYGate(q, -0.6172872193341131, 7);
  sqcRZGate(q, -1.8749983019284262, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4766627645631294, 0);
  sqcRZGate(q, -2.990769696695604, 0);
  sqcRYGate(q, -2.635674951537075, 1);
  sqcRZGate(q, 1.0284952431238867, 1);
  sqcRYGate(q, -0.8525603360093541, 2);
  sqcRZGate(q, -2.02262330478345, 2);
  sqcRYGate(q, -0.14321032463916117, 3);
  sqcRZGate(q, 2.7402277708784784, 3);
  sqcRYGate(q, -2.3229366588782914, 4);
  sqcRZGate(q, 0.6253022392656948, 4);
  sqcRYGate(q, 1.4668645207732025, 5);
  sqcRZGate(q, 1.2754773342074477, 5);
  sqcRYGate(q, 1.7995973085590165, 6);
  sqcRZGate(q, -0.9514912318651196, 6);
  sqcRYGate(q, -1.1578424896670474, 7);
  sqcRZGate(q, -2.0044565671169394, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.107877717607856, 0);
  sqcRZGate(q, -1.4638630554108842, 0);
  sqcRYGate(q, -2.8291922670181133, 1);
  sqcRZGate(q, 0.793558052987172, 1);
  sqcRYGate(q, 2.3023161100183445, 2);
  sqcRZGate(q, -2.367446172977459, 2);
  sqcRYGate(q, -1.9177039434511203, 3);
  sqcRZGate(q, 2.17492294286464, 3);
  sqcRYGate(q, 2.160287067066525, 4);
  sqcRZGate(q, -1.3466579209829272, 4);
  sqcRYGate(q, 1.5950037129007495, 5);
  sqcRZGate(q, -2.395179343248854, 5);
  sqcRYGate(q, 0.9899201796452077, 6);
  sqcRZGate(q, 2.6480880111059646, 6);
  sqcRYGate(q, -2.0798318811304926, 7);
  sqcRZGate(q, -2.473209676837755, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.5323327557300779, 0);
  sqcRZGate(q, 1.3591965675393365, 0);
  sqcRYGate(q, 2.0305819179450877, 1);
  sqcRZGate(q, -1.935762690456734, 1);
  sqcRYGate(q, -0.12788765813412617, 2);
  sqcRZGate(q, 1.4197116449631921, 2);
  sqcRYGate(q, 2.5957126978405753, 3);
  sqcRZGate(q, -3.0023631263731216, 3);
  sqcRYGate(q, -1.8694414259844825, 4);
  sqcRZGate(q, 2.471259215569392, 4);
  sqcRYGate(q, 1.030616701522988, 5);
  sqcRZGate(q, 2.5868681120798884, 5);
  sqcRYGate(q, -1.5285208890374387, 6);
  sqcRZGate(q, -0.590015561026089, 6);
  sqcRYGate(q, 0.17330051923550785, 7);
  sqcRZGate(q, -1.9264519148611128, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.4226348154967612, 0);
  sqcRZGate(q, 0.42489197210807994, 0);
  sqcRYGate(q, 0.21160505085221892, 1);
  sqcRZGate(q, 2.2225694210505518, 1);
  sqcRYGate(q, -2.4320905167004603, 2);
  sqcRZGate(q, 0.9038795223316605, 2);
  sqcRYGate(q, 0.2313901520015936, 3);
  sqcRZGate(q, 2.1445232402375023, 3);
  sqcRYGate(q, -0.09455327312434436, 4);
  sqcRZGate(q, -0.4664064994901172, 4);
  sqcRYGate(q, -1.445131056359025, 5);
  sqcRZGate(q, -0.7655792680105504, 5);
  sqcRYGate(q, -3.0672136036296456, 6);
  sqcRZGate(q, 1.061572682589924, 6);
  sqcRYGate(q, 1.5477553821428698, 7);
  sqcRZGate(q, -1.2451584672228693, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.12911154928302615, 0);
  sqcRZGate(q, 1.7012579272353578, 0);
  sqcRYGate(q, -0.19455543169017403, 1);
  sqcRZGate(q, 1.719733991499187, 1);
  sqcRYGate(q, -2.858621078780595, 2);
  sqcRZGate(q, -1.3513523799859464, 2);
  sqcRYGate(q, -1.6226866971237002, 3);
  sqcRZGate(q, -1.3195632702848812, 3);
  sqcRYGate(q, 2.518454267009551, 4);
  sqcRZGate(q, -0.26848234018840705, 4);
  sqcRYGate(q, -1.5443400701656254, 5);
  sqcRZGate(q, -1.2054188152830558, 5);
  sqcRYGate(q, -0.7795561628077396, 6);
  sqcRZGate(q, 0.5386273029881785, 6);
  sqcRYGate(q, -0.6269947720038749, 7);
  sqcRZGate(q, -1.2740171135071034, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.217952338653392, 0);
  sqcRZGate(q, 0.8600002780441462, 0);
  sqcRYGate(q, 2.620682176734635, 1);
  sqcRZGate(q, -2.6721406990999603, 1);
  sqcRYGate(q, 2.900686977556802, 2);
  sqcRZGate(q, -2.962005054001872, 2);
  sqcRYGate(q, -0.47810958194733505, 3);
  sqcRZGate(q, 1.0577746593053512, 3);
  sqcRYGate(q, -1.6550481574148055, 4);
  sqcRZGate(q, -1.9591593817832653, 4);
  sqcRYGate(q, -2.0308902229820123, 5);
  sqcRZGate(q, -2.1918509984668395, 5);
  sqcRYGate(q, -1.0629123439830153, 6);
  sqcRZGate(q, 2.3729513267452553, 6);
  sqcRYGate(q, -1.3034315004968988, 7);
  sqcRZGate(q, -2.6817892685930667, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.37076347691541045, 0);
  sqcRZGate(q, 1.019806774410159, 0);
  sqcRYGate(q, -1.1508681393087152, 1);
  sqcRZGate(q, 0.7299051496933968, 1);
  sqcRYGate(q, 0.3321152220298975, 2);
  sqcRZGate(q, 2.8578941378027265, 2);
  sqcRYGate(q, -1.5838634664838045, 3);
  sqcRZGate(q, 0.9954364557428343, 3);
  sqcRYGate(q, -2.4280021890001597, 4);
  sqcRZGate(q, 2.5831475066050658, 4);
  sqcRYGate(q, 1.3833741588720883, 5);
  sqcRZGate(q, 1.4186855089272605, 5);
  sqcRYGate(q, -2.3560871302899278, 6);
  sqcRZGate(q, 0.1573031516872296, 6);
  sqcRYGate(q, 2.477598334263686, 7);
  sqcRZGate(q, 1.7767103959736936, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.0051172725849622, 0);
  sqcRZGate(q, -0.4361181637131567, 0);
  sqcRYGate(q, -0.5359605539303769, 1);
  sqcRZGate(q, 1.0826202096158477, 1);
  sqcRYGate(q, -2.2488773736652528, 2);
  sqcRZGate(q, 2.094556615165853, 2);
  sqcRYGate(q, -0.7753617786746902, 3);
  sqcRZGate(q, 0.872493142286987, 3);
  sqcRYGate(q, 0.3159688768333098, 4);
  sqcRZGate(q, -1.81007367400787, 4);
  sqcRYGate(q, 1.319054486051627, 5);
  sqcRZGate(q, 1.687109816534183, 5);
  sqcRYGate(q, 2.402504864351781, 6);
  sqcRZGate(q, 2.7976234342512813, 6);
  sqcRYGate(q, 1.7442229461180014, 7);
  sqcRZGate(q, -1.2295937192650508, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.657172521419219, 0);
  sqcRZGate(q, -0.631251385646575, 0);
  sqcRYGate(q, 2.5677911439850596, 1);
  sqcRZGate(q, -2.957557141099615, 1);
  sqcRYGate(q, -0.4951429238466831, 2);
  sqcRZGate(q, -0.020710370623368668, 2);
  sqcRYGate(q, 1.236627537708998, 3);
  sqcRZGate(q, 0.4974441784128773, 3);
  sqcRYGate(q, 1.270960100256251, 4);
  sqcRZGate(q, 1.3877043142168644, 4);
  sqcRYGate(q, 1.7944973654524947, 5);
  sqcRZGate(q, 0.9677492071374829, 5);
  sqcRYGate(q, -2.123889278307007, 6);
  sqcRZGate(q, -1.9686058035929657, 6);
  sqcRYGate(q, 1.146331018800927, 7);
  sqcRZGate(q, -0.02456396686078044, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.8967451784516127, 0);
  sqcRZGate(q, 0.8628002265382898, 0);
  sqcRYGate(q, -2.8393654174163565, 1);
  sqcRZGate(q, -1.343005425961679, 1);
  sqcRYGate(q, -1.8628249791536513, 2);
  sqcRZGate(q, 1.2670958996513209, 2);
  sqcRYGate(q, -1.901285341002799, 3);
  sqcRZGate(q, 2.938949736560295, 3);
  sqcRYGate(q, -1.9092867577633559, 4);
  sqcRZGate(q, 1.0242826456460579, 4);
  sqcRYGate(q, -2.2663013721131433, 5);
  sqcRZGate(q, -1.3699969514526256, 5);
  sqcRYGate(q, 1.0186287495251305, 6);
  sqcRZGate(q, -2.6241459138987313, 6);
  sqcRYGate(q, 0.8647945589312815, 7);
  sqcRZGate(q, 1.5614091509172174, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.15859364786765795, 0);
  sqcRZGate(q, -2.1177946932933693, 0);
  sqcRYGate(q, -2.966238607626524, 1);
  sqcRZGate(q, -2.8971801681311, 1);
  sqcRYGate(q, 2.9352582959014732, 2);
  sqcRZGate(q, -3.0846995684681926, 2);
  sqcRYGate(q, -2.673416033744078, 3);
  sqcRZGate(q, 3.1180596132954976, 3);
  sqcRYGate(q, 3.0064399218221007, 4);
  sqcRZGate(q, 2.047540202475486, 4);
  sqcRYGate(q, -0.24833075315887912, 5);
  sqcRZGate(q, -0.2873625304393722, 5);
  sqcRYGate(q, -0.675672809962319, 6);
  sqcRZGate(q, -1.0179611784267584, 6);
  sqcRYGate(q, -2.482959738438827, 7);
  sqcRZGate(q, 1.2594027497343498, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.067406711154205, 0);
  sqcRZGate(q, -2.558140989079567, 0);
  sqcRYGate(q, -2.59967230523665, 1);
  sqcRZGate(q, -1.146594115829613, 1);
  sqcRYGate(q, 1.3137249470573646, 2);
  sqcRZGate(q, -0.39932180383503013, 2);
  sqcRYGate(q, 2.3325168299076235, 3);
  sqcRZGate(q, 1.046781427387582, 3);
  sqcRYGate(q, 1.9514937260444631, 4);
  sqcRZGate(q, 2.4833449935069773, 4);
  sqcRYGate(q, 1.8816369870122553, 5);
  sqcRZGate(q, -1.763119963481303, 5);
  sqcRYGate(q, 0.590747496128758, 6);
  sqcRZGate(q, -1.968543964200327, 6);
  sqcRYGate(q, 2.249877781859089, 7);
  sqcRZGate(q, 2.312699509362843, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.464229908925466, 0);
  sqcRZGate(q, 0.37865786429252957, 0);
  sqcRYGate(q, 3.064844487633698, 1);
  sqcRZGate(q, 2.583723733509727, 1);
  sqcRYGate(q, 2.860309971370196, 2);
  sqcRZGate(q, 1.30076883686292, 2);
  sqcRYGate(q, -2.1625750608966037, 3);
  sqcRZGate(q, 3.095045669885399, 3);
  sqcRYGate(q, -1.8163944437120665, 4);
  sqcRZGate(q, 2.2893126169167144, 4);
  sqcRYGate(q, 1.9221499865778817, 5);
  sqcRZGate(q, -0.08040507494339671, 5);
  sqcRYGate(q, 2.0951528294735122, 6);
  sqcRZGate(q, 2.112284129392253, 6);
  sqcRYGate(q, -1.1207730533856743, 7);
  sqcRZGate(q, 2.0165421333330587, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.39530479109863753, 0);
  sqcRZGate(q, 2.2256065210150258, 0);
  sqcRYGate(q, -2.239799323392314, 1);
  sqcRZGate(q, 1.1178760843993596, 1);
  sqcRYGate(q, 0.9897122562561718, 2);
  sqcRZGate(q, 2.5376071708949866, 2);
  sqcRYGate(q, -2.2377926299189896, 3);
  sqcRZGate(q, -1.1653536737223433, 3);
  sqcRYGate(q, 0.4034720268102605, 4);
  sqcRZGate(q, 0.10128037233749193, 4);
  sqcRYGate(q, -0.8647627434204281, 5);
  sqcRZGate(q, 2.835138834281416, 5);
  sqcRYGate(q, -0.9536115049262011, 6);
  sqcRZGate(q, -1.0661743160704438, 6);
  sqcRYGate(q, 1.6227667505716492, 7);
  sqcRZGate(q, -0.22407834404759708, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.3752781240041303, 0);
  sqcRZGate(q, -1.3948507088950937, 0);
  sqcRYGate(q, -0.4969632985730081, 1);
  sqcRZGate(q, 2.587473920555385, 1);
  sqcRYGate(q, -1.2284960467090702, 2);
  sqcRZGate(q, -2.287791544452955, 2);
  sqcRYGate(q, -0.9832634348447753, 3);
  sqcRZGate(q, 1.844945497781806, 3);
  sqcRYGate(q, -2.3484633382202604, 4);
  sqcRZGate(q, 1.6899588090692126, 4);
  sqcRYGate(q, 0.4653973568342007, 5);
  sqcRZGate(q, -0.5310666881251196, 5);
  sqcRYGate(q, -1.570124738142594, 6);
  sqcRZGate(q, -1.4604253461907994, 6);
  sqcRYGate(q, -2.378494827413023, 7);
  sqcRZGate(q, 1.6887805635569446, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.365342933291394, 0);
  sqcRZGate(q, 1.4965038053907538, 0);
  sqcRYGate(q, 2.2349409615201266, 1);
  sqcRZGate(q, 1.0650912157514592, 1);
  sqcRYGate(q, -2.3187435441033464, 2);
  sqcRZGate(q, 0.5435031828678325, 2);
  sqcRYGate(q, 2.48542448425696, 3);
  sqcRZGate(q, -2.167453652483768, 3);
  sqcRYGate(q, -2.6337497611859906, 4);
  sqcRZGate(q, 1.7026099671302701, 4);
  sqcRYGate(q, 2.523416560066285, 5);
  sqcRZGate(q, -1.8252846455431495, 5);
  sqcRYGate(q, -1.0260414609617738, 6);
  sqcRZGate(q, 0.39783908542910756, 6);
  sqcRYGate(q, 1.550337915712892, 7);
  sqcRZGate(q, -2.8715753248252542, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -2.3074626363395594, 0);
  sqcRZGate(q, -2.45813090944336, 0);
  sqcRYGate(q, -0.5957760729350356, 1);
  sqcRZGate(q, 2.4940674222319474, 1);
  sqcRYGate(q, 2.7591126185359895, 2);
  sqcRZGate(q, -2.1154496076072213, 2);
  sqcRYGate(q, -1.6418718258807259, 3);
  sqcRZGate(q, 1.428166815938841, 3);
  sqcRYGate(q, -2.3866380508537017, 4);
  sqcRZGate(q, 0.7043293832675408, 4);
  sqcRYGate(q, 1.8918608713098741, 5);
  sqcRZGate(q, -1.171662084676174, 5);
  sqcRYGate(q, 0.7059857547027703, 6);
  sqcRZGate(q, 0.7118090761501327, 6);
  sqcRYGate(q, 2.715140534349792, 7);
  sqcRZGate(q, 1.9198458898940707, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 1.1022842298922033, 0);
  sqcRZGate(q, -1.2602815218370875, 0);
  sqcRYGate(q, 1.7864391252630558, 1);
  sqcRZGate(q, -2.05290574247565, 1);
  sqcRYGate(q, -2.8014661505355662, 2);
  sqcRZGate(q, -2.0601899140321502, 2);
  sqcRYGate(q, -0.9073059529129983, 3);
  sqcRZGate(q, 1.8085319420629709, 3);
  sqcRYGate(q, 2.353547203348233, 4);
  sqcRZGate(q, -0.1536949533085108, 4);
  sqcRYGate(q, 2.210217499059091, 5);
  sqcRZGate(q, 2.3180182699975984, 5);
  sqcRYGate(q, 1.7974154797301178, 6);
  sqcRZGate(q, 2.112269053562449, 6);
  sqcRYGate(q, 2.4922861440576023, 7);
  sqcRZGate(q, -0.8805184199279479, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.347366877790444, 0);
  sqcRZGate(q, 3.0774896398125624, 0);
  sqcRYGate(q, 0.5938301206357425, 1);
  sqcRZGate(q, 2.372188347758069, 1);
  sqcRYGate(q, 2.89739160707431, 2);
  sqcRZGate(q, 2.0743528751143767, 2);
  sqcRYGate(q, -0.8703102568979437, 3);
  sqcRZGate(q, 1.331650925840865, 3);
  sqcRYGate(q, 0.1954337948990351, 4);
  sqcRZGate(q, -2.4282747754238185, 4);
  sqcRYGate(q, 0.41188785855677246, 5);
  sqcRZGate(q, -2.696393718202439, 5);
  sqcRYGate(q, -0.6692162795729475, 6);
  sqcRZGate(q, -2.744853568158713, 6);
  sqcRYGate(q, -1.4562833286227046, 7);
  sqcRZGate(q, -1.6860705156405247, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.1097901311176277, 0);
  sqcRZGate(q, -1.702271199653112, 0);
  sqcRYGate(q, 1.0826252263352227, 1);
  sqcRZGate(q, -2.353547615273583, 1);
  sqcRYGate(q, 1.635679649571502, 2);
  sqcRZGate(q, -0.45138745482450826, 2);
  sqcRYGate(q, -2.5667371949060587, 3);
  sqcRZGate(q, -0.9776911696491265, 3);
  sqcRYGate(q, 0.9259107039149893, 4);
  sqcRZGate(q, 1.3402631403644472, 4);
  sqcRYGate(q, -0.4465901528059054, 5);
  sqcRZGate(q, -0.13219214469856588, 5);
  sqcRYGate(q, 0.9178692036719031, 6);
  sqcRZGate(q, -0.9529668153058867, 6);
  sqcRYGate(q, -0.6385900861447439, 7);
  sqcRZGate(q, 2.492606747538752, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 2.6798677592124616, 0);
  sqcRZGate(q, 2.6499923535703016, 0);
  sqcRYGate(q, -1.6933010547438412, 1);
  sqcRZGate(q, 0.6033267161971558, 1);
  sqcRYGate(q, 2.9962404759944796, 2);
  sqcRZGate(q, -3.116430977502494, 2);
  sqcRYGate(q, -0.7126146772175284, 3);
  sqcRZGate(q, 0.037042063215801946, 3);
  sqcRYGate(q, -2.448202722639907, 4);
  sqcRZGate(q, -2.8478296522608573, 4);
  sqcRYGate(q, 2.2454326077636484, 5);
  sqcRZGate(q, 0.11223589804371444, 5);
  sqcRYGate(q, 1.5809398137304507, 6);
  sqcRZGate(q, 2.4946508785118517, 6);
  sqcRYGate(q, 0.3318121565188194, 7);
  sqcRZGate(q, 2.031487686741241, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -1.9412666140986854, 0);
  sqcRZGate(q, 2.0291603770913076, 0);
  sqcRYGate(q, -0.9472682842271415, 1);
  sqcRZGate(q, 0.9766001663258548, 1);
  sqcRYGate(q, 1.9715375999184954, 2);
  sqcRZGate(q, -1.9270693118554822, 2);
  sqcRYGate(q, 0.39400499554232393, 3);
  sqcRZGate(q, 1.400434464117224, 3);
  sqcRYGate(q, -1.4642082255406677, 4);
  sqcRZGate(q, 0.7948773440913223, 4);
  sqcRYGate(q, 0.5736301993713235, 5);
  sqcRZGate(q, -1.5727670626337904, 5);
  sqcRYGate(q, -0.9501974188688758, 6);
  sqcRZGate(q, 0.5764227116799043, 6);
  sqcRYGate(q, -2.2667636871901955, 7);
  sqcRZGate(q, 2.188129395477299, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, -0.1457086769591891, 0);
  sqcRZGate(q, 2.8730264324993136, 0);
  sqcRYGate(q, -1.5777925421513703, 1);
  sqcRZGate(q, 1.5025491358013845, 1);
  sqcRYGate(q, 1.6146675407390934, 2);
  sqcRZGate(q, 0.2728540889783453, 2);
  sqcRYGate(q, -2.0510769594535145, 3);
  sqcRZGate(q, -0.23494304720220868, 3);
  sqcRYGate(q, -2.294074814633671, 4);
  sqcRZGate(q, 0.7865157901377939, 4);
  sqcRYGate(q, 2.913430415981277, 5);
  sqcRZGate(q, -0.14664828576412337, 5);
  sqcRYGate(q, 1.645447723206784, 6);
  sqcRZGate(q, 2.3160624998175288, 6);
  sqcRYGate(q, -1.5552894855827901, 7);
  sqcRZGate(q, -1.0198740291896076, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 6, 7);
  sqcRYGate(q, 0.058286251028422095, 0);
  sqcRZGate(q, 2.384850020260437, 0);
  sqcRYGate(q, 1.8057785619360083, 1);
  sqcRZGate(q, 2.6454244493334436, 1);
  sqcRYGate(q, 1.4716861966367771, 2);
  sqcRZGate(q, 0.24501765088307972, 2);
  sqcRYGate(q, -1.2782906689486755, 3);
  sqcRZGate(q, -0.8337364229441508, 3);
  sqcRYGate(q, 2.7039530738907835, 4);
  sqcRZGate(q, -2.5672925267876066, 4);
  sqcRYGate(q, -1.5068173971478371, 5);
  sqcRZGate(q, 2.821992820042469, 5);
  sqcRYGate(q, 2.2627544409151192, 6);
  sqcRZGate(q, -1.4932038051375063, 6);
  sqcRYGate(q, 2.112535928414524, 7);
  sqcRZGate(q, -0.8696368444922145, 7);

  FILE * IR_file = NULL;
  IR_file = fopen(__FILE__"_IR.txt", "w");
  sqcStoreQC(q, IR_file);
  fclose(IR_file);

  sqcTranspile(q, KIND, &opt);

  FILE * Transpile_file = NULL;
  Transpile_file = fopen(__FILE__"_TP.txt", "w");
  sqcStoreQC(q, Transpile_file);
  fclose(Transpile_file);

  sqcDestroyQuantumCircuit(q);
  sqcFinalize();
  return 0;
}
