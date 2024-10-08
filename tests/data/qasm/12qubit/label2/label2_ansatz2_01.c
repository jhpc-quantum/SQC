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
  sqcInitialize();

  sqcQC* q;
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, 3.1170142050615164, 0);
  sqcRZGate(q, 0.6435920076116234, 0);
  sqcRYGate(q, -0.07371163591465892, 1);
  sqcRZGate(q, 0.17042505755632573, 1);
  sqcRYGate(q, -1.4512313162978805, 2);
  sqcRZGate(q, -2.26262380108235, 2);
  sqcRYGate(q, 1.5707935932467247, 3);
  sqcRZGate(q, 3.1579273938540644e-05, 3);
  sqcRYGate(q, 7.555953884086362e-05, 4);
  sqcRZGate(q, 1.4623218335896395, 4);
  sqcRYGate(q, -3.0922264159109485, 5);
  sqcRZGate(q, -1.0466306967629624, 5);
  sqcRYGate(q, 0.0043187090014003005, 6);
  sqcRZGate(q, -2.3896129991107133, 6);
  sqcRYGate(q, 0.0012145716047649465, 7);
  sqcRZGate(q, -0.6912976743525414, 7);
  sqcRYGate(q, -3.1415693046737627, 8);
  sqcRZGate(q, -0.7197011880152449, 8);
  sqcRYGate(q, 5.277306591722208e-09, 9);
  sqcRZGate(q, -0.8144707556173899, 9);
  sqcRYGate(q, -3.7115395201681167e-09, 10);
  sqcRZGate(q, -0.2501329983329601, 10);
  sqcRYGate(q, -4.2492367378142406e-07, 11);
  sqcRZGate(q, -0.10771778997049264, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 3.14159255840692, 0);
  sqcRZGate(q, 2.172704102002808, 0);
  sqcRYGate(q, 3.141592465899812, 1);
  sqcRZGate(q, -1.401364318950015, 1);
  sqcRYGate(q, 3.95725692917966e-05, 2);
  sqcRZGate(q, -2.4496860092085795, 2);
  sqcRYGate(q, 1.5707695598173776, 3);
  sqcRZGate(q, 1.5707161163373606, 3);
  sqcRYGate(q, 3.141592606631482, 4);
  sqcRZGate(q, -1.113303827979047, 4);
  sqcRYGate(q, -3.7518385083146206e-05, 5);
  sqcRZGate(q, 2.6173900572514, 5);
  sqcRYGate(q, 3.140389377819008, 6);
  sqcRZGate(q, 2.320534280624305, 6);
  sqcRYGate(q, -0.003984368124122284, 7);
  sqcRZGate(q, 2.2422986168868464, 7);
  sqcRYGate(q, 3.0921754158197445, 8);
  sqcRZGate(q, -2.891190544468875, 8);
  sqcRYGate(q, 3.141592648527788, 9);
  sqcRZGate(q, -0.647834960885346, 9);
  sqcRYGate(q, 1.5708570552933767, 10);
  sqcRZGate(q, -3.14117329961271, 10);
  sqcRYGate(q, -1.6215608260385905, 11);
  sqcRZGate(q, -2.8544446022183405, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.140368535183898, 0);
  sqcRZGate(q, 2.3097109169504013, 0);
  sqcRYGate(q, -0.004328600195234066, 1);
  sqcRZGate(q, -2.2956347517771523, 1);
  sqcRYGate(q, -2.7151437327062644, 2);
  sqcRZGate(q, 2.4550496692927477, 2);
  sqcRYGate(q, 0.42404643187041824, 3);
  sqcRZGate(q, -0.8763345838570958, 3);
  sqcRYGate(q, -1.571409509989306, 4);
  sqcRZGate(q, -0.011918779513580448, 4);
  sqcRYGate(q, 1.461855913596378, 5);
  sqcRZGate(q, 1.7931767771254565, 5);
  sqcRYGate(q, 0.07369654658463068, 6);
  sqcRZGate(q, 2.468701439273886, 6);
  sqcRYGate(q, -3.117210309301418, 7);
  sqcRZGate(q, -2.4708238092769785, 7);
  sqcRYGate(q, 3.141452501688623, 8);
  sqcRZGate(q, -1.3197788742698018, 8);
  sqcRYGate(q, 1.5077725420074025e-09, 9);
  sqcRZGate(q, -2.85629301250332, 9);
  sqcRYGate(q, 1.5722093458382984, 10);
  sqcRZGate(q, 1.5714006732247947, 10);
  sqcRYGate(q, 0.0014708049801453798, 11);
  sqcRZGate(q, -1.8573406586750771, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, -3.141591711859288, 0);
  sqcRZGate(q, -2.545847944328553, 0);
  sqcRYGate(q, -1.8176041946847422e-06, 1);
  sqcRZGate(q, 2.9545549143776646, 1);
  sqcRYGate(q, -0.0007243693354151512, 2);
  sqcRZGate(q, -0.33345013393952627, 2);
  sqcRYGate(q, 0.000746858341440948, 3);
  sqcRZGate(q, -1.076079251794738, 3);
  sqcRYGate(q, 1.5734249602958892, 4);
  sqcRZGate(q, -1.8002109944012707, 4);
  sqcRYGate(q, 3.129398888692931, 5);
  sqcRZGate(q, -2.725065760501819, 5);
  sqcRYGate(q, 3.116978528082345, 6);
  sqcRZGate(q, 2.068659866298423, 6);
  sqcRYGate(q, -3.067704369161631, 7);
  sqcRZGate(q, -0.6323094699669971, 7);
  sqcRYGate(q, 1.4708823056910199, 8);
  sqcRZGate(q, 2.514309941716757, 8);
  sqcRYGate(q, 1.5707963143173804, 9);
  sqcRZGate(q, -3.141592571207484, 9);
  sqcRYGate(q, 1.7586112414430615, 10);
  sqcRZGate(q, -1.4636354428598182, 10);
  sqcRYGate(q, -1.7528972258888098, 11);
  sqcRZGate(q, -1.4592313527750136, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 0, 4);
  sqcCZGate(q, 0, 5);
  sqcCZGate(q, 0, 6);
  sqcCZGate(q, 0, 7);
  sqcCZGate(q, 0, 8);
  sqcCZGate(q, 0, 9);
  sqcCZGate(q, 0, 10);
  sqcCZGate(q, 0, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 1, 4);
  sqcCZGate(q, 1, 5);
  sqcCZGate(q, 1, 6);
  sqcCZGate(q, 1, 7);
  sqcCZGate(q, 1, 8);
  sqcCZGate(q, 1, 9);
  sqcCZGate(q, 1, 10);
  sqcCZGate(q, 1, 11);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 2, 6);
  sqcCZGate(q, 2, 7);
  sqcCZGate(q, 2, 8);
  sqcCZGate(q, 2, 9);
  sqcCZGate(q, 2, 10);
  sqcCZGate(q, 2, 11);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 3, 6);
  sqcCZGate(q, 3, 7);
  sqcCZGate(q, 3, 8);
  sqcCZGate(q, 3, 9);
  sqcCZGate(q, 3, 10);
  sqcCZGate(q, 3, 11);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 4, 8);
  sqcCZGate(q, 4, 9);
  sqcCZGate(q, 4, 10);
  sqcCZGate(q, 4, 11);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 5, 8);
  sqcCZGate(q, 5, 9);
  sqcCZGate(q, 5, 10);
  sqcCZGate(q, 5, 11);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 6, 9);
  sqcCZGate(q, 6, 10);
  sqcCZGate(q, 6, 11);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 7, 10);
  sqcCZGate(q, 7, 11);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 8, 11);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 10, 11);
  sqcRYGate(q, 4.961883970366898e-08, 0);
  sqcRZGate(q, 2.5330551356797235, 0);
  sqcRYGate(q, 1.2790503767234895e-07, 1);
  sqcRZGate(q, -3.0220839149814767, 1);
  sqcRYGate(q, -2.588194539674423e-08, 2);
  sqcRZGate(q, -1.3440864185854982, 2);
  sqcRYGate(q, 2.2085026252227635e-08, 3);
  sqcRZGate(q, 2.72992793525059, 3);
  sqcRYGate(q, -6.407063262159339e-07, 4);
  sqcRZGate(q, 2.577671005853701, 4);
  sqcRYGate(q, -3.1415920232217553, 5);
  sqcRZGate(q, -0.5991740861674373, 5);
  sqcRYGate(q, 3.1415926332423356, 6);
  sqcRZGate(q, -2.764125832748492, 6);
  sqcRYGate(q, 2.1660534699208256e-08, 7);
  sqcRZGate(q, 2.0810202812413223, 7);
  sqcRYGate(q, 3.141592543996962, 8);
  sqcRZGate(q, 0.8214335826658488, 8);
  sqcRYGate(q, 1.5707964272881436, 9);
  sqcRZGate(q, -1.6928766232914385, 9);
  sqcRYGate(q, -6.395003524062304e-06, 10);
  sqcRZGate(q, -0.22918945567810312, 10);
  sqcRYGate(q, 6.385000826725218e-06, 11);
  sqcRZGate(q, 2.9079989865171587, 11);

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
