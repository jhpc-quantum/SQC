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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 0.02243177189865721, 0);
  sqcRZGate(q, -0.1757385800842714, 0);
  sqcRYGate(q, 2.942177831864275, 1);
  sqcRZGate(q, 2.5076741651738277, 1);
  sqcRYGate(q, -1.2571538157518043, 2);
  sqcRZGate(q, -0.16718606631601893, 2);
  sqcRYGate(q, 0.6631616331277916, 3);
  sqcRZGate(q, 2.4558103370127617, 3);
  sqcRYGate(q, -0.0014607076985709315, 4);
  sqcRZGate(q, 1.1309092653004167, 4);
  sqcRYGate(q, 0.003363025333253581, 5);
  sqcRZGate(q, -2.472281254641741, 5);
  sqcRYGate(q, -1.6187797998953979, 6);
  sqcRZGate(q, -0.1293597856511113, 6);
  sqcRYGate(q, 1.591787693481967, 7);
  sqcRZGate(q, -0.21752665708098373, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -1.6432787455948115, 0);
  sqcRZGate(q, -0.4711775830288713, 0);
  sqcRYGate(q, -1.924699802666382, 1);
  sqcRZGate(q, 0.7077609025704872, 1);
  sqcRYGate(q, -1.5068276074076303, 2);
  sqcRZGate(q, 1.4931467505348373, 2);
  sqcRYGate(q, -1.1735553630407465, 3);
  sqcRZGate(q, -2.569064983923413, 3);
  sqcRYGate(q, -1.616661001424939, 4);
  sqcRZGate(q, -2.8979675836339487, 4);
  sqcRYGate(q, 1.6699132072269247, 5);
  sqcRZGate(q, -2.0024337370974004, 5);
  sqcRYGate(q, -2.050322461752632, 6);
  sqcRZGate(q, 1.6961319496701115, 6);
  sqcRYGate(q, -0.48530964869850557, 7);
  sqcRZGate(q, -2.1403443723080717, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.029868878733627646, 0);
  sqcRZGate(q, 2.430239234265663, 0);
  sqcRYGate(q, -3.0830560759033876, 1);
  sqcRZGate(q, 2.780361198660537, 1);
  sqcRYGate(q, -3.131110049373455, 2);
  sqcRZGate(q, -1.9125226448297141, 2);
  sqcRYGate(q, 3.128242349221853, 3);
  sqcRZGate(q, -2.7211366346664456, 3);
  sqcRYGate(q, -0.023656095079983785, 4);
  sqcRZGate(q, 1.2657455648758786, 4);
  sqcRYGate(q, 0.017253224723877025, 5);
  sqcRZGate(q, 0.42153886831923704, 5);
  sqcRYGate(q, 3.1375200649727817, 6);
  sqcRZGate(q, 0.2485016249616807, 6);
  sqcRYGate(q, 3.1396412089623547, 7);
  sqcRZGate(q, -2.5075885930356447, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.2190972165165661, 0);
  sqcRZGate(q, 2.892746878590585, 0);
  sqcRYGate(q, -0.6693177912549659, 1);
  sqcRZGate(q, 2.0786063043993024, 1);
  sqcRYGate(q, 1.6788792421036016, 2);
  sqcRZGate(q, 0.2121932520424199, 2);
  sqcRYGate(q, 1.0234172425759374, 3);
  sqcRZGate(q, -1.2869847657335154, 3);
  sqcRYGate(q, 2.4479725397249794, 4);
  sqcRZGate(q, 1.5022265077271113, 4);
  sqcRYGate(q, -1.6362716739110386, 5);
  sqcRZGate(q, 1.4706351179183583, 5);
  sqcRYGate(q, -3.1003936098938074, 6);
  sqcRZGate(q, -2.095133688811364, 6);
  sqcRYGate(q, -3.1410799020617843, 7);
  sqcRZGate(q, 1.378834460432278, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -2.9447717661701907, 0);
  sqcRZGate(q, -3.0900963889549056, 0);
  sqcRYGate(q, -0.010989292289235496, 1);
  sqcRZGate(q, -0.8855428179427562, 1);
  sqcRYGate(q, 1.421451072551056, 2);
  sqcRZGate(q, -3.0962581440967605, 2);
  sqcRYGate(q, 2.105562338856666, 3);
  sqcRZGate(q, -3.107359820614514, 3);
  sqcRYGate(q, -1.8641235137207122, 4);
  sqcRZGate(q, 0.21285672437755299, 4);
  sqcRYGate(q, 1.218625615372713, 5);
  sqcRZGate(q, -0.7122359757807573, 5);
  sqcRYGate(q, -3.1312047819679507, 6);
  sqcRZGate(q, -0.4262331628066968, 6);
  sqcRYGate(q, 0.057746626590333416, 7);
  sqcRZGate(q, -1.8682329616410478, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.1497712184857225, 0);
  sqcRZGate(q, 0.011530572587035104, 0);
  sqcRYGate(q, 3.132443363972415, 1);
  sqcRZGate(q, -0.40033004102985603, 1);
  sqcRYGate(q, -1.7137684399582918, 2);
  sqcRZGate(q, -1.9254067770856746, 2);
  sqcRYGate(q, -2.0753827218996515, 3);
  sqcRZGate(q, 1.1368405811193139, 3);
  sqcRYGate(q, 3.0913539488283504, 4);
  sqcRZGate(q, 0.916593395743555, 4);
  sqcRYGate(q, -0.040425734603881526, 5);
  sqcRZGate(q, 0.11532687899220662, 5);
  sqcRYGate(q, 0.16269784246008534, 6);
  sqcRZGate(q, 2.141669977365968, 6);
  sqcRYGate(q, -0.1897335318484876, 7);
  sqcRZGate(q, 2.7202893493063063, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.0221237945250863, 0);
  sqcRZGate(q, 2.3563207421150887, 0);
  sqcRYGate(q, -2.317253438936814, 1);
  sqcRZGate(q, -0.15750864380948837, 1);
  sqcRYGate(q, 2.3205376566974074, 2);
  sqcRZGate(q, -2.0584723611961806, 2);
  sqcRYGate(q, -2.1724201844869064, 3);
  sqcRZGate(q, -1.688320140310221, 3);
  sqcRYGate(q, -2.930941219370744, 4);
  sqcRZGate(q, -1.0128118385388891, 4);
  sqcRYGate(q, 1.025767122608781, 5);
  sqcRZGate(q, -0.6387728981809033, 5);
  sqcRYGate(q, -1.421317400649057, 6);
  sqcRZGate(q, 1.114274894464816, 6);
  sqcRYGate(q, 3.136018032106237, 7);
  sqcRZGate(q, -0.008371546083845468, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, -0.7468803154159839, 0);
  sqcRZGate(q, -2.5653766884506983, 0);
  sqcRYGate(q, -2.619308273341406, 1);
  sqcRZGate(q, -0.645038840292323, 1);
  sqcRYGate(q, -0.00023078992403499285, 2);
  sqcRZGate(q, 2.998667364001143, 2);
  sqcRYGate(q, -0.0014303387137992087, 3);
  sqcRZGate(q, 1.343168935875842, 3);
  sqcRYGate(q, 0.0021855369495952315, 4);
  sqcRZGate(q, -1.5185853635244815, 4);
  sqcRYGate(q, -0.0019888381566123296, 5);
  sqcRZGate(q, 2.151677160929416, 5);
  sqcRYGate(q, -3.1317584499030704, 6);
  sqcRZGate(q, -1.975319006904676, 6);
  sqcRYGate(q, 3.090518520098082, 7);
  sqcRZGate(q, 1.8174833193709743, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.1806912173222983, 0);
  sqcRZGate(q, -2.624538273244399, 0);
  sqcRYGate(q, 2.2519318806090776, 1);
  sqcRZGate(q, -2.9992877400677753, 1);
  sqcRYGate(q, -1.9269948242442485, 2);
  sqcRZGate(q, 2.529389624693234, 2);
  sqcRYGate(q, -2.0889409131722214, 3);
  sqcRZGate(q, 1.0801996206290578, 3);
  sqcRYGate(q, 0.9398774820414175, 4);
  sqcRZGate(q, -1.3988972618900015, 4);
  sqcRYGate(q, -2.6210326086367326, 5);
  sqcRZGate(q, 2.761673395549705, 5);
  sqcRYGate(q, 1.4625569261209197, 6);
  sqcRZGate(q, -2.4357921512432195, 6);
  sqcRYGate(q, -3.1230909821333723, 7);
  sqcRZGate(q, 2.2740914151021565, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.5472571988640476, 0);
  sqcRZGate(q, 2.2311907804605893, 0);
  sqcRYGate(q, 3.0955380540794666, 1);
  sqcRZGate(q, 2.459319490256835, 1);
  sqcRYGate(q, -0.045374596334106926, 2);
  sqcRZGate(q, -0.40622094227264743, 2);
  sqcRYGate(q, -3.0678865425391675, 3);
  sqcRZGate(q, 0.8996066229621507, 3);
  sqcRYGate(q, 1.9324200114122438, 4);
  sqcRZGate(q, -1.8536024398989197, 4);
  sqcRYGate(q, -2.3328560465520645, 5);
  sqcRZGate(q, 1.3558966847848972, 5);
  sqcRYGate(q, 1.7114165212008714, 6);
  sqcRZGate(q, -1.693962139854004, 6);
  sqcRYGate(q, 2.1694626949645546, 7);
  sqcRZGate(q, 0.5896705387822492, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.3994332647633563, 0);
  sqcRZGate(q, 2.0821302792908094, 0);
  sqcRYGate(q, -0.8069449055385605, 1);
  sqcRZGate(q, -2.263188742325174, 1);
  sqcRYGate(q, 0.9638526114283592, 2);
  sqcRZGate(q, -0.8938710837607386, 2);
  sqcRYGate(q, 0.6604369625825398, 3);
  sqcRZGate(q, -2.1601095170811004, 3);
  sqcRYGate(q, 3.112802963956368, 4);
  sqcRZGate(q, -0.5533032764607075, 4);
  sqcRYGate(q, 3.1140732413173944, 5);
  sqcRZGate(q, -0.1493858029704032, 5);
  sqcRYGate(q, -2.8453604665804684, 6);
  sqcRZGate(q, -3.108627697136219, 6);
  sqcRYGate(q, 1.623760025507077, 7);
  sqcRZGate(q, -1.3162864074799792, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.09106583449917968, 0);
  sqcRZGate(q, 0.06472539016499038, 0);
  sqcRYGate(q, -1.2695161731443707, 1);
  sqcRZGate(q, -3.035531753956498, 1);
  sqcRYGate(q, 0.042161205850267613, 2);
  sqcRZGate(q, -0.9150112937617766, 2);
  sqcRYGate(q, 0.042571073763616595, 3);
  sqcRZGate(q, 1.6397415761788567, 3);
  sqcRYGate(q, -3.136136727837516, 4);
  sqcRZGate(q, 2.7383023324176476, 4);
  sqcRYGate(q, 3.084536691438268, 5);
  sqcRZGate(q, 1.964287097106925, 5);
  sqcRYGate(q, 0.2342452747207272, 6);
  sqcRZGate(q, 0.6623586263284817, 6);
  sqcRYGate(q, -1.4048735281339164, 7);
  sqcRZGate(q, 2.735933789894616, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 1.754679848466421, 0);
  sqcRZGate(q, -0.597444950701236, 0);
  sqcRYGate(q, 0.7773943849765624, 1);
  sqcRZGate(q, -0.8359956628984591, 1);
  sqcRYGate(q, 3.1189411466595383, 2);
  sqcRZGate(q, -2.716621025315585, 2);
  sqcRYGate(q, -2.603114081833177, 3);
  sqcRZGate(q, 2.3407128918921294, 3);
  sqcRYGate(q, 2.013258887826246, 4);
  sqcRZGate(q, 1.1114886125336854, 4);
  sqcRYGate(q, 2.466452272430163, 5);
  sqcRZGate(q, -1.1920024385170658, 5);
  sqcRYGate(q, -1.1749147083838691, 6);
  sqcRZGate(q, -1.6044209556364113, 6);
  sqcRYGate(q, 1.659640450605755, 7);
  sqcRZGate(q, -2.29970094314369, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 3.106039293808282, 0);
  sqcRZGate(q, 0.8511710615929671, 0);
  sqcRYGate(q, 0.0008663276526448271, 1);
  sqcRZGate(q, -1.7806005574727741, 1);
  sqcRYGate(q, -3.1402447348732245, 2);
  sqcRZGate(q, 2.0855044827632976, 2);
  sqcRYGate(q, -0.0006569238211687799, 3);
  sqcRZGate(q, 0.7480417322437595, 3);
  sqcRYGate(q, -3.12094932817762, 4);
  sqcRZGate(q, -2.04590185368588, 4);
  sqcRYGate(q, 3.1205118919923422, 5);
  sqcRZGate(q, -0.24722306985730036, 5);
  sqcRYGate(q, -3.1353627829659927, 6);
  sqcRZGate(q, 2.532778512955361, 6);
  sqcRYGate(q, 0.07640327464012658, 7);
  sqcRZGate(q, 1.4668504540745158, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 2.046383466763286, 0);
  sqcRZGate(q, -2.7049214203693444, 0);
  sqcRYGate(q, 0.4469484155161511, 1);
  sqcRZGate(q, 2.5265269740505873, 1);
  sqcRYGate(q, 0.06760715466734969, 2);
  sqcRZGate(q, 1.3061155864628962, 2);
  sqcRYGate(q, 0.4661741538578914, 3);
  sqcRZGate(q, 1.5366725456086368, 3);
  sqcRYGate(q, -1.9092197969674842, 4);
  sqcRZGate(q, -0.5282690632120904, 4);
  sqcRYGate(q, -1.2990665530302752, 5);
  sqcRZGate(q, -2.8518287501404918, 5);
  sqcRYGate(q, -2.986861610579732, 6);
  sqcRZGate(q, 1.2484876045755322, 6);
  sqcRYGate(q, 0.4163270034494655, 7);
  sqcRZGate(q, -1.5929983422050613, 7);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcCZGate(q, 2, 5);
  sqcCZGate(q, 3, 4);
  sqcCZGate(q, 4, 7);
  sqcCZGate(q, 5, 6);
  sqcRYGate(q, 0.34394333900191326, 0);
  sqcRZGate(q, -1.6233997542406833, 0);
  sqcRYGate(q, 2.8226900108017055, 1);
  sqcRZGate(q, 1.868846302522034, 1);
  sqcRYGate(q, -2.439766667792743, 2);
  sqcRZGate(q, 0.4839972157840764, 2);
  sqcRYGate(q, 2.473566096348716, 3);
  sqcRZGate(q, -2.7131723381697697, 3);
  sqcRYGate(q, 1.7461474225027063, 4);
  sqcRZGate(q, 1.1457669550114784, 4);
  sqcRYGate(q, 1.368082017234882, 5);
  sqcRZGate(q, 0.2663547241209665, 5);
  sqcRYGate(q, -1.216341663766596, 6);
  sqcRZGate(q, 1.7687269252519393, 6);
  sqcRYGate(q, -1.983593299586248, 7);
  sqcRZGate(q, -1.358523197417848, 7);

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
