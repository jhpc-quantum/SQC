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

  sqcRYGate(q, 0.8526123332210576, 0);
  sqcRYGate(q, -0.5630202282982192, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.4076971893184353, 0);
  sqcRYGate(q, -1.7999198942034995, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3337328465610172, 2);
  sqcRYGate(q, -0.10205717592089965, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.6775098059438349, 2);
  sqcRYGate(q, -0.07886017848756341, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.402787439137636, 0);
  sqcRYGate(q, -2.1671665082274587, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.5131590565484814, 0);
  sqcRYGate(q, 2.0291196371277946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0915094173284006, 1);
  sqcRYGate(q, 0.15756466902369937, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.017142048950808, 1);
  sqcRYGate(q, 2.8876005024041964, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.1432620251186574, 0);
  sqcRYGate(q, 2.9453157292503147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.599394309579191, 0);
  sqcRYGate(q, 1.8328225624598256, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1188158373761943, 1);
  sqcRYGate(q, -2.5509582187884177, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0815626923934045, 1);
  sqcRYGate(q, -1.4706277359346362, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9532530249215645, 0);
  sqcRYGate(q, 0.5660548408448821, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.954055793682633, 0);
  sqcRYGate(q, -1.395932383865919, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.597391013602555, 2);
  sqcRYGate(q, -1.9722370959854592, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.2865785982189486, 2);
  sqcRYGate(q, -0.29041520085062494, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9348300953048887, 0);
  sqcRYGate(q, 1.0691769702324523, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5540975162179524, 0);
  sqcRYGate(q, 0.956250151648412, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.815330984717616, 1);
  sqcRYGate(q, -0.2584303988736767, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.029609143469937923, 1);
  sqcRYGate(q, -0.8153573860909588, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0528653982825964, 0);
  sqcRYGate(q, 0.3034800921506653, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.3837716016735726, 0);
  sqcRYGate(q, -2.6480341680191524, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.5721766538848634, 1);
  sqcRYGate(q, -1.3482496960130739, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.549790652692333, 1);
  sqcRYGate(q, 3.028316090865887, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6551026622067457, 0);
  sqcRYGate(q, 1.28614915046149, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.246437349708187, 0);
  sqcRYGate(q, 2.8717436352929235, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2559076825677087, 2);
  sqcRYGate(q, -0.9287366963595994, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.658699165058674, 2);
  sqcRYGate(q, 1.0914315095221023, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.3861377505065002, 0);
  sqcRYGate(q, -0.12650968191314682, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.3366885674747353, 0);
  sqcRYGate(q, -1.2625006894947757, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.3766607222895915, 1);
  sqcRYGate(q, 3.1348437298811063, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.1217624822516523, 1);
  sqcRYGate(q, -3.0871388165205493, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.2630111042542826, 0);
  sqcRYGate(q, 2.9648970153782908, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.7916779137930257, 0);
  sqcRYGate(q, -0.5241373192458054, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7686222637393207, 1);
  sqcRYGate(q, -1.9622832516761302, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.3611061041171417, 1);
  sqcRYGate(q, 3.0201815031452406, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.1082399106068008, 0);
  sqcRYGate(q, -1.1668556265554482, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2929646979446643, 0);
  sqcRYGate(q, -2.9767589289765097, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8975809721048659, 2);
  sqcRYGate(q, 2.759795792678238, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.430478817450866, 2);
  sqcRYGate(q, -2.5922392538536707, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.4929150133352405, 0);
  sqcRYGate(q, -0.24259927770220813, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.0369967363025627, 0);
  sqcRYGate(q, -1.496060483183399, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.039921339216666, 1);
  sqcRYGate(q, -1.4719554208927943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5920919986862279, 1);
  sqcRYGate(q, 0.1529158607701395, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.4411768917545924, 0);
  sqcRYGate(q, -2.475380589088694, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6467102053164506, 0);
  sqcRYGate(q, 0.005710232004896988, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5682360344573554, 1);
  sqcRYGate(q, -2.906406556353084, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.955036986815223, 1);
  sqcRYGate(q, 2.2261980281641174, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5974157219699077, 0);
  sqcRYGate(q, 2.4100978012233836, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.24410014272490166, 0);
  sqcRYGate(q, 1.8620352040787083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.8049143042907128, 2);
  sqcRYGate(q, 1.619418929104382, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.4874363246458264, 2);
  sqcRYGate(q, 0.15094043257946055, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.6266365020810225, 0);
  sqcRYGate(q, 0.6906971771666468, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.056611289248316, 0);
  sqcRYGate(q, 1.874874506617946, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6116975736222676, 1);
  sqcRYGate(q, 2.666290631041259, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.768229695859792, 1);
  sqcRYGate(q, 2.006343802110144, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.137698572942811, 0);
  sqcRYGate(q, 0.5246617671335914, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8780760678236863, 0);
  sqcRYGate(q, 0.3370822498566799, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.262987427501927, 1);
  sqcRYGate(q, -3.019783402430515, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.828308422570611, 1);
  sqcRYGate(q, 0.8907962413561579, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2552278511453676, 0);
  sqcRYGate(q, 1.8312490726816566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6316978704483245, 0);
  sqcRYGate(q, 0.19022609510731847, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.11480982488057925, 2);
  sqcRYGate(q, -0.5638732868751344, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6389917878452118, 2);
  sqcRYGate(q, -0.8634729934909384, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.11842836497157781, 0);
  sqcRYGate(q, -1.3553676548773719, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.2764660343697851, 0);
  sqcRYGate(q, -2.4813353715427025, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.34759523473971293, 1);
  sqcRYGate(q, -2.8117549989318387, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9672657722801543, 1);
  sqcRYGate(q, -1.083185335611569, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.0038796324381911, 0);
  sqcRYGate(q, 2.592737975267965, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.573410353381613, 0);
  sqcRYGate(q, 0.11027962842803932, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.155406149222798, 1);
  sqcRYGate(q, -1.7633053951937585, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.19470938748220837, 1);
  sqcRYGate(q, 1.5715066266788635, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8870324288118567, 0);
  sqcRYGate(q, 2.822420965285217, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.9499731056913472, 0);
  sqcRYGate(q, -0.30140168546536916, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.0948410941773015, 2);
  sqcRYGate(q, -0.7633520457474251, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.48882246463907647, 2);
  sqcRYGate(q, -1.129490712287163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -3.0186454963566094, 0);
  sqcRYGate(q, -2.184368794557506, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8518747494014836, 0);
  sqcRYGate(q, -0.6942200919363709, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.223547599079218, 1);
  sqcRYGate(q, -3.0647999936242005, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.6806380790238544, 1);
  sqcRYGate(q, -0.3069121067791943, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4900515308381963, 0);
  sqcRYGate(q, -1.722120292346264, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.1822618144121346, 0);
  sqcRYGate(q, -2.421211028389354, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.5069924455734878, 1);
  sqcRYGate(q, 0.04654862066470944, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4958793572223916, 1);
  sqcRYGate(q, 0.28541639914331807, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.181475137923806, 0);
  sqcRYGate(q, 1.0942318779176015, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.6837616367882164, 0);
  sqcRYGate(q, -0.7071472798297629, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.122685339998295, 2);
  sqcRYGate(q, 2.956252385399528, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.080889488251888, 2);
  sqcRYGate(q, 1.37003253285741, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.1547103210357248, 0);
  sqcRYGate(q, -0.34867737857650816, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.15795868683570605, 0);
  sqcRYGate(q, 2.395724356918172, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0469698002751975, 1);
  sqcRYGate(q, -2.802191040834276, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4127262146934947, 1);
  sqcRYGate(q, 0.15592690379541238, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.2635310927033956, 0);
  sqcRYGate(q, 2.104340886161748, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5915570632597165, 0);
  sqcRYGate(q, 0.37737836586166307, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.4348570471657243, 1);
  sqcRYGate(q, -0.9920506150587576, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.6940026717576937, 1);
  sqcRYGate(q, -2.2047045008697554, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0454209309633686, 0);
  sqcRYGate(q, 0.88401262616497, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.057004459136996, 0);
  sqcRYGate(q, -1.468833265690733, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.122549984992153, 2);
  sqcRYGate(q, -0.5237354741549032, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.5562130918795123, 2);
  sqcRYGate(q, 1.3700762833908768, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3844201820779718, 0);
  sqcRYGate(q, 1.8155581049438796, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.4154171146739104, 0);
  sqcRYGate(q, -1.9612826144131015, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.5137240603422217, 1);
  sqcRYGate(q, 0.21340275299580783, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.17660780335778, 1);
  sqcRYGate(q, 2.6967557035327614, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.8163589577164134, 0);
  sqcRYGate(q, -1.96149470424744, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.15410081573763532, 0);
  sqcRYGate(q, 2.1422885833799414, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.0017876336921807102, 1);
  sqcRYGate(q, 2.466472159150098, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9473797156840087, 1);
  sqcRYGate(q, -1.194376011904657, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6087774548533105, 0);
  sqcRYGate(q, -1.6476499951107373, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.777201223565943, 0);
  sqcRYGate(q, 3.0442678724277488, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6447838424571992, 2);
  sqcRYGate(q, 1.8338633849483106, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.2677475131471825, 2);
  sqcRYGate(q, 0.41893996617810997, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.7703339748742026, 0);
  sqcRYGate(q, 0.14511668220960683, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.194393669903648, 0);
  sqcRYGate(q, -0.1777704889085475, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5874181545809811, 1);
  sqcRYGate(q, -0.3171091463067883, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4715793547272265, 1);
  sqcRYGate(q, -1.7163014001602255, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7849259412879022, 0);
  sqcRYGate(q, 1.4567268638569184, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.11948081474486472, 0);
  sqcRYGate(q, -0.1616942953115577, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6705492243870947, 1);
  sqcRYGate(q, -2.5489449553945485, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.4876941762198914, 1);
  sqcRYGate(q, -1.8898096379026565, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.490552135303347, 0);
  sqcRYGate(q, -2.5368402874435056, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2093707355845333, 0);
  sqcRYGate(q, -2.8217726845841717, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.4222422526648159, 2);
  sqcRYGate(q, -1.7224637068441924, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.5037390614488064, 2);
  sqcRYGate(q, -0.4677007714003416, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.231875686432216, 0);
  sqcRYGate(q, 2.396180531508419, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.4149700171630526, 0);
  sqcRYGate(q, -0.8717994002241634, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6099313847703975, 1);
  sqcRYGate(q, 2.296288537863589, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.45294361222155294, 1);
  sqcRYGate(q, -0.5441676266250639, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.7883513476405454, 0);
  sqcRYGate(q, -1.095657284383659, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.14910291966557818, 0);
  sqcRYGate(q, 2.892359641083583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.11909316910440054, 1);
  sqcRYGate(q, -1.6190106215870814, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.45008288727167667, 1);
  sqcRYGate(q, 0.6746325938823586, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.147165604696809, 0);
  sqcRYGate(q, -2.3308572882626675, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.8422167601226176, 0);
  sqcRYGate(q, -1.447342904841083, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.31597728871164055, 2);
  sqcRYGate(q, 0.26607613511790795, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.275725111166413, 2);
  sqcRYGate(q, -1.8494309140873613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9909412309399275, 0);
  sqcRYGate(q, 2.531580003819315, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3036110569937944, 0);
  sqcRYGate(q, -1.1658016072661503, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2949997471949504, 1);
  sqcRYGate(q, 0.014632125941068885, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.1483582898325757, 1);
  sqcRYGate(q, 1.5712750109253975, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.765080752247437, 0);
  sqcRYGate(q, -0.3107340052319772, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.747962733577168, 0);
  sqcRYGate(q, -1.5410324877135706, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.063998185783396, 1);
  sqcRYGate(q, -0.1502008634898235, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.111457079016899, 1);
  sqcRYGate(q, -1.6882034590585038, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6481253785951728, 0);
  sqcRYGate(q, 1.2227909422075889, 1);
  sqcRYGate(q, -0.34391398555182623, 2);
  sqcRYGate(q, -0.7901378566841953, 3);

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
