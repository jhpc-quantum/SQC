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
  q = sqcQuantumCircuit(4);

  sqcRYGate(q, 1.9930089270522, 0);
  sqcRYGate(q, 0.43260097453232826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2736561870586902, 0);
  sqcRYGate(q, 1.1884246701460406, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.1455025025000349, 2);
  sqcRYGate(q, 2.610589752852976, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.089378948935804, 2);
  sqcRYGate(q, 1.3084567391197597, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7710824809559655, 1);
  sqcRYGate(q, -3.087979962923135, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.856485472977511, 1);
  sqcRYGate(q, -2.033051941076633, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.0340447891251876, 0);
  sqcRYGate(q, 0.37005175138415014, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8332410927420995, 0);
  sqcRYGate(q, 1.4214161595574786, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.688931515852368, 2);
  sqcRYGate(q, 1.3541079732990244, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2947414017480185, 2);
  sqcRYGate(q, 1.6073785481733802, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.7559172424917013, 1);
  sqcRYGate(q, 0.15314759202153905, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.449755108783092, 1);
  sqcRYGate(q, 0.4537257320593078, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6405183142064814, 0);
  sqcRYGate(q, 2.117292269948285, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.077623953147935, 0);
  sqcRYGate(q, -1.703797487211757, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1093492111145142, 2);
  sqcRYGate(q, -0.06140847636572392, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5907061519726695, 2);
  sqcRYGate(q, 2.2044276525999345, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.108445097350667, 1);
  sqcRYGate(q, -2.428999277919711, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.04468991338479622, 1);
  sqcRYGate(q, 2.6478375730534958, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8698078423536147, 0);
  sqcRYGate(q, -1.4583964828163536, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.1566863092759667, 0);
  sqcRYGate(q, -3.0976582346697654, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8441083001115759, 2);
  sqcRYGate(q, -0.9071202238486681, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8900394491678734, 2);
  sqcRYGate(q, 2.388200036036249, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6823593250341373, 1);
  sqcRYGate(q, -0.9478865174164302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.66652475462206, 1);
  sqcRYGate(q, -2.233781520380776, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8005543354267095, 0);
  sqcRYGate(q, 1.4420214282799462, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7216240579082354, 0);
  sqcRYGate(q, 1.7572230062971625, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9488962087291068, 2);
  sqcRYGate(q, -1.1493799613854447, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.823247276682646, 2);
  sqcRYGate(q, 1.83900934776303, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8669962114804313, 1);
  sqcRYGate(q, -0.9161619032263637, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.16144047473878864, 1);
  sqcRYGate(q, 0.15853356833251997, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.913251741060964, 0);
  sqcRYGate(q, -2.2225691252820337, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.7276682531653833, 0);
  sqcRYGate(q, -0.6305388169236545, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.526255566695812, 2);
  sqcRYGate(q, -0.7633690998010195, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.4745943225051507, 2);
  sqcRYGate(q, 2.920955045502185, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2220708300991515, 1);
  sqcRYGate(q, 1.6147995952370824, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.2505686782821597, 1);
  sqcRYGate(q, 0.40519872228843107, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.475808913737484, 0);
  sqcRYGate(q, -2.884675977653287, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2800920133010332, 0);
  sqcRYGate(q, 1.1794306672851542, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.3865760914955545, 2);
  sqcRYGate(q, -1.1113678056063312, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.789290609334572, 2);
  sqcRYGate(q, 2.188654865103549, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.694991682064878, 1);
  sqcRYGate(q, -2.4007510569611283, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9456531092378215, 1);
  sqcRYGate(q, 2.628216191615835, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.9263298092162833, 0);
  sqcRYGate(q, 0.7757945880258802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7472781992570123, 0);
  sqcRYGate(q, 3.134635660739103, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2871490577567815, 2);
  sqcRYGate(q, 1.2944935006620342, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5028797767304451, 2);
  sqcRYGate(q, -1.6338221249107, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.016840811826541, 1);
  sqcRYGate(q, 1.7039254877387269, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.8239259223259037, 1);
  sqcRYGate(q, 3.1328662732444026, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.8612643369312867, 0);
  sqcRYGate(q, 0.5107479614122092, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.278027898895175, 0);
  sqcRYGate(q, -3.039484221459563, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.146463567148823, 2);
  sqcRYGate(q, -2.656669672039208, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.2422991967421186, 2);
  sqcRYGate(q, -0.12023710488123876, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.7537528600019434, 1);
  sqcRYGate(q, 0.898628711563588, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.8056958908471687, 1);
  sqcRYGate(q, -1.688573389943639, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4426070921694074, 0);
  sqcRYGate(q, 0.4080219755891721, 1);
  sqcRYGate(q, -2.7452701247308564, 2);
  sqcRYGate(q, 0.6443511390325849, 3);

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
