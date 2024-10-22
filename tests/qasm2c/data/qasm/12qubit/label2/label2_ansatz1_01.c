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
  q = sqcQuantumCircuit(12);

  sqcRYGate(q, -1.769030528577061, 0);
  sqcRZGate(q, 2.217304717721432, 0);
  sqcRYGate(q, -0.011169899186539213, 1);
  sqcRZGate(q, -2.859095824948076, 1);
  sqcRYGate(q, 0.006386605032671759, 2);
  sqcRZGate(q, -1.1293525761496666, 2);
  sqcRYGate(q, -1.5979935897437108, 3);
  sqcRZGate(q, 1.309819107618014, 3);
  sqcRYGate(q, 1.5263272562123458, 4);
  sqcRZGate(q, 0.07877656860963711, 4);
  sqcRYGate(q, -1.1379614482845666, 5);
  sqcRZGate(q, 3.1414180812598262, 5);
  sqcRYGate(q, -2.8581262608337883, 6);
  sqcRZGate(q, 0.21991709379854107, 6);
  sqcRYGate(q, 1.5401960428027301, 7);
  sqcRZGate(q, -2.104613731599689, 7);
  sqcRYGate(q, -3.0961252236304078, 8);
  sqcRZGate(q, 2.3425876188297563, 8);
  sqcRYGate(q, -1.5623460551596657, 9);
  sqcRZGate(q, 0.4054097887380701, 9);
  sqcRYGate(q, 0.7445499656478393, 10);
  sqcRZGate(q, 0.7015088174888922, 10);
  sqcRYGate(q, 1.75461383687953, 11);
  sqcRZGate(q, 0.6725853669547925, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -0.7605720735461973, 0);
  sqcRZGate(q, 3.1279457019335695, 0);
  sqcRYGate(q, -0.04865664667293679, 1);
  sqcRZGate(q, 0.8990609443942922, 1);
  sqcRYGate(q, 1.5836754789588552, 2);
  sqcRZGate(q, 1.139020968939354, 2);
  sqcRYGate(q, 0.062025531563281604, 3);
  sqcRZGate(q, 0.11529105153188852, 3);
  sqcRYGate(q, 0.07575995407984734, 4);
  sqcRZGate(q, -3.1186931317965687, 4);
  sqcRYGate(q, -2.0453228343585934, 5);
  sqcRZGate(q, 1.093449890035834, 5);
  sqcRYGate(q, -0.8338304660047432, 6);
  sqcRZGate(q, 0.006544897239443254, 6);
  sqcRYGate(q, -0.26325573475817393, 7);
  sqcRZGate(q, -1.0463188160916213, 7);
  sqcRYGate(q, -2.1272241096875972, 8);
  sqcRZGate(q, 1.9480598758540442, 8);
  sqcRYGate(q, -3.129339142204166, 9);
  sqcRZGate(q, -2.72035021086691, 9);
  sqcRYGate(q, -3.085673729701148, 10);
  sqcRZGate(q, 2.940258239984495, 10);
  sqcRYGate(q, -0.6112937885162459, 11);
  sqcRZGate(q, 1.6824925497943664, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -1.1482324048049797, 0);
  sqcRZGate(q, 1.0367883487148093, 0);
  sqcRYGate(q, -1.5746874384529281, 1);
  sqcRZGate(q, 1.2440779733258012, 1);
  sqcRYGate(q, 1.8877508155261662, 2);
  sqcRZGate(q, -1.3375740584227946, 2);
  sqcRYGate(q, 1.2878819491419453, 3);
  sqcRZGate(q, 0.8558064668030054, 3);
  sqcRYGate(q, 0.7633024170974052, 4);
  sqcRZGate(q, -1.9812532222938284, 4);
  sqcRYGate(q, 0.09817423316448437, 5);
  sqcRZGate(q, -1.06018410965648, 5);
  sqcRYGate(q, -2.5513961625671007, 6);
  sqcRZGate(q, 0.04363341498903215, 6);
  sqcRYGate(q, -0.7563618216014314, 7);
  sqcRZGate(q, 0.0016004764923389211, 7);
  sqcRYGate(q, 0.059075577722568995, 8);
  sqcRZGate(q, -2.6561284738905346, 8);
  sqcRYGate(q, -1.5226602554789919, 9);
  sqcRZGate(q, 1.9300051779694565, 9);
  sqcRYGate(q, 0.9481545478237645, 10);
  sqcRZGate(q, 1.7461320051345295, 10);
  sqcRYGate(q, -2.9228839150486987, 11);
  sqcRZGate(q, -0.7039651321116586, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, 1.5725828702944549, 0);
  sqcRZGate(q, -2.789122818844331, 0);
  sqcRYGate(q, 3.0880399051477543, 1);
  sqcRZGate(q, -1.3925864267361119, 1);
  sqcRYGate(q, -0.04847455166163517, 2);
  sqcRZGate(q, 0.3506233941742082, 2);
  sqcRYGate(q, -0.06432735861504746, 3);
  sqcRZGate(q, -0.129801001212978, 3);
  sqcRYGate(q, 3.0488276325449126, 4);
  sqcRZGate(q, 1.3208427578035877, 4);
  sqcRYGate(q, 2.150910112629614, 5);
  sqcRZGate(q, -1.1294230409534949, 5);
  sqcRYGate(q, 0.9360511014194699, 6);
  sqcRZGate(q, -1.577189029632649, 6);
  sqcRYGate(q, 1.4855019290400415, 7);
  sqcRZGate(q, 0.06581925406198419, 7);
  sqcRYGate(q, -3.1389045341808313, 8);
  sqcRZGate(q, -2.7609860714887833, 8);
  sqcRYGate(q, 3.0914648919470866, 9);
  sqcRZGate(q, -2.288576044721195, 9);
  sqcRYGate(q, 0.045724430434174394, 10);
  sqcRZGate(q, 3.115802337127455, 10);
  sqcRYGate(q, 1.2802436736776102, 11);
  sqcRZGate(q, 1.7224483974556684, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcRYGate(q, -2.1310145344177345, 0);
  sqcRZGate(q, 1.1584288362629411, 0);
  sqcRYGate(q, 2.50281490759828, 1);
  sqcRZGate(q, -1.752750688111437, 1);
  sqcRYGate(q, 1.8428645940647526, 2);
  sqcRZGate(q, 2.5286040043936446, 2);
  sqcRYGate(q, -1.625596233509511, 3);
  sqcRZGate(q, -0.5415064977426917, 3);
  sqcRYGate(q, -0.9558563826815405, 4);
  sqcRZGate(q, 0.9652416956179848, 4);
  sqcRYGate(q, -0.07415322648904789, 5);
  sqcRZGate(q, -0.9693427007473848, 5);
  sqcRYGate(q, 3.1127955021972964, 6);
  sqcRZGate(q, -2.1178848773957615, 6);
  sqcRYGate(q, 2.6905876382183185, 7);
  sqcRZGate(q, 2.6578827460899506, 7);
  sqcRYGate(q, 3.0846079992953146, 8);
  sqcRZGate(q, -1.0518972138505494, 8);
  sqcRYGate(q, 3.101589412536486, 9);
  sqcRZGate(q, -0.07615858129630748, 9);
  sqcRYGate(q, -1.4788985710546294, 10);
  sqcRZGate(q, 2.5787980862670428, 10);
  sqcRYGate(q, -1.5428288522173201, 11);
  sqcRZGate(q, -0.6056520370934921, 11);

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
