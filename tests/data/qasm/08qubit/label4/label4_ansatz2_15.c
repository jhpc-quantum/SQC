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

  sqcRYGate(q, 1.1128748750138482, 0);
  sqcRZGate(q, 1.8379834543369524, 0);
  sqcRYGate(q, 2.5235121342184317, 1);
  sqcRZGate(q, 3.0587526992619547, 1);
  sqcRYGate(q, -0.8404542888580604, 2);
  sqcRZGate(q, 0.11353040505383662, 2);
  sqcRYGate(q, 0.4662478077683254, 3);
  sqcRZGate(q, 2.2252364247140313, 3);
  sqcRYGate(q, -0.9533535693964341, 4);
  sqcRZGate(q, 1.980973962913266, 4);
  sqcRYGate(q, 2.0084068478312234, 5);
  sqcRZGate(q, -1.5732375764660977, 5);
  sqcRYGate(q, 1.8345818780445597, 6);
  sqcRZGate(q, -2.159648845051337, 6);
  sqcRYGate(q, 3.115891624474758, 7);
  sqcRZGate(q, -1.9005984906989506, 7);
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
  sqcRYGate(q, 2.7327622098558244, 0);
  sqcRZGate(q, 0.692680684438305, 0);
  sqcRYGate(q, 0.968497943620549, 1);
  sqcRZGate(q, -2.928388967559863, 1);
  sqcRYGate(q, 2.2272163866690757, 2);
  sqcRZGate(q, 0.38409140052435387, 2);
  sqcRYGate(q, 1.3182602596721997, 3);
  sqcRZGate(q, 1.2504668645240697, 3);
  sqcRYGate(q, -2.5814806190562014, 4);
  sqcRZGate(q, -1.8064292158142035, 4);
  sqcRYGate(q, -1.2899138526274037, 5);
  sqcRZGate(q, -2.251491603980818, 5);
  sqcRYGate(q, 0.5789478443129932, 6);
  sqcRZGate(q, -2.1432064046366395, 6);
  sqcRYGate(q, 0.06641525579923936, 7);
  sqcRZGate(q, 1.735332073979877, 7);
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
  sqcRYGate(q, 1.4297743441754742, 0);
  sqcRZGate(q, -0.8274078563916328, 0);
  sqcRYGate(q, -1.9753520012648824, 1);
  sqcRZGate(q, -1.409208073683481, 1);
  sqcRYGate(q, -1.8976027573449352, 2);
  sqcRZGate(q, -0.40550424720107614, 2);
  sqcRYGate(q, -2.8396545194952574, 3);
  sqcRZGate(q, -2.7078874789898806, 3);
  sqcRYGate(q, 2.776994737526147, 4);
  sqcRZGate(q, 0.09513663009054073, 4);
  sqcRYGate(q, 1.8365673054410037, 5);
  sqcRZGate(q, 2.9405628284923604, 5);
  sqcRYGate(q, 0.7530936297900609, 6);
  sqcRZGate(q, -2.99979039621452, 6);
  sqcRYGate(q, -0.8206839519550391, 7);
  sqcRZGate(q, -2.032855872050268, 7);
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
  sqcRYGate(q, 0.7238231984087191, 0);
  sqcRZGate(q, -0.7140447159512497, 0);
  sqcRYGate(q, -0.5716099738466216, 1);
  sqcRZGate(q, -2.5914275007007763, 1);
  sqcRYGate(q, 1.682150351871677, 2);
  sqcRZGate(q, -0.8767982440153588, 2);
  sqcRYGate(q, 2.267273965167923, 3);
  sqcRZGate(q, 2.6259621478211628, 3);
  sqcRYGate(q, 2.6979304613504773, 4);
  sqcRZGate(q, 2.7338457623876753, 4);
  sqcRYGate(q, 0.8458724339569033, 5);
  sqcRZGate(q, -1.7849573273233155, 5);
  sqcRYGate(q, -1.4106879515099908, 6);
  sqcRZGate(q, 0.23672257552198328, 6);
  sqcRYGate(q, -2.021695605399246, 7);
  sqcRZGate(q, 2.6841524734912254, 7);
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
  sqcRYGate(q, -1.0179118237806764, 0);
  sqcRZGate(q, -0.9243210558840228, 0);
  sqcRYGate(q, -0.3693982718833619, 1);
  sqcRZGate(q, 3.0959215711730796, 1);
  sqcRYGate(q, -1.4918163247852856, 2);
  sqcRZGate(q, -2.5442421699962727, 2);
  sqcRYGate(q, -0.7101347410065778, 3);
  sqcRZGate(q, -0.4830973224709248, 3);
  sqcRYGate(q, -0.3406186914984147, 4);
  sqcRZGate(q, -0.0844379529980321, 4);
  sqcRYGate(q, -0.5117471046676666, 5);
  sqcRZGate(q, 0.9175746799183294, 5);
  sqcRYGate(q, -0.9706296175627844, 6);
  sqcRZGate(q, 0.11358636971081904, 6);
  sqcRYGate(q, -1.3171601027255937, 7);
  sqcRZGate(q, 0.6309928447321955, 7);
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
  sqcRYGate(q, 0.26318877607561164, 0);
  sqcRZGate(q, 1.177910703246832, 0);
  sqcRYGate(q, 2.9308502638163816, 1);
  sqcRZGate(q, 1.7875906762724227, 1);
  sqcRYGate(q, 1.4380175054407438, 2);
  sqcRZGate(q, 0.866388510464025, 2);
  sqcRYGate(q, 2.8771202950634702, 3);
  sqcRZGate(q, 1.7573756571438859, 3);
  sqcRYGate(q, -0.11560767704720651, 4);
  sqcRZGate(q, -2.926599716399437, 4);
  sqcRYGate(q, 2.3754512848408766, 5);
  sqcRZGate(q, -0.02234849302407734, 5);
  sqcRYGate(q, -0.20772114958620463, 6);
  sqcRZGate(q, 2.8512532650896425, 6);
  sqcRYGate(q, -0.46480439204788304, 7);
  sqcRZGate(q, 2.0826406046294417, 7);
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
  sqcRYGate(q, 0.7626411819834099, 0);
  sqcRZGate(q, -2.4306182805062755, 0);
  sqcRYGate(q, 0.6475379289346935, 1);
  sqcRZGate(q, 0.27072179724041934, 1);
  sqcRYGate(q, -2.500924733053883, 2);
  sqcRZGate(q, 1.9810836486776633, 2);
  sqcRYGate(q, 0.5573434509238129, 3);
  sqcRZGate(q, -1.6890887019887235, 3);
  sqcRYGate(q, 2.591635538211139, 4);
  sqcRZGate(q, 1.5868219436808977, 4);
  sqcRYGate(q, 0.6601007881989194, 5);
  sqcRZGate(q, 0.39028528748407604, 5);
  sqcRYGate(q, 0.5598401211953083, 6);
  sqcRZGate(q, 0.8909921677811564, 6);
  sqcRYGate(q, 0.581237504854256, 7);
  sqcRZGate(q, 3.0858765517711353, 7);
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
  sqcRYGate(q, 0.5253254729674115, 0);
  sqcRZGate(q, -0.3858885616342667, 0);
  sqcRYGate(q, -2.568704849271827, 1);
  sqcRZGate(q, -0.663048517264701, 1);
  sqcRYGate(q, 0.39558135143351303, 2);
  sqcRZGate(q, -2.1123044548697587, 2);
  sqcRYGate(q, -2.0855055461320555, 3);
  sqcRZGate(q, 2.3972060653377647, 3);
  sqcRYGate(q, -1.4003122795603096, 4);
  sqcRZGate(q, 3.1236964598995405, 4);
  sqcRYGate(q, 1.02206938875206, 5);
  sqcRZGate(q, 0.08132302242927994, 5);
  sqcRYGate(q, 2.085404792870059, 6);
  sqcRZGate(q, -1.8475202311308943, 6);
  sqcRYGate(q, 1.0009573779237715, 7);
  sqcRZGate(q, -0.37256415247655633, 7);
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
  sqcRYGate(q, 2.833746375901137, 0);
  sqcRZGate(q, 0.08666308794441413, 0);
  sqcRYGate(q, 1.9699557888314347, 1);
  sqcRZGate(q, 2.848003930814593, 1);
  sqcRYGate(q, -2.5089810708838765, 2);
  sqcRZGate(q, -1.9755289322932228, 2);
  sqcRYGate(q, 2.723405724927928, 3);
  sqcRZGate(q, 0.2627154099844263, 3);
  sqcRYGate(q, 1.3425044774335726, 4);
  sqcRZGate(q, 2.5900035064050386, 4);
  sqcRYGate(q, -1.9772029051518554, 5);
  sqcRZGate(q, -2.497430633515211, 5);
  sqcRYGate(q, 1.4566737730352135, 6);
  sqcRZGate(q, -1.9378219911669503, 6);
  sqcRYGate(q, -2.1708472245788264, 7);
  sqcRZGate(q, -0.7662398386058831, 7);
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
  sqcRYGate(q, 0.7023822487618495, 0);
  sqcRZGate(q, 2.488248034916264, 0);
  sqcRYGate(q, 2.141554165186964, 1);
  sqcRZGate(q, -2.487035414704195, 1);
  sqcRYGate(q, 1.6556563482049207, 2);
  sqcRZGate(q, -0.9788096534291766, 2);
  sqcRYGate(q, -1.0127780378962508, 3);
  sqcRZGate(q, -2.2725623660633723, 3);
  sqcRYGate(q, -2.008313754137477, 4);
  sqcRZGate(q, 2.374474459567778, 4);
  sqcRYGate(q, 1.646436506272866, 5);
  sqcRZGate(q, 0.9237998873480502, 5);
  sqcRYGate(q, 1.8825935172773627, 6);
  sqcRZGate(q, 0.2521234068027951, 6);
  sqcRYGate(q, -2.785320936371899, 7);
  sqcRZGate(q, -2.0053734670466965, 7);
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
  sqcRYGate(q, -1.0457435714400651, 0);
  sqcRZGate(q, 0.6958436704149307, 0);
  sqcRYGate(q, 1.403036604022489, 1);
  sqcRZGate(q, 0.57675146636406, 1);
  sqcRYGate(q, -0.9617263790956896, 2);
  sqcRZGate(q, 3.1075846041529687, 2);
  sqcRYGate(q, 2.2056714286926136, 3);
  sqcRZGate(q, -2.438732471204861, 3);
  sqcRYGate(q, 1.3627671282815843, 4);
  sqcRZGate(q, 2.920310177410339, 4);
  sqcRYGate(q, 1.3962602276915481, 5);
  sqcRZGate(q, -0.3901762138550655, 5);
  sqcRYGate(q, 1.145059212849067, 6);
  sqcRZGate(q, -0.5298802109582832, 6);
  sqcRYGate(q, -0.27329010496991923, 7);
  sqcRZGate(q, -0.3545873513630568, 7);
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
  sqcRYGate(q, -1.0275537021480947, 0);
  sqcRZGate(q, -2.2484552469374455, 0);
  sqcRYGate(q, -0.5727767265527843, 1);
  sqcRZGate(q, -1.17464755450266, 1);
  sqcRYGate(q, 2.081701935028873, 2);
  sqcRZGate(q, -2.5686291282476534, 2);
  sqcRYGate(q, -2.3080879533488567, 3);
  sqcRZGate(q, 1.4656282863240102, 3);
  sqcRYGate(q, 1.1943901860452233, 4);
  sqcRZGate(q, -1.9629565645206932, 4);
  sqcRYGate(q, 2.3609061232073163, 5);
  sqcRZGate(q, -2.38441579603727, 5);
  sqcRYGate(q, -0.9588862285112487, 6);
  sqcRZGate(q, -0.0498558070355104, 6);
  sqcRYGate(q, 1.7559247468004058, 7);
  sqcRZGate(q, 0.10907111658577946, 7);
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
  sqcRYGate(q, 1.9397506884646762, 0);
  sqcRZGate(q, -1.6430228215276683, 0);
  sqcRYGate(q, -1.9092606679524176, 1);
  sqcRZGate(q, 0.3412206007811527, 1);
  sqcRYGate(q, 0.8580618350066187, 2);
  sqcRZGate(q, 0.12089666433217872, 2);
  sqcRYGate(q, 0.8567161849309878, 3);
  sqcRZGate(q, 2.5816908118392985, 3);
  sqcRYGate(q, -0.881778949554314, 4);
  sqcRZGate(q, -0.08562860432829388, 4);
  sqcRYGate(q, 0.3143761247160004, 5);
  sqcRZGate(q, 2.5647157905704248, 5);
  sqcRYGate(q, -1.7985476979284434, 6);
  sqcRZGate(q, -1.9453089060425668, 6);
  sqcRYGate(q, -0.3589999762838261, 7);
  sqcRZGate(q, 1.3080785195550106, 7);
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
  sqcRYGate(q, -0.9487031229601959, 0);
  sqcRZGate(q, 2.3148511707412394, 0);
  sqcRYGate(q, -1.2194992135782206, 1);
  sqcRZGate(q, 2.8368181646430353, 1);
  sqcRYGate(q, 1.3937003591803316, 2);
  sqcRZGate(q, 0.35890329779371233, 2);
  sqcRYGate(q, 1.1015792779467144, 3);
  sqcRZGate(q, -1.5659695279322352, 3);
  sqcRYGate(q, 0.8695375598521515, 4);
  sqcRZGate(q, -0.10474472097542442, 4);
  sqcRYGate(q, -0.7608221609517242, 5);
  sqcRZGate(q, 1.2620024418199032, 5);
  sqcRYGate(q, 2.309590648894819, 6);
  sqcRZGate(q, -2.7447715004855615, 6);
  sqcRYGate(q, -2.5356811301974544, 7);
  sqcRZGate(q, 0.36286746259051034, 7);
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
  sqcRYGate(q, 2.694910337025095, 0);
  sqcRZGate(q, -1.5916953924921775, 0);
  sqcRYGate(q, -2.980771313588841, 1);
  sqcRZGate(q, 2.8244714419717822, 1);
  sqcRYGate(q, -0.49991037606998695, 2);
  sqcRZGate(q, 1.5387395047386183, 2);
  sqcRYGate(q, -0.500335387311873, 3);
  sqcRZGate(q, 2.571287611634508, 3);
  sqcRYGate(q, -0.500638577464215, 4);
  sqcRZGate(q, 1.4211175497723523, 4);
  sqcRYGate(q, 1.7948304516784876, 5);
  sqcRZGate(q, 1.8659682066290326, 5);
  sqcRYGate(q, 0.9645274266782072, 6);
  sqcRZGate(q, -1.3677453633244117, 6);
  sqcRYGate(q, 1.322771712786745, 7);
  sqcRZGate(q, -0.022824395896940075, 7);
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
  sqcRYGate(q, 1.4430414353263625, 0);
  sqcRZGate(q, -1.4669857417149832, 0);
  sqcRYGate(q, -1.976089316763286, 1);
  sqcRZGate(q, 2.456315907368292, 1);
  sqcRYGate(q, -1.7050602734286282, 2);
  sqcRZGate(q, -2.4731186757973798, 2);
  sqcRYGate(q, 0.3802513604737989, 3);
  sqcRZGate(q, 2.188064336689551, 3);
  sqcRYGate(q, 1.7317733839805878, 4);
  sqcRZGate(q, 3.0675359958887753, 4);
  sqcRYGate(q, 1.1341710752330871, 5);
  sqcRZGate(q, -1.6766733499652249, 5);
  sqcRYGate(q, -0.7339714163753337, 6);
  sqcRZGate(q, -0.5775313772466832, 6);
  sqcRYGate(q, 1.0238306938733936, 7);
  sqcRZGate(q, 0.35846523932837193, 7);
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
  sqcRYGate(q, -2.605891310485275, 0);
  sqcRZGate(q, 0.1816416881489253, 0);
  sqcRYGate(q, -1.6388475901964588, 1);
  sqcRZGate(q, 2.7532493402117844, 1);
  sqcRYGate(q, 1.086904615868329, 2);
  sqcRZGate(q, -0.2768860018406948, 2);
  sqcRYGate(q, 1.865480857527645, 3);
  sqcRZGate(q, -0.03779547208792597, 3);
  sqcRYGate(q, -1.0417617286229626, 4);
  sqcRZGate(q, -0.9099922587369643, 4);
  sqcRYGate(q, -0.02457225172948776, 5);
  sqcRZGate(q, 2.8475972606959736, 5);
  sqcRYGate(q, 0.4171434869447097, 6);
  sqcRZGate(q, -0.3319315563681746, 6);
  sqcRYGate(q, -2.2849534195298227, 7);
  sqcRZGate(q, 0.702301714778315, 7);
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
  sqcRYGate(q, -2.0574618769261335, 0);
  sqcRZGate(q, 1.77338163982135, 0);
  sqcRYGate(q, 1.4704732831511544, 1);
  sqcRZGate(q, 0.7348570670814922, 1);
  sqcRYGate(q, 2.6826730841450006, 2);
  sqcRZGate(q, -0.1514531754545647, 2);
  sqcRYGate(q, -1.369195226168677, 3);
  sqcRZGate(q, -1.4305857450093202, 3);
  sqcRYGate(q, -2.6693844083461817, 4);
  sqcRZGate(q, -0.3676991108833687, 4);
  sqcRYGate(q, 0.8729002856007239, 5);
  sqcRZGate(q, -2.8689062368676415, 5);
  sqcRYGate(q, -0.3310272757835495, 6);
  sqcRZGate(q, 2.5667541412419927, 6);
  sqcRYGate(q, -0.862175383650853, 7);
  sqcRZGate(q, -2.1255132793046503, 7);
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
  sqcRYGate(q, -2.19507685562147, 0);
  sqcRZGate(q, 0.1717852104768189, 0);
  sqcRYGate(q, -2.1004583671881, 1);
  sqcRZGate(q, -0.6658038232175216, 1);
  sqcRYGate(q, 0.4865908049866061, 2);
  sqcRZGate(q, -1.7635943246661991, 2);
  sqcRYGate(q, -2.9196932182323185, 3);
  sqcRZGate(q, 1.833779580098321, 3);
  sqcRYGate(q, -2.1973346375933636, 4);
  sqcRZGate(q, 0.9524081016625271, 4);
  sqcRYGate(q, -0.43939654009124773, 5);
  sqcRZGate(q, 0.6129754144440679, 5);
  sqcRYGate(q, 2.2703220294103557, 6);
  sqcRZGate(q, 1.0448625593323486, 6);
  sqcRYGate(q, 2.879666844409992, 7);
  sqcRZGate(q, 1.3547870420535266, 7);

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
