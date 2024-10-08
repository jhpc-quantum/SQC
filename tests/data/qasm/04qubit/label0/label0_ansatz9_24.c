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

  sqcRYGate(q, -1.161795478544484, 0);
  sqcRYGate(q, -3.063799586006515, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.4967569619368017, 0);
  sqcRYGate(q, -0.7395908002799935, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4723019542193148, 2);
  sqcRYGate(q, 1.6115716707192878, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.41743744985935854, 2);
  sqcRYGate(q, 0.3495944222449836, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.0746237004831907, 0);
  sqcRYGate(q, -2.8381740034508445, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.194825673237528, 0);
  sqcRYGate(q, -2.100539747655712, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.44307289338941874, 1);
  sqcRYGate(q, -1.282127796683277, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.157186578474292, 1);
  sqcRYGate(q, -0.3872315183186574, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7524978043604904, 0);
  sqcRYGate(q, 0.219421531908705, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.20042594639024272, 0);
  sqcRYGate(q, 0.5152075124009894, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.7698502696157936, 1);
  sqcRYGate(q, -1.8200483127028404, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.547696227057176, 1);
  sqcRYGate(q, -1.5846445795449444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6707164918244255, 0);
  sqcRYGate(q, -3.0491839832668237, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.46943982323194167, 0);
  sqcRYGate(q, -0.08524777669967154, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8328989906802411, 2);
  sqcRYGate(q, -2.0297735896178613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.584014172271209, 2);
  sqcRYGate(q, 1.3811680520355607, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3305631867608527, 0);
  sqcRYGate(q, 0.23017650558422353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.8032104544793068, 0);
  sqcRYGate(q, 1.9099443733317134, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.321918124166137, 1);
  sqcRYGate(q, 2.443395951586332, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -3.0430952522982273, 1);
  sqcRYGate(q, 1.678862825085677, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.016350077291954, 0);
  sqcRYGate(q, 1.0806843108819768, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.023994397816419, 0);
  sqcRYGate(q, 0.36272650626696024, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.057777498918306, 1);
  sqcRYGate(q, -1.1098551529047924, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.08911772666002629, 1);
  sqcRYGate(q, -2.0024870268961257, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.825019407054423, 0);
  sqcRYGate(q, 0.7964894657477759, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.117230231515048, 0);
  sqcRYGate(q, 0.1101994693078867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.2660965901269732, 2);
  sqcRYGate(q, 2.3696599645561016, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.5577437247991777, 2);
  sqcRYGate(q, 1.5098463289272508, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7687146260348925, 0);
  sqcRYGate(q, -2.935498037554618, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.7968212285008165, 0);
  sqcRYGate(q, -2.7911458593117353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.0828961952180691, 1);
  sqcRYGate(q, 2.535757763495854, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.9643126809680558, 1);
  sqcRYGate(q, 0.9331942115754281, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.196454146405977, 0);
  sqcRYGate(q, 1.7840314447028718, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.228798765896964, 0);
  sqcRYGate(q, 2.4614064583050554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.4643356791346251, 1);
  sqcRYGate(q, -1.0004253375390642, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.94539633596768, 1);
  sqcRYGate(q, 1.6891679868815332, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9079050197176678, 0);
  sqcRYGate(q, -1.843205760540159, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.5902541086888813, 0);
  sqcRYGate(q, 1.3065150951888809, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.820244006164913, 2);
  sqcRYGate(q, 0.7836802941600031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.025176096776514, 2);
  sqcRYGate(q, 2.4553223220387657, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8109608656278722, 0);
  sqcRYGate(q, -0.1307380948611762, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8268720960544345, 0);
  sqcRYGate(q, -0.5730964046248781, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8955162999433856, 1);
  sqcRYGate(q, 0.8645978158903739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.6787784185591291, 1);
  sqcRYGate(q, -1.142621303914151, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.627637144033152, 0);
  sqcRYGate(q, -1.6140016706145102, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.8730314576197797, 0);
  sqcRYGate(q, -2.6513687782105424, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6790161510158834, 1);
  sqcRYGate(q, -2.1322027291505004, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.090789530698636, 1);
  sqcRYGate(q, -1.6234912635413734, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.144541673727969, 0);
  sqcRYGate(q, 1.3170420321608018, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6382076224229403, 0);
  sqcRYGate(q, 0.610743652051566, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.961307611387712, 2);
  sqcRYGate(q, -0.8255208327884613, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.2805087487826716, 2);
  sqcRYGate(q, -2.885048475283018, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9816024722448269, 0);
  sqcRYGate(q, 2.3968974479656864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7066288528604563, 0);
  sqcRYGate(q, 1.7620880920411333, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.527175329462194, 1);
  sqcRYGate(q, 1.5582639132938847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2194265493767098, 1);
  sqcRYGate(q, -0.12295379227692926, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10538300583214119, 0);
  sqcRYGate(q, 1.2450070383608092, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.0771553330047166, 0);
  sqcRYGate(q, -1.4226902931903294, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.854813151478579, 1);
  sqcRYGate(q, 0.005269062516794488, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3971561363463234, 1);
  sqcRYGate(q, 2.8718027999199895, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.406255788041131, 0);
  sqcRYGate(q, 2.8351674216902247, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.798016771438003, 0);
  sqcRYGate(q, -1.3430357092233831, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.6750669642364846, 2);
  sqcRYGate(q, -1.4084211262558881, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.7236527540549833, 2);
  sqcRYGate(q, 2.9602240819663557, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1485852483991907, 0);
  sqcRYGate(q, 1.195757186016274, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.5324691069931804, 0);
  sqcRYGate(q, -2.409771713920674, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8562273531158913, 1);
  sqcRYGate(q, -3.06877737104637, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.9327417661170747, 1);
  sqcRYGate(q, -2.127364659042873, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.39859864519019045, 0);
  sqcRYGate(q, 1.780322745258245, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.0538016042007823, 0);
  sqcRYGate(q, -2.5949586428922675, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5651397734032373, 1);
  sqcRYGate(q, 2.6584203260483874, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0002547666888866, 1);
  sqcRYGate(q, -2.8782853423880743, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.025042963700822, 0);
  sqcRYGate(q, 1.8199739879719639, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.457074053578585, 0);
  sqcRYGate(q, 0.4435344184331802, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.3482385447948756, 2);
  sqcRYGate(q, 2.8805385064800673, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0702237540068777, 2);
  sqcRYGate(q, 0.49590258405619814, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.47153900628030243, 0);
  sqcRYGate(q, -0.9422014641985549, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3271544778220514, 0);
  sqcRYGate(q, 2.9595516570738862, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -3.1297768353589204, 1);
  sqcRYGate(q, -2.0835411261380345, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.284258337338169, 1);
  sqcRYGate(q, -1.1406358011264475, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.924764372061442, 0);
  sqcRYGate(q, 1.06373762465586, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5055032543863787, 0);
  sqcRYGate(q, 3.0711832026071404, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.847779884505071, 1);
  sqcRYGate(q, -3.0202939807919087, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.368116693299782, 1);
  sqcRYGate(q, -1.5070554740763722, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.7407648870699404, 0);
  sqcRYGate(q, 0.6620306642851835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3539695965605318, 0);
  sqcRYGate(q, 1.3946799270705954, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.2259739732838684, 2);
  sqcRYGate(q, -0.11152917500059686, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3957008174119592, 2);
  sqcRYGate(q, -2.478665486421387, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6926630223309589, 0);
  sqcRYGate(q, -0.14641483742442493, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8652223416158078, 0);
  sqcRYGate(q, 1.6680706262545526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7092174593760276, 1);
  sqcRYGate(q, 1.3606384394348794, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.4007779834577847, 1);
  sqcRYGate(q, 2.8887945456904847, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.39894667647122395, 0);
  sqcRYGate(q, -0.5604560596717558, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6930845052630811, 0);
  sqcRYGate(q, 0.20032748187539592, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.090893238316183, 1);
  sqcRYGate(q, 2.784697308740167, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.4967254845860314, 1);
  sqcRYGate(q, 2.809550241895024, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.748914274633312, 0);
  sqcRYGate(q, -2.31446475565655, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4460265461095514, 0);
  sqcRYGate(q, 3.1296554597282378, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.5667291476933307, 2);
  sqcRYGate(q, -2.0663609850307956, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.163503788715916, 2);
  sqcRYGate(q, 2.0303509085085487, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1992443014479495, 0);
  sqcRYGate(q, -0.03224996586550066, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7657257252369581, 0);
  sqcRYGate(q, 3.0750457405388594, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.4987459705988075, 1);
  sqcRYGate(q, -2.047961362849631, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0429700575292893, 1);
  sqcRYGate(q, 0.40272032833566307, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.3171319536443116, 0);
  sqcRYGate(q, -0.4544344440846095, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3970265687247787, 0);
  sqcRYGate(q, -1.3943746292579213, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.2094614629700278, 1);
  sqcRYGate(q, 2.6355485937091045, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6170644751596663, 1);
  sqcRYGate(q, -2.284651598984518, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.3969628727185608, 0);
  sqcRYGate(q, -1.6384823107544502, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.7625052822842022, 0);
  sqcRYGate(q, 1.0230156107676303, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.511957523714897, 2);
  sqcRYGate(q, -0.681415071162061, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.103161861827833, 2);
  sqcRYGate(q, -1.169871950727094, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.661008292954654, 0);
  sqcRYGate(q, -1.2875924339039448, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.6079230854138267, 0);
  sqcRYGate(q, 2.38857772935845, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.808714039390562, 1);
  sqcRYGate(q, -1.8538568203662198, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.7310657645364516, 1);
  sqcRYGate(q, -1.2428635707466764, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.0168479394993755, 0);
  sqcRYGate(q, -1.681718206180558, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.3465464908833804, 0);
  sqcRYGate(q, -1.8369367077513648, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.9281247134195736, 1);
  sqcRYGate(q, 0.5640544281000048, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5998998561667128, 1);
  sqcRYGate(q, -2.703730827903183, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.6048422516786444, 0);
  sqcRYGate(q, 0.9895830298802091, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1080150684609613, 0);
  sqcRYGate(q, -1.348497070511395, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.24186191564417656, 2);
  sqcRYGate(q, 0.5181847436667643, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.22981797868789666, 2);
  sqcRYGate(q, 1.9263506058462598, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.07151877467637, 0);
  sqcRYGate(q, 0.8055027011997529, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.12700540006869163, 0);
  sqcRYGate(q, 0.5963337388033502, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 3.1018368409514365, 1);
  sqcRYGate(q, 1.5028634049855811, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.992707786022738, 1);
  sqcRYGate(q, -2.579381249272295, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.10232070856731122, 0);
  sqcRYGate(q, 1.3224426679497518, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5483729904953323, 0);
  sqcRYGate(q, -1.0027536946974287, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.1230089905416616, 1);
  sqcRYGate(q, 1.2796391870312736, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.017768793918385276, 1);
  sqcRYGate(q, 3.1191672588859416, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.034237998808067105, 0);
  sqcRYGate(q, -1.5930002333503066, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.1453591383226343, 0);
  sqcRYGate(q, -3.061942909354053, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3859532554682816, 2);
  sqcRYGate(q, 0.3686127873137428, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.388893490708441, 2);
  sqcRYGate(q, 1.3595596092766524, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.9949304201482979, 0);
  sqcRYGate(q, 2.30407361080526, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.0702332798931407, 0);
  sqcRYGate(q, -0.7521789666258368, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.1921165074315097, 1);
  sqcRYGate(q, 2.3085630456309776, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.24924294298920646, 1);
  sqcRYGate(q, -0.6014543303101245, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.031634577227128, 0);
  sqcRYGate(q, -0.22574033894907508, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.4992765702144034, 0);
  sqcRYGate(q, 0.6273136667489058, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.8756154441974936, 1);
  sqcRYGate(q, -2.775407084588896, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.689922794111535, 1);
  sqcRYGate(q, -2.3486143470323064, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7537976355759303, 0);
  sqcRYGate(q, 0.5348675775309033, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.421909886636099, 0);
  sqcRYGate(q, -1.6739500485303926, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4172560971331842, 2);
  sqcRYGate(q, 1.5110198879124104, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.0720279365482345, 2);
  sqcRYGate(q, 1.994065872555682, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4813457989409087, 0);
  sqcRYGate(q, 1.8209884244966075, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.6930532514963732, 0);
  sqcRYGate(q, -0.6524131795857759, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.204629426870458, 1);
  sqcRYGate(q, -2.777795932991739, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.960295794561603, 1);
  sqcRYGate(q, 3.052953090075315, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.2083217326172226, 0);
  sqcRYGate(q, -0.13948182634649609, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.6598941958260269, 0);
  sqcRYGate(q, -2.735288664542134, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7771794798125773, 1);
  sqcRYGate(q, -2.102134067909538, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.7194071453761275, 1);
  sqcRYGate(q, 1.3847415569548573, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.5353417270593446, 0);
  sqcRYGate(q, -1.1314736672803118, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.08441930280491938, 0);
  sqcRYGate(q, -0.4309687191526479, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.6893869988828345, 2);
  sqcRYGate(q, 1.9451364926126207, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.336873716344108, 2);
  sqcRYGate(q, 2.6114765438767176, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.9923177718363014, 0);
  sqcRYGate(q, -1.0416163010329171, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.558472815919559, 0);
  sqcRYGate(q, 2.4705068701608353, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.68898397487325, 1);
  sqcRYGate(q, -2.4941530209463223, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.070291526013519, 1);
  sqcRYGate(q, -0.498631854953358, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.1253419126376816, 0);
  sqcRYGate(q, 0.3985872034856947, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.7501748948565765, 0);
  sqcRYGate(q, -1.0528730043700583, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.3856927907816141, 1);
  sqcRYGate(q, -1.4252274250918155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.677088329939839, 1);
  sqcRYGate(q, 1.593569734939381, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.9369181225934368, 0);
  sqcRYGate(q, 0.0379350162200609, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.511362691810219, 0);
  sqcRYGate(q, 0.8796096275761682, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.6148801822587882, 2);
  sqcRYGate(q, -0.5152969983736538, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.4903758957463342, 2);
  sqcRYGate(q, 1.5528898328985798, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.2579692133041809, 0);
  sqcRYGate(q, -1.4537335574202561, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.208159412979535, 0);
  sqcRYGate(q, 0.21360486043057225, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.3398114879128524, 1);
  sqcRYGate(q, 0.7741877647535187, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.4841636308031636, 1);
  sqcRYGate(q, 2.07888770547954, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.545374406381415, 0);
  sqcRYGate(q, 0.9868658290725554, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.022931709382591314, 0);
  sqcRYGate(q, 2.244152649116282, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.6417397265376175, 1);
  sqcRYGate(q, -2.496138107592204, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.8259750749753306, 1);
  sqcRYGate(q, -2.1954703290895106, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.7021744424544, 0);
  sqcRYGate(q, -2.5467785849970017, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.42392539832420395, 0);
  sqcRYGate(q, -0.40921006816320826, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.14904409127343765, 2);
  sqcRYGate(q, 3.01013806471899, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.3520802422508593, 2);
  sqcRYGate(q, 2.6719905407866906, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.0756369263361574, 0);
  sqcRYGate(q, -3.0716379917020933, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.178149185483918, 0);
  sqcRYGate(q, -3.00590602039175, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.8222803461245003, 1);
  sqcRYGate(q, -0.6659124755450762, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0275424584829533, 1);
  sqcRYGate(q, -0.4618114927333136, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.7477744630163436, 0);
  sqcRYGate(q, 2.367312755745512, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.5866457292895056, 0);
  sqcRYGate(q, -2.1768665023584495, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2141546799737304, 1);
  sqcRYGate(q, 2.310902825998912, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.0342530306107767, 1);
  sqcRYGate(q, 0.50122339699434, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.0052028994814337, 0);
  sqcRYGate(q, -2.2041900906964442, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8786836120358665, 0);
  sqcRYGate(q, 2.8353930302442367, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.961151042573715, 2);
  sqcRYGate(q, -0.5100305892779712, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.8866975168066504, 2);
  sqcRYGate(q, 3.043333780979411, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.7255929075290455, 0);
  sqcRYGate(q, -1.366890642363801, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.7183491556642736, 0);
  sqcRYGate(q, 1.321228685818201, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.7653158403061062, 1);
  sqcRYGate(q, -2.1344656662006534, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7845149413547617, 1);
  sqcRYGate(q, 0.6195560684036382, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.2257190849527557, 0);
  sqcRYGate(q, 2.841020699185528, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.0807442995508225, 0);
  sqcRYGate(q, 1.780386114978643, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.1492809964623836, 1);
  sqcRYGate(q, -1.0758937562842452, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.4294814611038573, 1);
  sqcRYGate(q, 2.9557744555530934, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.540532130801073, 0);
  sqcRYGate(q, 1.9400652116395893, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.5996664805528753, 0);
  sqcRYGate(q, 1.75201242649362, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.10484295012653379, 2);
  sqcRYGate(q, -1.4005558501212936, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8531744030727441, 2);
  sqcRYGate(q, -2.492480253556665, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.1882462181866105, 0);
  sqcRYGate(q, 1.4529572405023952, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.8323403108672898, 0);
  sqcRYGate(q, 0.37304292685714024, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.902764790511613, 1);
  sqcRYGate(q, -2.040286720075618, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 1.5639790047572113, 1);
  sqcRYGate(q, 0.7822872535035683, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.07449717745466078, 0);
  sqcRYGate(q, 0.5776986351290576, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.36819944282769435, 0);
  sqcRYGate(q, 2.5042281817746437, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.2585895305590258, 1);
  sqcRYGate(q, -0.472443204798979, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.09689157496197366, 1);
  sqcRYGate(q, -0.02998668346627476, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.914429147872664, 0);
  sqcRYGate(q, 2.717750018427985, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6292032156581577, 0);
  sqcRYGate(q, 1.3677963562808086, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9525448554883233, 2);
  sqcRYGate(q, -2.4657474907602945, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.0724184409506257, 2);
  sqcRYGate(q, 0.4528317571638718, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.919771968113647, 0);
  sqcRYGate(q, -1.3686579253218814, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.22529569631150642, 0);
  sqcRYGate(q, 0.974962574237238, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.5036237359148856, 1);
  sqcRYGate(q, -3.1021178953427224, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.29342781492791575, 1);
  sqcRYGate(q, 1.9978145957744013, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.3990514823123117, 0);
  sqcRYGate(q, 2.7175437583405695, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.833665664191635, 0);
  sqcRYGate(q, -0.11829594542317512, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.832502836791533, 1);
  sqcRYGate(q, 0.6922962544789002, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.159670554339733, 1);
  sqcRYGate(q, 0.25543322916115413, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.7820979445101877, 0);
  sqcRYGate(q, 2.5788857154034397, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.8551328307673898, 0);
  sqcRYGate(q, -0.7310610854171304, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.2436254591668936, 2);
  sqcRYGate(q, -0.27076002184455916, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.8987433566844034, 2);
  sqcRYGate(q, -1.378621946614669, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.8284296586960984, 0);
  sqcRYGate(q, -2.969824514147864, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.0269329763458233, 0);
  sqcRYGate(q, -1.1157142845060344, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.7500652452390817, 1);
  sqcRYGate(q, -1.3913307945649942, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.7752523632277564, 1);
  sqcRYGate(q, 1.1879534384266723, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.40619646040588986, 0);
  sqcRYGate(q, -0.813794727491481, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -3.0948351207631393, 0);
  sqcRYGate(q, 1.73847352432308, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.185883016466576, 1);
  sqcRYGate(q, 0.21428999795958625, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.8546563509763052, 1);
  sqcRYGate(q, 0.41371681646175423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6271574221675138, 0);
  sqcRYGate(q, 0.41890365452354317, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5552210454518525, 0);
  sqcRYGate(q, 2.699888988269272, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.3570824304409612, 2);
  sqcRYGate(q, -1.3963126144634144, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.6662281364559033, 2);
  sqcRYGate(q, -2.8564553528218233, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.3013790852632503, 0);
  sqcRYGate(q, 2.3675083875507417, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.9970932727398543, 0);
  sqcRYGate(q, 2.9915933159848755, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.35420631965532845, 1);
  sqcRYGate(q, 1.4518216443645036, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.385716213407873, 1);
  sqcRYGate(q, -0.8161073167053273, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.8869727119511197, 0);
  sqcRYGate(q, -2.1892100700753656, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -2.8991162715147554, 0);
  sqcRYGate(q, -1.8114306919357321, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7353298616921178, 1);
  sqcRYGate(q, 1.1203921607924627, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.0453775735252933, 1);
  sqcRYGate(q, -2.644155106363423, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.6650440581130077, 0);
  sqcRYGate(q, 0.2411132377586835, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.745908922699615, 0);
  sqcRYGate(q, -2.3627451813503546, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.82209398894322, 2);
  sqcRYGate(q, 0.7825978859030432, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.2457922921392584, 2);
  sqcRYGate(q, 0.42259292892889666, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.3962307665142974, 0);
  sqcRYGate(q, -3.1184134129997427, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6355949779126073, 0);
  sqcRYGate(q, -2.568056592992229, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.8832427593271879, 1);
  sqcRYGate(q, -0.7515169041741316, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -2.0999390913224603, 1);
  sqcRYGate(q, 0.5074827037410437, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.094423999760267, 0);
  sqcRYGate(q, 0.7976810998803989, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.33433219181128543, 0);
  sqcRYGate(q, 2.937384493573884, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.7831212658746239, 1);
  sqcRYGate(q, -1.416412919339056, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.6807208293992393, 1);
  sqcRYGate(q, -1.253922895454834, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.466985753471331, 0);
  sqcRYGate(q, -0.8161748297377196, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8662167910368643, 0);
  sqcRYGate(q, -0.5137206598710145, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -0.8700189761318206, 2);
  sqcRYGate(q, 0.5666150755663485, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.9449569562204092, 2);
  sqcRYGate(q, -2.6766790516786845, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.290648984291389, 0);
  sqcRYGate(q, 0.18950450496910598, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.7712685937306558, 0);
  sqcRYGate(q, 1.6494883231232111, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.7167496023934845, 1);
  sqcRYGate(q, -2.7333870979475585, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.03698234551747823, 1);
  sqcRYGate(q, 2.32757597509459, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 2.154884673898251, 0);
  sqcRYGate(q, 1.7997933540263942, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.1126584900108067, 0);
  sqcRYGate(q, -0.8236967216528795, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.848605185649091, 1);
  sqcRYGate(q, -0.8716327178354373, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.13842463332049437, 1);
  sqcRYGate(q, -3.009206997552155, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5328640364968541, 0);
  sqcRYGate(q, 0.6650601532403764, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.3071394416072395, 0);
  sqcRYGate(q, -1.1345061409837962, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5344384333740284, 2);
  sqcRYGate(q, 2.480285275489317, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.164772918069625, 2);
  sqcRYGate(q, 2.5880650249493864, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.350592885499296, 0);
  sqcRYGate(q, -2.6257813756336565, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 0.8241479705166259, 0);
  sqcRYGate(q, 2.3637790948840296, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 1.9731996114067785, 1);
  sqcRYGate(q, 3.026753577999447, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.229607629744744, 1);
  sqcRYGate(q, -1.3378112040414587, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -0.4058140927253282, 0);
  sqcRYGate(q, -1.6302115741521375, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 0.5605564758647468, 0);
  sqcRYGate(q, -2.8200022356293313, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.945754511293571, 1);
  sqcRYGate(q, 0.7676457623657811, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 2.6799101215853334, 1);
  sqcRYGate(q, -1.323994136333205, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.3922045994642402, 0);
  sqcRYGate(q, -0.3173770561646596, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.4830194866518589, 0);
  sqcRYGate(q, -2.071273671151715, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.9846332845407604, 2);
  sqcRYGate(q, -0.3333967154804147, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.063921005769585, 2);
  sqcRYGate(q, -1.8369473596875077, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.176331649888601, 0);
  sqcRYGate(q, 1.8168983441134772, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.2125988815889764, 0);
  sqcRYGate(q, -0.5989285633443326, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -0.5263777012636943, 1);
  sqcRYGate(q, -0.5131407920308603, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.05906089037162765, 1);
  sqcRYGate(q, 1.3869792100034426, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.080519320192403, 0);
  sqcRYGate(q, -2.3963654060781967, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 2.751489951186559, 0);
  sqcRYGate(q, 0.9526507897814147, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 1.8560942564084002, 1);
  sqcRYGate(q, -2.9673029736029326, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.481639785259282, 1);
  sqcRYGate(q, -2.9920588603330636, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.18502387079936478, 0);
  sqcRYGate(q, 1.6637378327446903, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.4922351965874787, 0);
  sqcRYGate(q, 1.0370329413047152, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.7796106209312046, 2);
  sqcRYGate(q, 1.5875462927222443, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.11852493305339125, 2);
  sqcRYGate(q, -0.9648589080251568, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.8830188188437954, 0);
  sqcRYGate(q, 3.0577719073827194, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.944696049121806, 0);
  sqcRYGate(q, -1.808926467867935, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -1.6424444019671214, 1);
  sqcRYGate(q, -2.8134512858719236, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 0.5580505578229821, 1);
  sqcRYGate(q, -2.0296509215014917, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.5393693519937106, 0);
  sqcRYGate(q, 1.4037161858520981, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.5960297934044787, 0);
  sqcRYGate(q, -0.49288625892337024, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -0.31513821826601784, 1);
  sqcRYGate(q, -0.596958302536569, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -0.5631836118671744, 1);
  sqcRYGate(q, -2.0916782357699724, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.2901463116860099, 0);
  sqcRYGate(q, 2.1621436079246035, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.4595192557665158, 0);
  sqcRYGate(q, 2.5930100325041905, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.5863902777768084, 2);
  sqcRYGate(q, 1.3606196738986849, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5698053131492347, 2);
  sqcRYGate(q, -1.6905191396362405, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.31584004772785806, 0);
  sqcRYGate(q, -1.1712230108769828, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, -2.5148742505260095, 0);
  sqcRYGate(q, -0.03158484537355832, 2);
  sqcCXGate(q, 0, 2);
  sqcRYGate(q, 2.9214182364540053, 1);
  sqcRYGate(q, -1.8017956004779503, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, 3.0338720199061378, 1);
  sqcRYGate(q, 0.055397992709937505, 3);
  sqcCXGate(q, 1, 3);
  sqcRYGate(q, -1.4351702982171215, 0);
  sqcRYGate(q, -2.979729928322838, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, -1.6165399067638324, 0);
  sqcRYGate(q, -2.329201550264417, 3);
  sqcCXGate(q, 0, 3);
  sqcRYGate(q, 3.025307943551914, 1);
  sqcRYGate(q, 1.4478801238324361, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.4159450004438145, 1);
  sqcRYGate(q, 1.8984769697732444, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5134437359674822, 0);
  sqcRYGate(q, -2.814590129306539, 1);
  sqcRYGate(q, -0.979760350824793, 2);
  sqcRYGate(q, 1.3767457850365603, 3);

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
