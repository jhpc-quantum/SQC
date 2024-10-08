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

  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.06680279075506523, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.05911694246207381, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.038565682454606814, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.04524269816491719, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.015578043314460856, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.05172470564484959, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.078659028401643, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.03146759389633515, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.006600385864906514, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.024707136704526705, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.09077444663885739, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.8222551397498938, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.16026120726113477, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.42360554265743666, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.9177675038931734, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.938675298288104, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5101837461474175, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.8054495712515806, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.7012723159874807, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.003774008454993161, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.4495764261304428, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.5119091724029704, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.02738891673962779, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.4186905143259328, 0);
  sqcRZGate(q, -0.10065193119094623, 1);
  sqcRZGate(q, -0.24732160019738408, 2);
  sqcRZGate(q, -0.7367124635572193, 3);
  sqcRZGate(q, -0.4843759648174393, 4);
  sqcRZGate(q, -0.4630822815419315, 5);
  sqcRZGate(q, -0.48883564567066706, 6);
  sqcRZGate(q, -0.6053425946153559, 7);
  sqcRZGate(q, -0.5425546876549882, 8);
  sqcRZGate(q, -0.2763018413372302, 9);
  sqcRZGate(q, -0.22639459907294565, 10);
  sqcRZGate(q, 0.08461238122917392, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.08990969269734597, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.027054259684222554, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.012871660801906055, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.2905495991592723, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.1376518335841323, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.028294198408716893, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.07223343234907867, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.1698087348200799, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.28428582421706305, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.11118271674823293, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.05039265084142367, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5833857559854676, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.4606089863448941, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.6023716685972804, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.686186523830567, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.8925912598016779, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.8019086827434648, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.802306684684266, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.21279124502970811, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.45546561771418337, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.5907582972413323, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.34489802028311434, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.04138889084112204, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.6248529795465969, 0);
  sqcRZGate(q, -0.2994828232270716, 1);
  sqcRZGate(q, -0.5358788003404472, 2);
  sqcRZGate(q, -0.6033283623666499, 3);
  sqcRZGate(q, -0.5781005899436986, 4);
  sqcRZGate(q, -0.9507138203203133, 5);
  sqcRZGate(q, -0.6521818261905632, 6);
  sqcRZGate(q, -0.652684879242887, 7);
  sqcRZGate(q, -0.9051327068848194, 8);
  sqcRZGate(q, -0.49252792813834134, 9);
  sqcRZGate(q, -0.3711440686521433, 10);
  sqcRZGate(q, 0.01350469040954283, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.06005317925908004, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.024078219192588794, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1882712346455163, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.032698225867005895, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.6073859739849855, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.038063607061031096, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.08048747736658252, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.3454275251634379, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.136842293729326, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.03537674707377354, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.14252202569856792, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4844982210936817, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5765929605089379, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.3745288521232659, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.620118717374717, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.07951783851321358, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.8197507234942434, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.6492404945150273, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.30505089347933073, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.16294967902732443, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.6786529498971409, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.10715851683604104, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.08612944175216453, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.7004394735507501, 0);
  sqcRZGate(q, -0.2800240567422979, 1);
  sqcRZGate(q, -0.5801206206958691, 2);
  sqcRZGate(q, -0.5086252286441885, 3);
  sqcRZGate(q, -0.2729400547007303, 4);
  sqcRZGate(q, -0.3930215443349778, 5);
  sqcRZGate(q, -0.5894172465956384, 6);
  sqcRZGate(q, -0.22390532043558453, 7);
  sqcRZGate(q, -0.6957035771689964, 8);
  sqcRZGate(q, -0.48338961694589366, 9);
  sqcRZGate(q, -0.4034540883546642, 10);
  sqcRZGate(q, -3.2113504124392366e-05, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.003466529604715253, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.020176805308329913, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.012955217385325537, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.12563520551861165, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.6177326860852699, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.4907425827013502, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.06134480706926447, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.020652865859330474, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.12758453594297972, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.03041096222882358, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.136607264419447, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.5001843966463793, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.2179547986117789, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.2693833741816415, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.6691565389695465, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.40067159837922106, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.9197853134237489, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 1.061307900111002, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5346767073590509, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.6834885228479024, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.2974047822794232, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, 0.014134906524508422, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.1154391736510576, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.5733185843223614, 0);
  sqcRZGate(q, -0.3124765047966852, 1);
  sqcRZGate(q, -0.37880051753235433, 2);
  sqcRZGate(q, 0.1620555010489102, 3);
  sqcRZGate(q, -0.08901155375464251, 4);
  sqcRZGate(q, 0.022701201125189113, 5);
  sqcRZGate(q, 0.17223025212876455, 6);
  sqcRZGate(q, 0.23545315038621545, 7);
  sqcRZGate(q, -0.40241279066711083, 8);
  sqcRZGate(q, -0.5008712730092011, 9);
  sqcRZGate(q, -0.36608676699892684, 10);
  sqcRZGate(q, 0.10480039819836157, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.04600398760303407, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.13651542838204367, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.6593321497704507, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.20489253113801878, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.4915270961031735, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.04790707871034188, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.06383827930366262, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.031365103887570855, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.08349435063083255, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.04150776648953784, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.15120888847176603, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.47311746359802925, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.10801114374077139, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 1.0125128256860958, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.22526233771197998, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, 0.028392774841769955, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.5918754561621908, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.5032953943401549, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.6873124870855389, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.6800113374672991, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.2449055006768331, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.06968930356066447, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.02195612737733074, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.27966648515492903, 0);
  sqcRZGate(q, -0.3964938209143991, 1);
  sqcRZGate(q, -0.011427776224816241, 2);
  sqcRZGate(q, -0.015153015807809055, 3);
  sqcRZGate(q, 0.2152054284147212, 4);
  sqcRZGate(q, 0.027041610249501982, 5);
  sqcRZGate(q, 0.21185768933518706, 6);
  sqcRZGate(q, 0.5642079022877015, 7);
  sqcRZGate(q, -0.4474053159308661, 8);
  sqcRZGate(q, -0.19917673631894592, 9);
  sqcRZGate(q, -0.2847801704260602, 10);
  sqcRZGate(q, 0.0671780923908089, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.04176126369837981, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6078180840551763, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.4516366707759325, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.05343862945996347, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.14796151659619614, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.5962872997332406, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5066331807665958, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.04432430492407293, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.087039611702883, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.17180994161762167, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.04389443964909378, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.28585432824979207, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.09082034041899037, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.1491038050916968, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.28084839349071655, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.192457555917123, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.7409613333891634, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.2415641924083874, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.3364531256170249, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.24626223258972027, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.7182927951139905, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.1119811609255196, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.08731007128822181, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.04053303343282026, 0);
  sqcRZGate(q, -0.2111334034051538, 1);
  sqcRZGate(q, 0.11369676332430213, 2);
  sqcRZGate(q, 0.1701430203934207, 3);
  sqcRZGate(q, 0.1943391974319048, 4);
  sqcRZGate(q, 0.02563245305825825, 5);
  sqcRZGate(q, 0.055087011497186644, 6);
  sqcRZGate(q, 0.20376624235541466, 7);
  sqcRZGate(q, -0.6716556299052968, 8);
  sqcRZGate(q, -0.305199139232705, 9);
  sqcRZGate(q, -0.28346906213470063, 10);
  sqcRZGate(q, 0.284980395490018, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.004672106643626269, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.5294993915507542, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.1657006030365051, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.08235812411477998, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.17311335435087288, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.055746121482993585, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.20758656559046673, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.06275604643793087, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.11435826944745722, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.20082488162886547, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.17108232709688773, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.014538665549972563, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.5516489793441949, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.0591697072275094, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.42989403525294684, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.29221754772256664, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.4662558150171785, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.17546670074417528, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.5655391052462605, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.6258159106212509, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, 0.0949695633253812, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.4289058479631357, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.021775367845522503, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.1640409293973505, 0);
  sqcRZGate(q, 0.31323601026301295, 1);
  sqcRZGate(q, -0.08335345867580558, 2);
  sqcRZGate(q, -0.17367916463874786, 3);
  sqcRZGate(q, 0.16002691694618898, 4);
  sqcRZGate(q, -0.02109892218447866, 5);
  sqcRZGate(q, -0.042117107200258394, 6);
  sqcRZGate(q, -0.06021337651802803, 7);
  sqcRZGate(q, -0.499825529340845, 8);
  sqcRZGate(q, -0.06234474846678195, 9);
  sqcRZGate(q, -0.013947466706498598, 10);
  sqcRZGate(q, 0.6229419527630118, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.14266162343633657, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.23435258666552247, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.02528113732359193, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.03666334385383331, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.11170033370741456, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.2152027332755898, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4271347163144663, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.5260038194553887, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.4730036853566438, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.15368462945180197, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.3506430013734968, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.2825678296706733, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.061253758935766525, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, 0.09523840110178666, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.1585068920616521, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.25063129019540453, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.2827006221006406, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.16775350332848996, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, 0.30196179270071954, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.5690426020581877, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.015661621078580025, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.45505020947287317, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.3399456542887385, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.18940321799915785, 0);
  sqcRZGate(q, -0.2113489284931836, 1);
  sqcRZGate(q, -0.021651264779987016, 2);
  sqcRZGate(q, -0.07017637287557958, 3);
  sqcRZGate(q, 0.3544528865452047, 4);
  sqcRZGate(q, -0.024011807714659585, 5);
  sqcRZGate(q, -0.0071692967191500775, 6);
  sqcRZGate(q, -0.1403148637512238, 7);
  sqcRZGate(q, 0.046097909633644164, 8);
  sqcRZGate(q, 0.10245887098826457, 9);
  sqcRZGate(q, 0.30196835446565534, 10);
  sqcRZGate(q, 0.5369986796807856, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.2727304055438565, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.535421142866551, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.32574377749504646, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.17748185609189537, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.1362413507259667, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.1887668556128538, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.4871744836720043, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.19374729443102157, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, 0.37124121528017173, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.7345515166330118, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.0028018787814043655, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.4606182723607048, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.05985257189578243, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.44719725456326315, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.029512639949949643, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.5454796245253503, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.07000176077490243, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.32955814162119057, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.38008294543054433, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.3017434881242262, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.4780276015901026, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.6571720592197046, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.19801403593788616, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.21311725005452134, 0);
  sqcRZGate(q, -0.16924812607114026, 1);
  sqcRZGate(q, -0.031161637726576402, 2);
  sqcRZGate(q, 0.09313489152728682, 3);
  sqcRZGate(q, 0.31352339686850567, 4);
  sqcRZGate(q, 0.02572236106272435, 5);
  sqcRZGate(q, -0.07860943080397156, 6);
  sqcRZGate(q, -0.03264816700947273, 7);
  sqcRZGate(q, -0.03141716328234621, 8);
  sqcRZGate(q, 0.11339945103970155, 9);
  sqcRZGate(q, 0.01025944806947697, 10);
  sqcRZGate(q, 0.6935553756626771, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.09446417013230753, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5102478547908939, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1080128625277241, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.031162370540137527, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, 0.4871516953687815, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.10572982623694216, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.5203931614835107, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.21768810473804406, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.007957730243470703, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.5439109255811471, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.2545187550677176, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.44134843435837984, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.39395683883558347, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.5191710663229334, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, 0.043713288312526126, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.9415927031009287, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, 0.022215258495050134, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.20233125259043316, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.1985300919319737, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -1.5205092005618286, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.0638410452753795, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -1.058322940831337, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.9156086073725436, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.06262947669761978, 0);
  sqcRZGate(q, -0.02926667353979639, 1);
  sqcRZGate(q, 0.02354324136672964, 2);
  sqcRZGate(q, 0.16509555596586312, 3);
  sqcRZGate(q, -0.3882890550296532, 4);
  sqcRZGate(q, -0.023823332326241023, 5);
  sqcRZGate(q, 0.20319926792991067, 6);
  sqcRZGate(q, -0.020955090642420602, 7);
  sqcRZGate(q, 0.9656407802177827, 8);
  sqcRZGate(q, -0.15162550531689567, 9);
  sqcRZGate(q, -0.042346611475343646, 10);
  sqcRZGate(q, 0.8068961580598762, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, 0.6670909626894314, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, -0.6062997477974696, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, 0.21304513352855894, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, 0.08983091833462503, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.24370661381102546, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, 0.11568773886620758, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, -0.05792562845338149, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, 0.1234378123869707, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.020212893106686666, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, 0.25218505065240115, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, 0.14060931086966685, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, -0.027468716338688463, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, 0.20274191882747258, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -0.8634030409228896, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.019971011262777345, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -1.0820020429536144, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.3666170783866956, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, -0.33548193313868047, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -1.9115370610620228, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, -0.021532532816697182, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -0.6964416878893321, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.954737602563944, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -0.526621541071544, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.09967428685086298, 0);
  sqcRZGate(q, -0.02995173866159333, 1);
  sqcRZGate(q, -9.193454390308806e-06, 2);
  sqcRZGate(q, -0.09039013527456861, 3);
  sqcRZGate(q, -0.023349850376644617, 4);
  sqcRZGate(q, 0.029204700340255737, 5);
  sqcRZGate(q, -0.06868379024076773, 6);
  sqcRZGate(q, -0.093713225664042, 7);
  sqcRZGate(q, -0.7702336635334792, 8);
  sqcRZGate(q, 0.1056066613576699, 9);
  sqcRZGate(q, 0.19667261518051804, 10);
  sqcRZGate(q, 1.3513996061403646, 11);
  sqcCXGate(q, 0, 1);
  sqcRZGate(q, -0.1334564740748043, 1);
  sqcCXGate(q, 0, 1);
  sqcCXGate(q, 1, 2);
  sqcRZGate(q, 0.5745922721294663, 2);
  sqcCXGate(q, 1, 2);
  sqcCXGate(q, 2, 3);
  sqcRZGate(q, -0.1118367535308877, 3);
  sqcCXGate(q, 2, 3);
  sqcCXGate(q, 3, 4);
  sqcRZGate(q, -0.20107057856867772, 4);
  sqcCXGate(q, 3, 4);
  sqcCXGate(q, 4, 5);
  sqcRZGate(q, -0.11697858805099957, 5);
  sqcCXGate(q, 4, 5);
  sqcCXGate(q, 5, 6);
  sqcRZGate(q, -0.288450950963219, 6);
  sqcCXGate(q, 5, 6);
  sqcCXGate(q, 6, 7);
  sqcRZGate(q, 0.18175787444981764, 7);
  sqcCXGate(q, 6, 7);
  sqcCXGate(q, 7, 8);
  sqcRZGate(q, -0.34795065144756165, 8);
  sqcCXGate(q, 7, 8);
  sqcCXGate(q, 8, 9);
  sqcRZGate(q, -0.09197110447502845, 9);
  sqcCXGate(q, 8, 9);
  sqcCXGate(q, 9, 10);
  sqcRZGate(q, -0.835931854159034, 10);
  sqcCXGate(q, 9, 10);
  sqcCXGate(q, 10, 11);
  sqcRZGate(q, -0.5413614248310076, 11);
  sqcCXGate(q, 10, 11);
  sqcHGate(q, 0);
  sqcRZGate(q, 0.4091154662827241, 0);
  sqcHGate(q, 0);
  sqcHGate(q, 1);
  sqcRZGate(q, -0.00953137906272132, 1);
  sqcHGate(q, 1);
  sqcHGate(q, 2);
  sqcRZGate(q, -1.1221548255857647, 2);
  sqcHGate(q, 2);
  sqcHGate(q, 3);
  sqcRZGate(q, -0.3687801903654717, 3);
  sqcHGate(q, 3);
  sqcHGate(q, 4);
  sqcRZGate(q, -0.3158634508142501, 4);
  sqcHGate(q, 4);
  sqcHGate(q, 5);
  sqcRZGate(q, -0.7356983376685853, 5);
  sqcHGate(q, 5);
  sqcHGate(q, 6);
  sqcRZGate(q, 0.41139050134994404, 6);
  sqcHGate(q, 6);
  sqcHGate(q, 7);
  sqcRZGate(q, -0.0264665000772105, 7);
  sqcHGate(q, 7);
  sqcHGate(q, 8);
  sqcRZGate(q, 0.09993186917349638, 8);
  sqcHGate(q, 8);
  sqcHGate(q, 9);
  sqcRZGate(q, -1.291729272760492, 9);
  sqcHGate(q, 9);
  sqcHGate(q, 10);
  sqcRZGate(q, -0.006879784825604361, 10);
  sqcHGate(q, 10);
  sqcHGate(q, 11);
  sqcRZGate(q, -1.5531650071275431, 11);
  sqcHGate(q, 11);
  sqcRZGate(q, 0.26141069875293543, 0);
  sqcRZGate(q, 0.024314335521333174, 1);
  sqcRZGate(q, -0.01834641249348389, 2);
  sqcRZGate(q, -0.03846866490092071, 3);
  sqcRZGate(q, 0.9647865340307287, 4);
  sqcRZGate(q, -0.05608541495501195, 5);
  sqcRZGate(q, -0.0431332189290695, 6);
  sqcRZGate(q, 0.07508447925219483, 7);
  sqcRZGate(q, -0.11354684693751758, 8);
  sqcRZGate(q, 0.03709869880802117, 9);
  sqcRZGate(q, -0.1650885646858311, 10);
  sqcRZGate(q, 0.5897139612901893, 11);

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
