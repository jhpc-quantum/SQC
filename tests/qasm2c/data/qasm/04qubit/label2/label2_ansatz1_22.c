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

  sqcRYGate(q, -3.062418508210366, 0);
  sqcRZGate(q, 2.7513313934317107, 0);
  sqcRYGate(q, 1.3449196029895096, 1);
  sqcRZGate(q, 0.0021431683860989263, 1);
  sqcRYGate(q, -0.891448251453235, 2);
  sqcRZGate(q, -0.24376075017195387, 2);
  sqcRYGate(q, -1.5646641908818668, 3);
  sqcRZGate(q, 0.7654377378601867, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5262775443445831, 0);
  sqcRZGate(q, -1.2387300907465033, 0);
  sqcRYGate(q, 2.5434714426667706, 1);
  sqcRZGate(q, -1.4518133376697577, 1);
  sqcRYGate(q, -1.1458893376103794, 2);
  sqcRZGate(q, -2.440137566826264, 2);
  sqcRYGate(q, -3.077207373109591, 3);
  sqcRZGate(q, 1.9422161455963414, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0412864601160026, 0);
  sqcRZGate(q, 0.5832884876731513, 0);
  sqcRYGate(q, 0.8849501804535862, 1);
  sqcRZGate(q, 0.21756015320622077, 1);
  sqcRYGate(q, -0.5008030609170615, 2);
  sqcRZGate(q, 1.307410442612102, 2);
  sqcRYGate(q, 0.5423385495520796, 3);
  sqcRZGate(q, -2.587110168917819, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.734331921666212, 0);
  sqcRZGate(q, 0.7866857630386759, 0);
  sqcRYGate(q, -1.7002032174990696, 1);
  sqcRZGate(q, 1.8936947308042982, 1);
  sqcRYGate(q, -0.1905781745927371, 2);
  sqcRZGate(q, 2.4234237191719674, 2);
  sqcRYGate(q, 2.8163725232359633, 3);
  sqcRZGate(q, -2.4633663702091213, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.5533942840289994, 0);
  sqcRZGate(q, -2.73871431962195, 0);
  sqcRYGate(q, 1.9860381682035095, 1);
  sqcRZGate(q, -1.1607874159803364, 1);
  sqcRYGate(q, -1.5415082377943787, 2);
  sqcRZGate(q, 2.522514690456328, 2);
  sqcRYGate(q, -2.535010331115527, 3);
  sqcRZGate(q, 1.9047260685302243, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1161034454749332, 0);
  sqcRZGate(q, 1.1181545328033267, 0);
  sqcRYGate(q, 0.3469685060140222, 1);
  sqcRZGate(q, 0.19026640303499942, 1);
  sqcRYGate(q, -0.7334459340562697, 2);
  sqcRZGate(q, 0.7361222421705779, 2);
  sqcRYGate(q, -0.944341412878007, 3);
  sqcRZGate(q, -0.7661399890351046, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.808156805458578, 0);
  sqcRZGate(q, 2.6770568567208777, 0);
  sqcRYGate(q, 1.0946524027960889, 1);
  sqcRZGate(q, 1.5633935168661721, 1);
  sqcRYGate(q, -2.0195197363821733, 2);
  sqcRZGate(q, 1.9327282432784614, 2);
  sqcRYGate(q, -0.3820853794312621, 3);
  sqcRZGate(q, 0.7058580956745094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4117507751035214, 0);
  sqcRZGate(q, -2.8867694899693546, 0);
  sqcRYGate(q, -2.870109488509004, 1);
  sqcRZGate(q, 0.9141513046958237, 1);
  sqcRYGate(q, -0.808528145451061, 2);
  sqcRZGate(q, -3.0674428601035424, 2);
  sqcRYGate(q, -0.9061135304769152, 3);
  sqcRZGate(q, 2.2223685127218094, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.4225428944402436, 0);
  sqcRZGate(q, -2.489432245608474, 0);
  sqcRYGate(q, -2.7282496585201566, 1);
  sqcRZGate(q, 2.8790464198975667, 1);
  sqcRYGate(q, 0.6800167424975845, 2);
  sqcRZGate(q, -2.062345881122984, 2);
  sqcRYGate(q, -2.747100830457796, 3);
  sqcRZGate(q, -1.368190924037287, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5710217763956118, 0);
  sqcRZGate(q, -0.4555760800347757, 0);
  sqcRYGate(q, 1.339680357191934, 1);
  sqcRZGate(q, 0.8931709405710109, 1);
  sqcRYGate(q, -2.9026259539663806, 2);
  sqcRZGate(q, -0.09319178635836678, 2);
  sqcRYGate(q, 0.2164695112927299, 3);
  sqcRZGate(q, -3.0940525633867284, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7224329531058222, 0);
  sqcRZGate(q, 2.5482370687946396, 0);
  sqcRYGate(q, -0.663336416137844, 1);
  sqcRZGate(q, 2.3384016665055576, 1);
  sqcRYGate(q, 0.6386000870099107, 2);
  sqcRZGate(q, -0.5198045392635328, 2);
  sqcRYGate(q, -1.5103118372032567, 3);
  sqcRZGate(q, 2.984277082698437, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3262532077649527, 0);
  sqcRZGate(q, -1.1722351918311746, 0);
  sqcRYGate(q, 1.731564871234867, 1);
  sqcRZGate(q, 2.119284354879524, 1);
  sqcRYGate(q, 1.613465083654102, 2);
  sqcRZGate(q, 1.6257984204535758, 2);
  sqcRYGate(q, 1.3527334304980145, 3);
  sqcRZGate(q, 0.556126498684257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.27408266944914106, 0);
  sqcRZGate(q, -1.0163416223171033, 0);
  sqcRYGate(q, 2.3698647383146896, 1);
  sqcRZGate(q, 2.7374896286249752, 1);
  sqcRYGate(q, -2.4584953187625445, 2);
  sqcRZGate(q, 0.3700766311066905, 2);
  sqcRYGate(q, 1.3618100448066714, 3);
  sqcRZGate(q, -1.1888055728915374, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.3128273697983, 0);
  sqcRZGate(q, -0.8916059426529949, 0);
  sqcRYGate(q, 1.1768397562579918, 1);
  sqcRZGate(q, 2.6214795592551146, 1);
  sqcRYGate(q, -0.20668070787779624, 2);
  sqcRZGate(q, -1.5893576885386764, 2);
  sqcRYGate(q, 0.18155679036016903, 3);
  sqcRZGate(q, -2.3816774645836283, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.3277744903976192, 0);
  sqcRZGate(q, -1.1748888137417897, 0);
  sqcRYGate(q, 2.68200821205628, 1);
  sqcRZGate(q, 2.324407273069733, 1);
  sqcRYGate(q, -2.8259894894874575, 2);
  sqcRZGate(q, -1.655446524395423, 2);
  sqcRYGate(q, 3.113927310983684, 3);
  sqcRZGate(q, -1.7046167481949093, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.0652318017826445, 0);
  sqcRZGate(q, -3.0497594856596737, 0);
  sqcRYGate(q, 1.0669639679099177, 1);
  sqcRZGate(q, 0.13053051188488762, 1);
  sqcRYGate(q, -1.7017802754458722, 2);
  sqcRZGate(q, -0.8713957908637316, 2);
  sqcRYGate(q, -1.7077096223464907, 3);
  sqcRZGate(q, -0.3612783522679077, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.4005786303048349, 0);
  sqcRZGate(q, -0.1380114886229169, 0);
  sqcRYGate(q, 0.9564582653945655, 1);
  sqcRZGate(q, 0.9176029173594048, 1);
  sqcRYGate(q, -2.6655855052123067, 2);
  sqcRZGate(q, -3.0282468059007006, 2);
  sqcRYGate(q, 1.6477476830119455, 3);
  sqcRZGate(q, -2.3297507949291805, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2813772160350108, 0);
  sqcRZGate(q, -2.9045066475401264, 0);
  sqcRYGate(q, -3.0032871736694076, 1);
  sqcRZGate(q, 1.7143271428776365, 1);
  sqcRYGate(q, 0.40009803335753574, 2);
  sqcRZGate(q, -2.47558959712148, 2);
  sqcRYGate(q, 2.169736392370218, 3);
  sqcRZGate(q, 1.2530325228267942, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.7429736309914294, 0);
  sqcRZGate(q, 0.7818780469011585, 0);
  sqcRYGate(q, 0.5028445476161894, 1);
  sqcRZGate(q, 2.031792840759987, 1);
  sqcRYGate(q, 1.5235472750002548, 2);
  sqcRZGate(q, 1.3808107556464835, 2);
  sqcRYGate(q, -2.9627497023835696, 3);
  sqcRZGate(q, 1.6104648963473611, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.849272438819006, 0);
  sqcRZGate(q, 0.034143269375100996, 0);
  sqcRYGate(q, -1.43769531347209, 1);
  sqcRZGate(q, -1.5980835346659272, 1);
  sqcRYGate(q, -1.0586296666228614, 2);
  sqcRZGate(q, 0.132820214304882, 2);
  sqcRYGate(q, 0.38639817315555364, 3);
  sqcRZGate(q, 1.9616749757266652, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.5333797764670871, 0);
  sqcRZGate(q, 0.5745671845468898, 0);
  sqcRYGate(q, -1.5001082726469288, 1);
  sqcRZGate(q, -2.7007727997865305, 1);
  sqcRYGate(q, -1.3628163597921175, 2);
  sqcRZGate(q, -0.6171660116558648, 2);
  sqcRYGate(q, 0.7602699257381333, 3);
  sqcRZGate(q, 1.41874243898876, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.1776344970533192, 0);
  sqcRZGate(q, -1.888825154763435, 0);
  sqcRYGate(q, -2.8942811429783712, 1);
  sqcRZGate(q, -2.245994096029062, 1);
  sqcRYGate(q, -2.9831324290407837, 2);
  sqcRZGate(q, 1.8424082458061397, 2);
  sqcRYGate(q, 1.1761431065153118, 3);
  sqcRZGate(q, -2.957821497027882, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.31779786499093, 0);
  sqcRZGate(q, 1.1192632613423605, 0);
  sqcRYGate(q, -1.8743822252991533, 1);
  sqcRZGate(q, 1.5434485678670422, 1);
  sqcRYGate(q, -1.994982900262411, 2);
  sqcRZGate(q, 1.9863167864261415, 2);
  sqcRYGate(q, 1.2931541915608973, 3);
  sqcRZGate(q, 2.1739375024596135, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.6019819403329931, 0);
  sqcRZGate(q, -1.0912317343943805, 0);
  sqcRYGate(q, 2.0540425491557626, 1);
  sqcRZGate(q, -0.5891892848264219, 1);
  sqcRYGate(q, -0.46133358314816575, 2);
  sqcRZGate(q, 1.154275110346438, 2);
  sqcRYGate(q, -0.49084321630804867, 3);
  sqcRZGate(q, 0.9017756073182257, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.3616148773453585, 0);
  sqcRZGate(q, -0.3838902832206428, 0);
  sqcRYGate(q, -1.5948847381872184, 1);
  sqcRZGate(q, 1.9231042827747844, 1);
  sqcRYGate(q, -2.270527108371748, 2);
  sqcRZGate(q, -2.3473091079135924, 2);
  sqcRYGate(q, 1.7977658502000402, 3);
  sqcRZGate(q, 2.6918579080124907, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.2394063245337972, 0);
  sqcRZGate(q, -0.16529657773894257, 0);
  sqcRYGate(q, 1.8325446148963795, 1);
  sqcRZGate(q, -1.4731261912003621, 1);
  sqcRYGate(q, 2.2589126257270635, 2);
  sqcRZGate(q, 1.723734776372952, 2);
  sqcRYGate(q, -2.7807410935121433, 3);
  sqcRZGate(q, -0.2005397813364311, 3);

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
