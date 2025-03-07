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

  sqcRYGate(q, 0.9644879501505317, 0);
  sqcRZGate(q, -2.914815773281256, 0);
  sqcRYGate(q, -1.4879363766864753, 1);
  sqcRZGate(q, 0.9826559143398284, 1);
  sqcRYGate(q, -0.4004744182297184, 2);
  sqcRZGate(q, -0.5933534663653415, 2);
  sqcRYGate(q, 3.139763708715586, 3);
  sqcRZGate(q, 1.3434768392428895, 3);
  sqcRYGate(q, -0.8739360432315085, 4);
  sqcRZGate(q, -0.4603086727295702, 4);
  sqcRYGate(q, -0.49454108040304356, 5);
  sqcRZGate(q, 2.4617019109963247, 5);
  sqcRYGate(q, 2.223498660051618, 6);
  sqcRZGate(q, -0.8619288454073297, 6);
  sqcRYGate(q, -1.82963116111925, 7);
  sqcRZGate(q, 2.0123598349962855, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -3.1039149478654853, 0);
  sqcRZGate(q, 1.5272199400293849, 0);
  sqcRYGate(q, -0.00973469799038984, 1);
  sqcRZGate(q, -0.4758017280612465, 1);
  sqcRYGate(q, 2.9211088179488427, 2);
  sqcRZGate(q, 3.096152168369827, 2);
  sqcRYGate(q, -0.19163385905346964, 3);
  sqcRZGate(q, 2.8876566592803936, 3);
  sqcRYGate(q, -2.3695647926216368, 4);
  sqcRZGate(q, -1.7407621528639465, 4);
  sqcRYGate(q, -1.6592194865170722, 5);
  sqcRZGate(q, -1.110165615088631, 5);
  sqcRYGate(q, 2.3852571267242046, 6);
  sqcRZGate(q, 0.9465183839637796, 6);
  sqcRYGate(q, 1.236250381001736, 7);
  sqcRZGate(q, -1.9737282927105253, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.4860650382874674, 0);
  sqcRZGate(q, -0.14433771976019333, 0);
  sqcRYGate(q, 3.0913086939678216, 1);
  sqcRZGate(q, -2.5683106614717794, 1);
  sqcRYGate(q, 0.21927735720161223, 2);
  sqcRZGate(q, -0.5946225344887609, 2);
  sqcRYGate(q, -3.140453970408252, 3);
  sqcRZGate(q, -1.6253471044971626, 3);
  sqcRYGate(q, -3.136429494221696, 4);
  sqcRZGate(q, 1.087109813523302, 4);
  sqcRYGate(q, -0.8092194722243908, 5);
  sqcRZGate(q, -0.7637743570264612, 5);
  sqcRYGate(q, 1.6928169038117735, 6);
  sqcRZGate(q, 2.8111743321751974, 6);
  sqcRYGate(q, 2.1809962979191315, 7);
  sqcRZGate(q, -0.07765137729373828, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.719153810145779, 0);
  sqcRZGate(q, -2.967212006144583, 0);
  sqcRYGate(q, -1.9207063179869202, 1);
  sqcRZGate(q, 2.696694746371693, 1);
  sqcRYGate(q, 0.2028034080479159, 2);
  sqcRZGate(q, -1.6462394268440113, 2);
  sqcRYGate(q, 3.0697734991918586, 3);
  sqcRZGate(q, -0.6357041549013153, 3);
  sqcRYGate(q, 2.2843973719220365, 4);
  sqcRZGate(q, -3.1083475286586606, 4);
  sqcRYGate(q, -1.774790189981277, 5);
  sqcRZGate(q, 0.6590318547698102, 5);
  sqcRYGate(q, -1.0083051348423582, 6);
  sqcRZGate(q, -1.8196851996447005, 6);
  sqcRYGate(q, -2.380653478703496, 7);
  sqcRZGate(q, 0.4422525553178352, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.063813886976023, 0);
  sqcRZGate(q, -2.87641781350661, 0);
  sqcRYGate(q, -1.3057521755357393, 1);
  sqcRZGate(q, -2.579202680308274, 1);
  sqcRYGate(q, -0.004489109598307229, 2);
  sqcRZGate(q, -2.3183811247956814, 2);
  sqcRYGate(q, 2.1044005664217833, 3);
  sqcRZGate(q, 2.370141168158544, 3);
  sqcRYGate(q, 1.9519104559671305, 4);
  sqcRZGate(q, -1.3008845215181977, 4);
  sqcRYGate(q, 1.6242409884397946, 5);
  sqcRZGate(q, -1.5610332181891824, 5);
  sqcRYGate(q, -2.235992405895617, 6);
  sqcRZGate(q, 2.1886299642004485, 6);
  sqcRYGate(q, -1.3556834040396464, 7);
  sqcRZGate(q, 2.7453691484104565, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.4350415977204722, 0);
  sqcRZGate(q, 1.1666809687728952, 0);
  sqcRYGate(q, -3.1413369009341996, 1);
  sqcRZGate(q, 0.11240985145738033, 1);
  sqcRYGate(q, 3.1182625947134865, 2);
  sqcRZGate(q, -2.1443121717238425, 2);
  sqcRYGate(q, 3.0655041039627835, 3);
  sqcRZGate(q, 2.594330807423774, 3);
  sqcRYGate(q, -1.906139380831335, 4);
  sqcRZGate(q, -2.690659957739108, 4);
  sqcRYGate(q, 1.5530565623194557, 5);
  sqcRZGate(q, 1.1543143811115595, 5);
  sqcRYGate(q, -2.415408385064559, 6);
  sqcRZGate(q, -0.9719308382644832, 6);
  sqcRYGate(q, -2.920347214342679, 7);
  sqcRZGate(q, 1.303339610854626, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.0850571611617097, 0);
  sqcRZGate(q, 2.315531490871875, 0);
  sqcRYGate(q, 3.100452415049065, 1);
  sqcRZGate(q, -1.9807855735140585, 1);
  sqcRYGate(q, 3.103987894597859, 2);
  sqcRZGate(q, 2.174650943065401, 2);
  sqcRYGate(q, 0.851083442688435, 3);
  sqcRZGate(q, -1.8579303974591648, 3);
  sqcRYGate(q, 1.7523407098073929, 4);
  sqcRZGate(q, -2.775923358817761, 4);
  sqcRYGate(q, 2.863528070317706, 5);
  sqcRZGate(q, 3.1099550150210575, 5);
  sqcRYGate(q, 2.1420918376568396, 6);
  sqcRZGate(q, -1.347613956531685, 6);
  sqcRYGate(q, -1.2375720283976195, 7);
  sqcRZGate(q, 1.6336332073733997, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.3154638071356546, 0);
  sqcRZGate(q, 1.7479733223075327, 0);
  sqcRYGate(q, -0.15504141120981102, 1);
  sqcRZGate(q, -2.534542017976455, 1);
  sqcRYGate(q, -0.0011393690372907338, 2);
  sqcRZGate(q, -2.352916940355447, 2);
  sqcRYGate(q, 3.0377361923244917, 3);
  sqcRZGate(q, 0.8143715096788158, 3);
  sqcRYGate(q, 1.6805025652968917, 4);
  sqcRZGate(q, 1.6850000582493165, 4);
  sqcRYGate(q, -2.5230714810156964, 5);
  sqcRZGate(q, 0.6272627611837907, 5);
  sqcRYGate(q, 1.7907833622454927, 6);
  sqcRZGate(q, 2.4681241256413107, 6);
  sqcRYGate(q, -3.0642443890740307, 7);
  sqcRZGate(q, -2.401506952759995, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.05894610380313764, 0);
  sqcRZGate(q, 0.530785733964829, 0);
  sqcRYGate(q, -1.1435689615932558, 1);
  sqcRZGate(q, -0.043615063011510635, 1);
  sqcRYGate(q, 0.019508015006724833, 2);
  sqcRZGate(q, 0.5056513523029167, 2);
  sqcRYGate(q, -1.425356788647995, 3);
  sqcRZGate(q, 2.4603008283933674, 3);
  sqcRYGate(q, 2.224241720969415, 4);
  sqcRZGate(q, -0.6750619744616725, 4);
  sqcRYGate(q, -0.36914902039816977, 5);
  sqcRZGate(q, -0.8986285721627058, 5);
  sqcRYGate(q, -2.44374429001586, 6);
  sqcRZGate(q, 1.7083597575652973, 6);
  sqcRYGate(q, 2.3770009297080317, 7);
  sqcRZGate(q, 2.9283911654186396, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -2.4767153358790095, 0);
  sqcRZGate(q, -0.05880880197505967, 0);
  sqcRYGate(q, 0.08999295933674613, 1);
  sqcRZGate(q, 0.4046877381534337, 1);
  sqcRYGate(q, -3.139520327502402, 2);
  sqcRZGate(q, -1.396250992375152, 2);
  sqcRYGate(q, -0.005354123385810585, 3);
  sqcRZGate(q, 0.7409827259997496, 3);
  sqcRYGate(q, -2.7262075253096234, 4);
  sqcRZGate(q, -2.2809860529944963, 4);
  sqcRYGate(q, -0.8757223564209213, 5);
  sqcRZGate(q, -2.109307836867454, 5);
  sqcRYGate(q, 1.3961009007097323, 6);
  sqcRZGate(q, -0.9207763779843008, 6);
  sqcRYGate(q, 1.1069373048376328, 7);
  sqcRZGate(q, -0.7906183122940637, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 1.6775718736647303, 0);
  sqcRZGate(q, 2.4728526186537425, 0);
  sqcRYGate(q, -0.8269358720435355, 1);
  sqcRZGate(q, 0.10484720335395428, 1);
  sqcRYGate(q, -0.00164517029757949, 2);
  sqcRZGate(q, 2.0859714810881513, 2);
  sqcRYGate(q, -1.535168585869991, 3);
  sqcRZGate(q, 0.9030806523793984, 3);
  sqcRYGate(q, 0.03475603923181847, 4);
  sqcRZGate(q, -2.599097786232282, 4);
  sqcRYGate(q, 2.553865273382684, 5);
  sqcRZGate(q, 2.71186001982418, 5);
  sqcRYGate(q, -0.9528245870782683, 6);
  sqcRZGate(q, 3.0291977405206105, 6);
  sqcRYGate(q, 2.3800917218839563, 7);
  sqcRZGate(q, -2.2981273616140667, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6982188481473682, 0);
  sqcRZGate(q, 1.479012654644639, 0);
  sqcRYGate(q, -0.0019994708061892297, 1);
  sqcRZGate(q, 1.3767000117109927, 1);
  sqcRYGate(q, 3.1261197177964086, 2);
  sqcRZGate(q, 1.0331181587293252, 2);
  sqcRYGate(q, 0.0015582994442691729, 3);
  sqcRZGate(q, -2.713881222826415, 3);
  sqcRYGate(q, 1.054826917855194, 4);
  sqcRZGate(q, 1.8903473125128958, 4);
  sqcRYGate(q, -0.8381707209337357, 5);
  sqcRZGate(q, 2.8846607470054266, 5);
  sqcRYGate(q, -1.6382756810014465, 6);
  sqcRZGate(q, -1.537195301017764, 6);
  sqcRYGate(q, 0.9190154189070356, 7);
  sqcRZGate(q, 2.357525273677829, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.713617969897056, 0);
  sqcRZGate(q, -0.005834941574142252, 0);
  sqcRYGate(q, -0.4132805165219621, 1);
  sqcRZGate(q, 1.8366602356886372, 1);
  sqcRYGate(q, 0.06970136716750842, 2);
  sqcRZGate(q, -1.7870086024121352, 2);
  sqcRYGate(q, 0.6743923104944962, 3);
  sqcRZGate(q, -1.7702561796618579, 3);
  sqcRYGate(q, 0.8989549374813672, 4);
  sqcRZGate(q, 0.9700702354066673, 4);
  sqcRYGate(q, -2.321271593588312, 5);
  sqcRZGate(q, 1.0647839832013966, 5);
  sqcRYGate(q, -1.8399542182766688, 6);
  sqcRZGate(q, -1.726239790532353, 6);
  sqcRYGate(q, -2.963654342439592, 7);
  sqcRZGate(q, -0.5702621732483207, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.1912333074271775, 0);
  sqcRZGate(q, -0.6117462571567939, 0);
  sqcRYGate(q, 0.0020008294627321516, 1);
  sqcRZGate(q, 1.0011551387656707, 1);
  sqcRYGate(q, 3.136621054953997, 2);
  sqcRZGate(q, 2.0747031203558173, 2);
  sqcRYGate(q, 0.004164591177531528, 3);
  sqcRZGate(q, -1.030237181058335, 3);
  sqcRYGate(q, -0.4613868304038163, 4);
  sqcRZGate(q, -0.9130907605581475, 4);
  sqcRYGate(q, 1.580907396267482, 5);
  sqcRZGate(q, 0.3478987423324682, 5);
  sqcRYGate(q, 2.2894248476284216, 6);
  sqcRZGate(q, 1.7816150689452162, 6);
  sqcRYGate(q, -1.3311270314027484, 7);
  sqcRZGate(q, -1.632683970263173, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.702688243110221, 0);
  sqcRZGate(q, -0.17233350847563497, 0);
  sqcRYGate(q, -1.223537247240359, 1);
  sqcRZGate(q, 2.093870985663126, 1);
  sqcRYGate(q, -1.6046861726421169, 2);
  sqcRZGate(q, 1.6547300821299347, 2);
  sqcRYGate(q, -1.1199494072374423, 3);
  sqcRZGate(q, 2.4204973611525578, 3);
  sqcRYGate(q, -1.9229256656588714, 4);
  sqcRZGate(q, -0.6268364780345271, 4);
  sqcRYGate(q, 0.6394431237660125, 5);
  sqcRZGate(q, -1.6019661695345189, 5);
  sqcRYGate(q, -2.1786008810958544, 6);
  sqcRZGate(q, -1.4140362795263641, 6);
  sqcRYGate(q, -0.5280240518595962, 7);
  sqcRZGate(q, -2.3340311417242625, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.482079592297607, 0);
  sqcRZGate(q, 1.334006927903581, 0);
  sqcRYGate(q, -3.1299313353385436, 1);
  sqcRZGate(q, 3.136263161600784, 1);
  sqcRYGate(q, 0.0035949502498953123, 2);
  sqcRZGate(q, 2.240079175279294, 2);
  sqcRYGate(q, -0.001151709134734169, 3);
  sqcRZGate(q, 0.9736079890850906, 3);
  sqcRYGate(q, 0.022603941227597346, 4);
  sqcRZGate(q, 2.1978888940235337, 4);
  sqcRYGate(q, -1.4891104715731587, 5);
  sqcRZGate(q, 1.0197923527718598, 5);
  sqcRYGate(q, 0.25872085546334145, 6);
  sqcRZGate(q, 0.31661090670065617, 6);
  sqcRYGate(q, 1.4828138409150626, 7);
  sqcRZGate(q, 2.455776560055894, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.6402538020271538, 0);
  sqcRZGate(q, -1.849592470751524, 0);
  sqcRYGate(q, 0.9128840965660974, 1);
  sqcRZGate(q, 2.6124941243302184, 1);
  sqcRYGate(q, 1.6293030305984733, 2);
  sqcRZGate(q, 1.8511760170367457, 2);
  sqcRYGate(q, 1.822454598117936, 3);
  sqcRZGate(q, -2.6060439436709597, 3);
  sqcRYGate(q, 0.8774219119069909, 4);
  sqcRZGate(q, -1.7131902795596903, 4);
  sqcRYGate(q, 1.7759745740730941, 5);
  sqcRZGate(q, 2.2785213126393127, 5);
  sqcRYGate(q, 1.4570504870532193, 6);
  sqcRZGate(q, -1.5202767550137732, 6);
  sqcRYGate(q, 2.288671858696428, 7);
  sqcRZGate(q, 0.9997759035150039, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 0.3429786615519275, 0);
  sqcRZGate(q, 2.191643808596643, 0);
  sqcRYGate(q, -0.616544320469312, 1);
  sqcRZGate(q, -2.9468075532537084, 1);
  sqcRYGate(q, 0.0028253612965079083, 2);
  sqcRZGate(q, -2.693841102323974, 2);
  sqcRYGate(q, -0.00422569063190954, 3);
  sqcRZGate(q, 2.430345390676478, 3);
  sqcRYGate(q, 3.126831205890881, 4);
  sqcRZGate(q, 2.395168933116355, 4);
  sqcRYGate(q, 2.4265744888635163, 5);
  sqcRZGate(q, 0.5472811444011221, 5);
  sqcRYGate(q, 2.3384788442301856, 6);
  sqcRZGate(q, 2.8836407520058134, 6);
  sqcRYGate(q, -1.5281588442278338, 7);
  sqcRZGate(q, 2.0650348692045917, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, 2.454245834416656, 0);
  sqcRZGate(q, 1.7976739172084146, 0);
  sqcRYGate(q, 0.4912988625254008, 1);
  sqcRZGate(q, -0.4650819611180923, 1);
  sqcRYGate(q, -0.5631852591854367, 2);
  sqcRZGate(q, -2.390058917416058, 2);
  sqcRYGate(q, -0.0424026908241073, 3);
  sqcRZGate(q, 2.8157466867760452, 3);
  sqcRYGate(q, 1.4639784402846197, 4);
  sqcRZGate(q, -0.5572388617005749, 4);
  sqcRYGate(q, 0.10504117311605199, 5);
  sqcRZGate(q, 0.9391050540497897, 5);
  sqcRYGate(q, -1.3297570476137102, 6);
  sqcRZGate(q, -0.5104843264438053, 6);
  sqcRYGate(q, 2.7983375133875414, 7);
  sqcRZGate(q, 2.4515583167442956, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -0.6650595427509102, 0);
  sqcRZGate(q, 1.335093099233749, 0);
  sqcRYGate(q, 0.5267686903551612, 1);
  sqcRZGate(q, 0.6974408033498611, 1);
  sqcRYGate(q, 0.019997005447478067, 2);
  sqcRZGate(q, 1.8066399750847342, 2);
  sqcRYGate(q, -0.010872127265702131, 3);
  sqcRZGate(q, -0.7563484246603942, 3);
  sqcRYGate(q, 0.007043784697695207, 4);
  sqcRZGate(q, 0.37485145148099175, 4);
  sqcRYGate(q, -0.7004244700442346, 5);
  sqcRZGate(q, -1.9509110840430886, 5);
  sqcRYGate(q, 0.7498021993452336, 6);
  sqcRZGate(q, -1.03720136571984, 6);
  sqcRYGate(q, -2.0812210574711614, 7);
  sqcRZGate(q, -1.3328458813989386, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcRYGate(q, -1.4700536983015426, 0);
  sqcRZGate(q, -0.46096810281638767, 0);
  sqcRYGate(q, 1.8253714489473187, 1);
  sqcRZGate(q, -1.5707001386812836, 1);
  sqcRYGate(q, -1.8784147065745689, 2);
  sqcRZGate(q, -0.2915464808869386, 2);
  sqcRYGate(q, 1.6033800064278987, 3);
  sqcRZGate(q, -1.6733823605298301, 3);
  sqcRYGate(q, 2.9306377520156928, 4);
  sqcRZGate(q, -0.5097326433755756, 4);
  sqcRYGate(q, -2.0704420851266203, 5);
  sqcRZGate(q, 1.1104504682613214, 5);
  sqcRYGate(q, -1.7026040344844438, 6);
  sqcRZGate(q, -2.022528695029128, 6);
  sqcRYGate(q, -1.8434017968978695, 7);
  sqcRZGate(q, -0.8683090149051557, 7);

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
