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
  q = sqcQuantumCircuit(16);

  sqcRYGate(q, -0.13481430969773012, 0);
  sqcRZGate(q, -1.6568895172447275, 0);
  sqcRYGate(q, -3.088104165439452, 1);
  sqcRZGate(q, -1.8130538618691696, 1);
  sqcRYGate(q, 2.454821669535854, 2);
  sqcRZGate(q, -1.3284303175607395, 2);
  sqcRYGate(q, -2.912574451270414, 3);
  sqcRZGate(q, -2.9135765243059946, 3);
  sqcRYGate(q, -0.6971315669379696, 4);
  sqcRZGate(q, -3.0875753681651, 4);
  sqcRYGate(q, 0.40990557822885126, 5);
  sqcRZGate(q, -1.4980842107638404, 5);
  sqcRYGate(q, 1.636658599715222, 6);
  sqcRZGate(q, -0.13985332359989047, 6);
  sqcRYGate(q, -1.5232520885755783, 7);
  sqcRZGate(q, -0.15083454945668517, 7);
  sqcRYGate(q, -0.07681153554249799, 8);
  sqcRZGate(q, 1.4679825274871492, 8);
  sqcRYGate(q, -1.56925122478088, 9);
  sqcRZGate(q, -0.8486042760748909, 9);
  sqcRYGate(q, 1.720522727403326, 10);
  sqcRZGate(q, 0.09455495654233255, 10);
  sqcRYGate(q, -0.8594824608914919, 11);
  sqcRZGate(q, -1.3351240145107495, 11);
  sqcRYGate(q, -2.532920286672294, 12);
  sqcRZGate(q, 0.27698443200910516, 12);
  sqcRYGate(q, -0.27138846223878893, 13);
  sqcRZGate(q, 0.21085170365709868, 13);
  sqcRYGate(q, 1.6279443313136555, 14);
  sqcRZGate(q, 1.9070230998522615, 14);
  sqcRYGate(q, -2.4929440578368416, 15);
  sqcRZGate(q, 3.0870211429938217, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.061818998896293, 0);
  sqcRZGate(q, -2.9340307855686967, 0);
  sqcRYGate(q, 2.770688413732051, 1);
  sqcRZGate(q, 0.01017885291312106, 1);
  sqcRYGate(q, -0.2072351556428081, 2);
  sqcRZGate(q, 1.0639330068841393, 2);
  sqcRYGate(q, 2.495956233553669, 3);
  sqcRZGate(q, 1.4752041739770085, 3);
  sqcRYGate(q, 0.8992263744093353, 4);
  sqcRZGate(q, 1.578070039537974, 4);
  sqcRYGate(q, -2.5658964325694944, 5);
  sqcRZGate(q, -1.5969454006806318, 5);
  sqcRYGate(q, 0.3932522025440251, 6);
  sqcRZGate(q, -2.676684978349342, 6);
  sqcRYGate(q, -2.735864538255147, 7);
  sqcRZGate(q, -0.07227657273728164, 7);
  sqcRYGate(q, -1.5490560078427495, 8);
  sqcRZGate(q, 0.5326697910107224, 8);
  sqcRYGate(q, 2.51355684147437, 9);
  sqcRZGate(q, -0.6910024360118309, 9);
  sqcRYGate(q, -0.25747487687789483, 10);
  sqcRZGate(q, -2.989041786464143, 10);
  sqcRYGate(q, -2.171199231875038, 11);
  sqcRZGate(q, -1.5911183648699758, 11);
  sqcRYGate(q, 1.5082379362733302, 12);
  sqcRZGate(q, -1.7150835416132648, 12);
  sqcRYGate(q, 1.589117322255138, 13);
  sqcRZGate(q, -0.10444418407439125, 13);
  sqcRYGate(q, 0.2906058079989245, 14);
  sqcRZGate(q, -0.5579697402830464, 14);
  sqcRYGate(q, 1.5314940814668967, 15);
  sqcRZGate(q, 1.4296858935014423, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -2.670427994559136, 0);
  sqcRZGate(q, -0.16395494480380296, 0);
  sqcRYGate(q, 0.27795307335563924, 1);
  sqcRZGate(q, 2.8272472221530243, 1);
  sqcRYGate(q, 0.713881119150457, 2);
  sqcRZGate(q, -1.7179419009338326, 2);
  sqcRYGate(q, 1.4633207596152404, 3);
  sqcRZGate(q, 2.6962607326984958, 3);
  sqcRYGate(q, 1.662270180768724, 4);
  sqcRZGate(q, -0.9984225489404971, 4);
  sqcRYGate(q, -2.896814942728035, 5);
  sqcRZGate(q, -1.3028744656278164, 5);
  sqcRYGate(q, -3.0847419608513498, 6);
  sqcRZGate(q, 0.20760816591572073, 6);
  sqcRYGate(q, -0.8424394243925093, 7);
  sqcRZGate(q, -1.4585578857962842, 7);
  sqcRYGate(q, 1.2742080455682099, 8);
  sqcRZGate(q, -0.0009332710692913081, 8);
  sqcRYGate(q, -2.627025274460585, 9);
  sqcRZGate(q, -0.008577923019163157, 9);
  sqcRYGate(q, 1.771831973977302, 10);
  sqcRZGate(q, 1.529831752717847, 10);
  sqcRYGate(q, 0.06795835868459932, 11);
  sqcRZGate(q, -3.096808303177854, 11);
  sqcRYGate(q, -2.7530633443717516, 12);
  sqcRZGate(q, -1.7240339866588152, 12);
  sqcRYGate(q, -2.165540390239736, 13);
  sqcRZGate(q, 0.0065885465139758235, 13);
  sqcRYGate(q, -0.36030327095078185, 14);
  sqcRZGate(q, -0.058014313917623246, 14);
  sqcRYGate(q, 1.3758598873318215, 15);
  sqcRZGate(q, 2.216456017970465, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -0.7919761846495169, 0);
  sqcRZGate(q, 0.4574179267064065, 0);
  sqcRYGate(q, -0.5664788206785275, 1);
  sqcRZGate(q, -1.5461405364958747, 1);
  sqcRYGate(q, -0.7290935030177517, 2);
  sqcRZGate(q, 0.0026208731892328925, 2);
  sqcRYGate(q, 0.8589700179514406, 3);
  sqcRZGate(q, 1.1296052347997847, 3);
  sqcRYGate(q, -2.9589045801163008, 4);
  sqcRZGate(q, 1.9703472780584255, 4);
  sqcRYGate(q, -0.3239178600366941, 5);
  sqcRZGate(q, -0.25701919393142875, 5);
  sqcRYGate(q, 2.548169632335531, 6);
  sqcRZGate(q, -1.7697623742040554, 6);
  sqcRYGate(q, 2.7370744938147853, 7);
  sqcRZGate(q, -0.0267257900542961, 7);
  sqcRYGate(q, 1.596399619101562, 8);
  sqcRZGate(q, -2.904750863157316, 8);
  sqcRYGate(q, 2.7757407270883436, 9);
  sqcRZGate(q, 2.265718508017806, 9);
  sqcRYGate(q, -1.624104905057285, 10);
  sqcRZGate(q, -0.18220236472406445, 10);
  sqcRYGate(q, 3.0077025123557966, 11);
  sqcRZGate(q, -1.5309832425134826, 11);
  sqcRYGate(q, -0.3425876340884937, 12);
  sqcRZGate(q, -2.96536056668153, 12);
  sqcRYGate(q, -1.550834900093318, 13);
  sqcRZGate(q, 3.1274072793377092, 13);
  sqcRYGate(q, 1.4944662945558522, 14);
  sqcRZGate(q, -0.015210838031955554, 14);
  sqcRYGate(q, 0.3814829522528618, 15);
  sqcRZGate(q, 0.0016901582557062866, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 3.0126727944877683, 0);
  sqcRZGate(q, 1.9733802254235433, 0);
  sqcRYGate(q, -1.3942388215775283, 1);
  sqcRZGate(q, 3.0753204570427384, 1);
  sqcRYGate(q, -1.4751967234016172, 2);
  sqcRZGate(q, -1.822760652065866, 2);
  sqcRYGate(q, -1.3811074484365466, 3);
  sqcRZGate(q, 2.1125081503439085, 3);
  sqcRYGate(q, -0.35754454872427643, 4);
  sqcRZGate(q, 2.768143195866066, 4);
  sqcRYGate(q, 1.5119650860063285, 5);
  sqcRZGate(q, -0.1664774860728746, 5);
  sqcRYGate(q, -3.0028291560293767, 6);
  sqcRZGate(q, -2.6075806701457647, 6);
  sqcRYGate(q, -1.527415309743117, 7);
  sqcRZGate(q, -2.772800890838498, 7);
  sqcRYGate(q, 2.79794931350031, 8);
  sqcRZGate(q, 1.8575522764321633, 8);
  sqcRYGate(q, 0.13025459078400145, 9);
  sqcRZGate(q, -1.9997237026613064, 9);
  sqcRYGate(q, 0.8683740481223224, 10);
  sqcRZGate(q, 3.093909095142186, 10);
  sqcRYGate(q, 3.035672271510057, 11);
  sqcRZGate(q, -1.5511154542006969, 11);
  sqcRYGate(q, 0.7402570755970448, 12);
  sqcRZGate(q, -1.3710920480808937, 12);
  sqcRYGate(q, 1.6765950781374226, 13);
  sqcRZGate(q, 0.5241849473812872, 13);
  sqcRYGate(q, 1.5816839971762289, 14);
  sqcRZGate(q, 0.36533228746993185, 14);
  sqcRYGate(q, 2.0199993090200596, 15);
  sqcRZGate(q, 1.5728526451551077, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, 2.6810160415121436, 0);
  sqcRZGate(q, 1.6100974829504455, 0);
  sqcRYGate(q, -1.9737446339557116, 1);
  sqcRZGate(q, -1.4990343519549478, 1);
  sqcRYGate(q, 0.11820313869022936, 2);
  sqcRZGate(q, 0.0708699979272984, 2);
  sqcRYGate(q, 0.11233151703742998, 3);
  sqcRZGate(q, 2.5281489522774345, 3);
  sqcRYGate(q, -0.3301999704285947, 4);
  sqcRZGate(q, -1.6062876282963745, 4);
  sqcRYGate(q, -0.2808091490980321, 5);
  sqcRZGate(q, -0.5076502157762545, 5);
  sqcRYGate(q, -0.13663529399172347, 6);
  sqcRZGate(q, -0.6979503870101819, 6);
  sqcRYGate(q, -0.4226855153919216, 7);
  sqcRZGate(q, 0.8090433281443983, 7);
  sqcRYGate(q, -0.1314130176654027, 8);
  sqcRZGate(q, 0.21879628945716564, 8);
  sqcRYGate(q, 2.944904389307467, 9);
  sqcRZGate(q, 2.054326035880364, 9);
  sqcRYGate(q, -1.5030551359213318, 10);
  sqcRZGate(q, -0.004902865495065356, 10);
  sqcRYGate(q, -2.945578885875674, 11);
  sqcRZGate(q, 0.00680403535611613, 11);
  sqcRYGate(q, 3.0605027004841334, 12);
  sqcRZGate(q, 1.7805744813777924, 12);
  sqcRYGate(q, 0.3848507368165938, 13);
  sqcRZGate(q, 1.8118865483594693, 13);
  sqcRYGate(q, -1.3787837786365094, 14);
  sqcRZGate(q, -2.7224447352891588, 14);
  sqcRYGate(q, -1.4948109052403906, 15);
  sqcRZGate(q, 1.5674952028392797, 15);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 5, 6);
  sqcCZGate(q, 7, 8);
  sqcCZGate(q, 9, 10);
  sqcCZGate(q, 11, 12);
  sqcCZGate(q, 13, 14);
  sqcRYGate(q, -3.0634407285477487, 0);
  sqcRZGate(q, -2.6492604565161293, 0);
  sqcRYGate(q, 1.5546441085937475, 1);
  sqcRZGate(q, -0.8950320550914121, 1);
  sqcRYGate(q, 1.5217283891534672, 2);
  sqcRZGate(q, -1.1517818581550365, 2);
  sqcRYGate(q, -2.640143990009698, 3);
  sqcRZGate(q, 0.4163656886438893, 3);
  sqcRYGate(q, 1.6468236811987502, 4);
  sqcRZGate(q, -0.689014977876296, 4);
  sqcRYGate(q, 1.6174362753141924, 5);
  sqcRZGate(q, -1.1511305134184178, 5);
  sqcRYGate(q, -1.5019159454863902, 6);
  sqcRZGate(q, -1.0970025371353287, 6);
  sqcRYGate(q, 0.2150559470802411, 7);
  sqcRZGate(q, 0.8823830882158984, 7);
  sqcRYGate(q, -1.551388164704586, 8);
  sqcRZGate(q, -1.1106477329536497, 8);
  sqcRYGate(q, 1.571503680342058, 9);
  sqcRZGate(q, -1.101351409003711, 9);
  sqcRYGate(q, -0.8889240686999985, 10);
  sqcRZGate(q, 0.45095001346576113, 10);
  sqcRYGate(q, 1.9994105758183953, 11);
  sqcRZGate(q, -2.6631331570772736, 11);
  sqcRYGate(q, 2.009492776363083, 12);
  sqcRZGate(q, 0.45541893093681, 12);
  sqcRYGate(q, 1.5659691072586703, 13);
  sqcRZGate(q, -1.111166757498168, 13);
  sqcRYGate(q, -1.5691990824310347, 14);
  sqcRZGate(q, 2.026148949474658, 14);
  sqcRYGate(q, -1.8587676556247545, 15);
  sqcRZGate(q, -2.6752935048849347, 15);

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
