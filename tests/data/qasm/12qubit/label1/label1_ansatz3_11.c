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

  sqcRYGate(q, -2.4978815161249286, 0);
  sqcRZGate(q, -1.1885325781998004, 0);
  sqcRYGate(q, 0.034906387030336994, 1);
  sqcRZGate(q, -2.7146814973591202, 1);
  sqcRYGate(q, 2.4901076241738576, 2);
  sqcRZGate(q, -2.0622147627914638, 2);
  sqcRYGate(q, -0.14791844619116465, 3);
  sqcRZGate(q, 2.8433753803862425, 3);
  sqcRYGate(q, -0.0012231701660301297, 4);
  sqcRZGate(q, 2.5735981954153218, 4);
  sqcRYGate(q, 2.7603225190452862, 5);
  sqcRZGate(q, -3.045231293093773, 5);
  sqcRYGate(q, 1.6916102749152502, 6);
  sqcRZGate(q, -1.1347398046992714, 6);
  sqcRYGate(q, -0.33148016952122106, 7);
  sqcRZGate(q, -0.047515608220697565, 7);
  sqcRYGate(q, 1.7310796363408867, 8);
  sqcRZGate(q, -1.8319870420133937, 8);
  sqcRYGate(q, 0.02439815839697469, 9);
  sqcRZGate(q, 1.4393734336109432, 9);
  sqcRYGate(q, 3.130142447194951, 10);
  sqcRZGate(q, 0.4883713788285531, 10);
  sqcRYGate(q, -0.8986164607700965, 11);
  sqcRZGate(q, 1.3864127692182437, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.114970271736582, 0);
  sqcRZGate(q, 1.983743202694206, 0);
  sqcRYGate(q, 2.0306002295505996, 1);
  sqcRZGate(q, -1.3850407995893053, 1);
  sqcRYGate(q, -1.1281726276661892, 2);
  sqcRZGate(q, 0.959673987925932, 2);
  sqcRYGate(q, 1.3935677137187052, 3);
  sqcRZGate(q, 1.450043574360472, 3);
  sqcRYGate(q, -0.002685921538267155, 4);
  sqcRZGate(q, 1.597158593473062, 4);
  sqcRYGate(q, -1.5715143634758233, 5);
  sqcRZGate(q, -0.47968152462658714, 5);
  sqcRYGate(q, -1.0685595060689463, 6);
  sqcRZGate(q, 1.592543529474406, 6);
  sqcRYGate(q, 0.044361696943696856, 7);
  sqcRZGate(q, -1.8136490697932484, 7);
  sqcRYGate(q, -1.1628706079577507, 8);
  sqcRZGate(q, 1.7425083377945734, 8);
  sqcRYGate(q, 3.104682637077449, 9);
  sqcRZGate(q, 0.510238162376992, 9);
  sqcRYGate(q, -0.005761135812887026, 10);
  sqcRZGate(q, 1.91907516742815, 10);
  sqcRYGate(q, -3.084958633682504, 11);
  sqcRZGate(q, 2.143598809437624, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.3573343014004857, 0);
  sqcRZGate(q, 2.799993483545881, 0);
  sqcRYGate(q, -0.12872087879779048, 1);
  sqcRZGate(q, -0.41611329209361975, 1);
  sqcRYGate(q, 2.856002190710925, 2);
  sqcRZGate(q, -0.2530484178891461, 2);
  sqcRYGate(q, -0.2669364625922507, 3);
  sqcRZGate(q, 3.098190450456036, 3);
  sqcRYGate(q, 0.0011584046118454164, 4);
  sqcRZGate(q, 0.15189825661659118, 4);
  sqcRYGate(q, 1.6211616882183177, 5);
  sqcRZGate(q, 2.293236498040688, 5);
  sqcRYGate(q, -0.10403683855757873, 6);
  sqcRZGate(q, -2.2415631720046965, 6);
  sqcRYGate(q, -1.5991503425920506, 7);
  sqcRZGate(q, 1.6940487124573291, 7);
  sqcRYGate(q, 1.8058634205450215, 8);
  sqcRZGate(q, 1.5946222437988018, 8);
  sqcRYGate(q, -3.1407266052275293, 9);
  sqcRZGate(q, -2.764231371856136, 9);
  sqcRYGate(q, -0.0011678241039788006, 10);
  sqcRZGate(q, 1.7394413518313394, 10);
  sqcRYGate(q, 0.7511913038936876, 11);
  sqcRZGate(q, -1.1881411407994744, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.7233670450734113, 0);
  sqcRZGate(q, -1.9794630206276862, 0);
  sqcRYGate(q, -2.897584452767396, 1);
  sqcRZGate(q, 0.5947481755603603, 1);
  sqcRYGate(q, -1.560886450903996, 2);
  sqcRZGate(q, 2.165648767686407, 2);
  sqcRYGate(q, 0.6786730372165248, 3);
  sqcRZGate(q, 2.336275526759982, 3);
  sqcRYGate(q, 0.0009494737221601269, 4);
  sqcRZGate(q, -2.3083601411948385, 4);
  sqcRYGate(q, 3.1112697483677056, 5);
  sqcRZGate(q, 0.2449638485502218, 5);
  sqcRYGate(q, -1.6054052045150256, 6);
  sqcRZGate(q, 1.9497208458815336, 6);
  sqcRYGate(q, -0.4855855152495936, 7);
  sqcRZGate(q, 2.065015218244289, 7);
  sqcRYGate(q, 0.7738861803594146, 8);
  sqcRZGate(q, -0.891175194449846, 8);
  sqcRYGate(q, -0.0009756024810236852, 9);
  sqcRZGate(q, -2.2016760872710437, 9);
  sqcRYGate(q, 1.5826122366846898, 10);
  sqcRZGate(q, -0.9122321224194101, 10);
  sqcRYGate(q, 2.379561004026364, 11);
  sqcRZGate(q, -1.085419909953612, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.6484735661930614, 0);
  sqcRZGate(q, 0.8255794339366944, 0);
  sqcRYGate(q, 2.921634353650631, 1);
  sqcRZGate(q, -0.410033456983371, 1);
  sqcRYGate(q, -2.863742142230822, 2);
  sqcRZGate(q, 1.9644465438377798, 2);
  sqcRYGate(q, -1.7009314319203412, 3);
  sqcRZGate(q, -0.4283618873465059, 3);
  sqcRYGate(q, 1.7421808525585643, 4);
  sqcRZGate(q, 1.5729240527576165, 4);
  sqcRYGate(q, -0.284957823641432, 5);
  sqcRZGate(q, 1.5673006715435989, 5);
  sqcRYGate(q, -2.833236826935295, 6);
  sqcRZGate(q, 0.14364113162841147, 6);
  sqcRYGate(q, 0.3476563970637736, 7);
  sqcRZGate(q, -1.8269100660208122, 7);
  sqcRYGate(q, 0.019610394655406788, 8);
  sqcRZGate(q, -0.4661224423967552, 8);
  sqcRYGate(q, 0.002267817298869268, 9);
  sqcRZGate(q, 2.9754950258569703, 9);
  sqcRYGate(q, -3.1066651062541513, 10);
  sqcRZGate(q, -1.047425079394844, 10);
  sqcRYGate(q, -1.6057733102352825, 11);
  sqcRZGate(q, -2.0600147388815735, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.008509124324058, 0);
  sqcRZGate(q, -2.4876368955025367, 0);
  sqcRYGate(q, -1.5077566497206112, 1);
  sqcRZGate(q, 1.9463790009486246, 1);
  sqcRYGate(q, 1.8559357571614852, 2);
  sqcRZGate(q, 2.044888506113825, 2);
  sqcRYGate(q, 1.419904911173031, 3);
  sqcRZGate(q, -0.04411269594007586, 3);
  sqcRYGate(q, 0.009412762117402274, 4);
  sqcRZGate(q, 0.05602472444934125, 4);
  sqcRYGate(q, 0.0005354216260851661, 5);
  sqcRZGate(q, -1.5794832039611664, 5);
  sqcRYGate(q, 3.1390911188423556, 6);
  sqcRZGate(q, 2.93605618206485, 6);
  sqcRYGate(q, -0.5455303059075041, 7);
  sqcRZGate(q, 1.358514843059222, 7);
  sqcRYGate(q, 1.6331612210574509, 8);
  sqcRZGate(q, 0.08867314274892836, 8);
  sqcRYGate(q, 1.7811063510597904, 9);
  sqcRZGate(q, 1.6074585054499675, 9);
  sqcRYGate(q, -0.6948001968803446, 10);
  sqcRZGate(q, -0.2792775022072688, 10);
  sqcRYGate(q, 0.20383098122391008, 11);
  sqcRZGate(q, 0.5285178350138118, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.591598422937073, 0);
  sqcRZGate(q, -1.6275765376883902, 0);
  sqcRYGate(q, -0.08057189964156475, 1);
  sqcRZGate(q, -0.550802009391908, 1);
  sqcRYGate(q, 0.00887035011577025, 2);
  sqcRZGate(q, -0.844937083199304, 2);
  sqcRYGate(q, 1.5139144405354443, 3);
  sqcRZGate(q, -3.1302716949630702, 3);
  sqcRYGate(q, 1.7206739901284926, 4);
  sqcRZGate(q, 1.2215317976327926, 4);
  sqcRYGate(q, 2.4516261690942267, 5);
  sqcRZGate(q, 2.5722993275422774, 5);
  sqcRYGate(q, -1.8992516254926208, 6);
  sqcRZGate(q, -2.7370055474858552, 6);
  sqcRYGate(q, 2.983165227937994, 7);
  sqcRZGate(q, 1.6135305874669008, 7);
  sqcRYGate(q, 3.1022565998251244, 8);
  sqcRZGate(q, -0.5697817786122955, 8);
  sqcRYGate(q, 3.12721151128663, 9);
  sqcRZGate(q, 1.4988225589868502, 9);
  sqcRYGate(q, -0.33220474156464863, 10);
  sqcRZGate(q, 0.13310644547715436, 10);
  sqcRYGate(q, 3.0862661985427575, 11);
  sqcRZGate(q, -0.8287119478783583, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.782834464508305, 0);
  sqcRZGate(q, -0.2304493506794885, 0);
  sqcRYGate(q, 1.0034074269962927, 1);
  sqcRZGate(q, 1.9950150737161914, 1);
  sqcRYGate(q, -1.491340792676091, 2);
  sqcRZGate(q, -2.6064145907468346, 2);
  sqcRYGate(q, 1.4359145439503154, 3);
  sqcRZGate(q, -1.2190574432911099, 3);
  sqcRYGate(q, 0.004328575501368448, 4);
  sqcRZGate(q, 0.03385078315877152, 4);
  sqcRYGate(q, -0.004114969029365589, 5);
  sqcRZGate(q, -0.7570657626766986, 5);
  sqcRYGate(q, 0.00031280809778411997, 6);
  sqcRZGate(q, 0.46689814955989695, 6);
  sqcRYGate(q, -2.683101204857733, 7);
  sqcRZGate(q, -1.4836261992674364, 7);
  sqcRYGate(q, -2.809079805943038, 8);
  sqcRZGate(q, 1.6289122239884481, 8);
  sqcRYGate(q, 1.782520713322479, 9);
  sqcRZGate(q, -0.7736297328088669, 9);
  sqcRYGate(q, -2.3110231447870913, 10);
  sqcRZGate(q, -1.6338425405105472, 10);
  sqcRYGate(q, -2.6323308369686638, 11);
  sqcRZGate(q, -0.7357600936789712, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 0.025636203392582328, 0);
  sqcRZGate(q, 1.802383275193122, 0);
  sqcRYGate(q, 1.8812857359425559, 1);
  sqcRZGate(q, 2.4149057907017837, 1);
  sqcRYGate(q, 1.5010302666912931, 2);
  sqcRZGate(q, -1.4002920163944372, 2);
  sqcRYGate(q, 1.743804912029864, 3);
  sqcRZGate(q, 1.3289203032348955, 3);
  sqcRYGate(q, -2.329491540254812, 4);
  sqcRZGate(q, 1.0236698055315276, 4);
  sqcRYGate(q, -0.42943120932984247, 5);
  sqcRZGate(q, -2.1023143782871827, 5);
  sqcRYGate(q, 0.21445210290442768, 6);
  sqcRZGate(q, -0.4618507739320146, 6);
  sqcRYGate(q, -2.674426986871554, 7);
  sqcRZGate(q, 1.6068970508767848, 7);
  sqcRYGate(q, 2.7116535986061527, 8);
  sqcRZGate(q, 1.7790392292792145, 8);
  sqcRYGate(q, 0.005448227684123451, 9);
  sqcRZGate(q, 3.082889014166269, 9);
  sqcRYGate(q, 1.3424945355996292, 10);
  sqcRZGate(q, 1.2856496680494323, 10);
  sqcRYGate(q, 2.078735354168511, 11);
  sqcRZGate(q, 1.6063589155064737, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.542966323019455, 0);
  sqcRZGate(q, -1.2953833335316056, 0);
  sqcRYGate(q, 0.910202460958419, 1);
  sqcRZGate(q, 1.4006110192086225, 1);
  sqcRYGate(q, 0.9081602476807511, 2);
  sqcRZGate(q, -3.1076477440588866, 2);
  sqcRYGate(q, 3.1029263236299656, 3);
  sqcRZGate(q, 0.0753657795355398, 3);
  sqcRYGate(q, -3.1400099259100873, 4);
  sqcRZGate(q, 1.7045694774188824, 4);
  sqcRYGate(q, 0.00958225984691996, 5);
  sqcRZGate(q, 1.0183260627536386, 5);
  sqcRYGate(q, 3.1400962082675226, 6);
  sqcRZGate(q, 2.8446446813767756, 6);
  sqcRYGate(q, 0.5131053903272705, 7);
  sqcRZGate(q, -1.531495729700242, 7);
  sqcRYGate(q, -0.023579005750520257, 8);
  sqcRZGate(q, -0.3329329890344539, 8);
  sqcRYGate(q, 0.0026966745246532757, 9);
  sqcRZGate(q, -2.756323911654924, 9);
  sqcRYGate(q, 1.7776616790049724, 10);
  sqcRZGate(q, 1.5368484867911523, 10);
  sqcRYGate(q, -1.2478236641616416, 11);
  sqcRZGate(q, 1.989000974919712, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -2.7918785296725166, 0);
  sqcRZGate(q, -2.797879319737924, 0);
  sqcRYGate(q, -0.14848172333154808, 1);
  sqcRZGate(q, -2.065497858307463, 1);
  sqcRYGate(q, -2.0436935269939513, 2);
  sqcRZGate(q, -0.2758306591236792, 2);
  sqcRYGate(q, 1.1161285859589798, 3);
  sqcRZGate(q, -1.6943050513165794, 3);
  sqcRYGate(q, 1.9111565819029863, 4);
  sqcRZGate(q, -1.7743758919574832, 4);
  sqcRYGate(q, 2.732284937839897, 5);
  sqcRZGate(q, -1.8596556051692488, 5);
  sqcRYGate(q, 0.08241464894019757, 6);
  sqcRZGate(q, 1.1706794635433342, 6);
  sqcRYGate(q, 2.536002610935728, 7);
  sqcRZGate(q, 1.5311279413971919, 7);
  sqcRYGate(q, 0.6325708619327619, 8);
  sqcRZGate(q, -3.025153526833326, 8);
  sqcRYGate(q, 1.5359948903841114, 9);
  sqcRZGate(q, -1.6538761782742524, 9);
  sqcRYGate(q, 2.9576465683677973, 10);
  sqcRZGate(q, -3.120854438342715, 10);
  sqcRYGate(q, 2.4710603239109328, 11);
  sqcRZGate(q, -1.1503512443047956, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 1.6297142002264566, 0);
  sqcRZGate(q, 1.5330409304925694, 0);
  sqcRYGate(q, 2.1327571460450763, 1);
  sqcRZGate(q, -0.027734977796741504, 1);
  sqcRYGate(q, -2.3670386083692296, 2);
  sqcRZGate(q, -1.1741347494651075, 2);
  sqcRYGate(q, 3.1223641360947108, 3);
  sqcRZGate(q, 1.7352995395668849, 3);
  sqcRYGate(q, -3.136880279803669, 4);
  sqcRZGate(q, -1.7562580406611508, 4);
  sqcRYGate(q, 0.0006199465348215582, 5);
  sqcRZGate(q, -0.9185175828462784, 5);
  sqcRYGate(q, 3.13254096001714, 6);
  sqcRZGate(q, 1.2585276728221366, 6);
  sqcRYGate(q, -3.141560861065071, 7);
  sqcRZGate(q, -0.5991076766407413, 7);
  sqcRYGate(q, -3.130478407385731, 8);
  sqcRZGate(q, -1.161145515975876, 8);
  sqcRYGate(q, 0.09770951381167509, 9);
  sqcRZGate(q, 0.5171854871132188, 9);
  sqcRYGate(q, 1.5579271092051847, 10);
  sqcRZGate(q, -0.031649696977680705, 10);
  sqcRYGate(q, 2.063732680388751, 11);
  sqcRZGate(q, -2.734640704408737, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.2426237329817322, 0);
  sqcRZGate(q, -0.8385846829328736, 0);
  sqcRYGate(q, -2.5384889952819014, 1);
  sqcRZGate(q, 1.059066095276021, 1);
  sqcRYGate(q, 0.2358203138728522, 2);
  sqcRZGate(q, -2.3854576056308803, 2);
  sqcRYGate(q, 1.9861260997869845, 3);
  sqcRZGate(q, 0.19074580777553912, 3);
  sqcRYGate(q, 2.763757741624142, 4);
  sqcRZGate(q, 0.24917276899473076, 4);
  sqcRYGate(q, -0.17146236349649707, 5);
  sqcRZGate(q, 1.6102796543349402, 5);
  sqcRYGate(q, 1.223384384942496, 6);
  sqcRZGate(q, 2.637270164915716, 6);
  sqcRYGate(q, -3.105417582428156, 7);
  sqcRZGate(q, -1.0076145096538207, 7);
  sqcRYGate(q, -0.004882267824122266, 8);
  sqcRZGate(q, 2.643193686506351, 8);
  sqcRYGate(q, 1.551051084773237, 9);
  sqcRZGate(q, -1.3905290389733116, 9);
  sqcRYGate(q, -0.15633927105128917, 10);
  sqcRZGate(q, 0.007730333752680174, 10);
  sqcRYGate(q, -1.5016996939463114, 11);
  sqcRZGate(q, 1.5343405597792537, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, -1.7671330229533861, 0);
  sqcRZGate(q, 1.5662364623838245, 0);
  sqcRYGate(q, 2.532535866822038, 1);
  sqcRZGate(q, -0.1589225988392686, 1);
  sqcRYGate(q, -1.908835730544853, 2);
  sqcRZGate(q, 3.0919057436147726, 2);
  sqcRYGate(q, 0.05312496736593264, 3);
  sqcRZGate(q, 3.094175210654944, 3);
  sqcRYGate(q, 3.1403026074402387, 4);
  sqcRZGate(q, 1.2345314169116701, 4);
  sqcRYGate(q, -0.013932107376292358, 5);
  sqcRZGate(q, 1.866878410026376, 5);
  sqcRYGate(q, -3.1400137560003047, 6);
  sqcRZGate(q, 2.417648267314945, 6);
  sqcRYGate(q, 3.1363631552156392, 7);
  sqcRZGate(q, 2.6673312630506922, 7);
  sqcRYGate(q, 0.011051515071393143, 8);
  sqcRZGate(q, 2.901341757246249, 8);
  sqcRYGate(q, 0.051277172395325366, 9);
  sqcRZGate(q, 1.2568616206667365, 9);
  sqcRYGate(q, -2.845479736122533, 10);
  sqcRZGate(q, 0.960096994271311, 10);
  sqcRYGate(q, 1.5808152060940737, 11);
  sqcRZGate(q, -0.03678871575017607, 11);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcRYGate(q, 2.549845912485446, 0);
  sqcRZGate(q, 1.084846667399402, 0);
  sqcRYGate(q, -0.8643373827787084, 1);
  sqcRZGate(q, -2.10598544241841, 1);
  sqcRYGate(q, -0.48375186120133007, 2);
  sqcRZGate(q, 1.526768657069306, 2);
  sqcRYGate(q, 0.890372292910958, 3);
  sqcRZGate(q, -2.3867738671246594, 3);
  sqcRYGate(q, 1.6441393207190211, 4);
  sqcRZGate(q, -1.4938841223966532, 4);
  sqcRYGate(q, -1.9689435921008291, 5);
  sqcRZGate(q, 2.2066299969503236, 5);
  sqcRYGate(q, 2.26651664537555, 6);
  sqcRZGate(q, 2.587502222641499, 6);
  sqcRYGate(q, -1.5749120465051616, 7);
  sqcRZGate(q, -0.7245343172596326, 7);
  sqcRYGate(q, 0.01655267160988405, 8);
  sqcRZGate(q, 2.6065209042528386, 8);
  sqcRYGate(q, -0.0012046207796840844, 9);
  sqcRZGate(q, 0.9286639367171257, 9);
  sqcRYGate(q, 3.1319586298225297, 10);
  sqcRZGate(q, -3.0226352217913868, 10);
  sqcRYGate(q, -0.4045690698265058, 11);
  sqcRZGate(q, 2.3540733115872947, 11);

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
