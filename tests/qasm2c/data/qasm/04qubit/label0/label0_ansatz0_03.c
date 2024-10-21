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
  q = sqcQuantumCircuit(4);

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06890006227636483, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.09316705596105655, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.006129115143272813, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.6757753162738558, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.3273575455340236, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.9679785009337207, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.007600724657873, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.49208624614897667, 0);
  sqcRZGate(q, 1.2312563451744165, 1);
  sqcRZGate(q, -0.610559825519293, 2);
  sqcRZGate(q, -0.8879089197930592, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.8757543744980263, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -1.335709476064137, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.03795810469190543, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.6610068492642898, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.6917118784434888, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.7025968135481176, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.7786569299277714, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.3499651201585514, 0);
  sqcRZGate(q, -0.22181546072152558, 1);
  sqcRZGate(q, -0.5712423358241757, 2);
  sqcRZGate(q, -0.8620163216244322, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 1.4910681300100024, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6371080090577792, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.2134041628973574, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.43370377061794474, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.9520384225495445, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.10836802208372052, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.2148217997992994, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.0072498726991874, 0);
  sqcRZGate(q, 0.10057101749807533, 1);
  sqcRZGate(q, 1.2622571603173873, 2);
  sqcRZGate(q, -0.2801360922663894, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.45755505348343317, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.6576672840208134, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.23906440612474678, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.2659218144173902, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.1474117091458396, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.8626414140324224, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.2808979696297358, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.7481588424988704, 0);
  sqcRZGate(q, 1.0860136102400275, 1);
  sqcRZGate(q, 0.49921838379276573, 2);
  sqcRZGate(q, -0.18451496062483955, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.2085116982914526, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.8368962330346443, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.4282444081574981, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.1972285881996012, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -1.3123100768809, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.8883344736238987, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -1.9873593966455374, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.8067277401073332, 0);
  sqcRZGate(q, -1.2183575222485257, 1);
  sqcRZGate(q, 1.9012492680646569, 2);
  sqcRZGate(q, -0.3014829135057924, 3);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.26290577767975487, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 0, 2); //0
  sqcRZGate(q, 1.1485530848494498, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.16770563349851086, 3);
  sqcCXGate(q, 2, 3);
  sqcHGate(q, 0);
  sqcRZGate(q, -1.6674480202948672, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2959174151428595, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -2.7676393463335214, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 1.0166082911477667, 3);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.4598047518431642, 0);
  sqcRZGate(q, 1.15731129650453, 1);
  sqcRZGate(q, 1.1104176417071216, 2);
  sqcRZGate(q, 0.5594900748332605, 3);

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
