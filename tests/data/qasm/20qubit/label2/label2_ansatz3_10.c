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
  q = sqcQuantumCircuit(20);

  sqcRYGate(q, 1.5523432570997417, 0);
  sqcRZGate(q, 1.6461274836436035, 0);
  sqcRYGate(q, 1.8146097355486672, 1);
  sqcRZGate(q, 2.7733175751496777, 1);
  sqcRYGate(q, 1.008261846833791, 2);
  sqcRZGate(q, 0.21706219565367402, 2);
  sqcRYGate(q, -2.1057299425571987, 3);
  sqcRZGate(q, -0.889047451156016, 3);
  sqcRYGate(q, -1.132301560308719, 4);
  sqcRZGate(q, 1.5058941350927846, 4);
  sqcRYGate(q, -0.46382870232714435, 5);
  sqcRZGate(q, -1.544296888636365, 5);
  sqcRYGate(q, -0.00915960604083299, 6);
  sqcRZGate(q, 0.6708108213637525, 6);
  sqcRYGate(q, -3.1395947069260126, 7);
  sqcRZGate(q, -0.13840147021320523, 7);
  sqcRYGate(q, -3.134580425735498, 8);
  sqcRZGate(q, -0.9201246778904649, 8);
  sqcRYGate(q, 3.0948988342184682, 9);
  sqcRZGate(q, 0.04212158101511143, 9);
  sqcRYGate(q, -0.13495268736309107, 10);
  sqcRZGate(q, -2.9061933478577724, 10);
  sqcRYGate(q, 3.0473562474172398, 11);
  sqcRZGate(q, 2.763527966780617, 11);
  sqcRYGate(q, -3.011331525977298, 12);
  sqcRZGate(q, -3.0046451780984254, 12);
  sqcRYGate(q, -3.0721286654803817, 13);
  sqcRZGate(q, -1.2019293054071358, 13);
  sqcRYGate(q, 0.0687404127991682, 14);
  sqcRZGate(q, -1.0158848321844616, 14);
  sqcRYGate(q, 3.1126419517538384, 15);
  sqcRZGate(q, 3.1087003311852124, 15);
  sqcRYGate(q, 1.0698282206291747, 16);
  sqcRZGate(q, 1.7238251300018383, 16);
  sqcRYGate(q, -3.118242792825845, 17);
  sqcRZGate(q, 1.3125486162657032, 17);
  sqcRYGate(q, -1.775092356750923, 18);
  sqcRZGate(q, 2.741663827079389, 18);
  sqcRYGate(q, 1.1997275909166358, 19);
  sqcRZGate(q, -0.32607565820695755, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.5066927784987327, 0);
  sqcRZGate(q, 1.8647566094825647, 0);
  sqcRYGate(q, -1.2462114045490862, 1);
  sqcRZGate(q, -2.926790347409064, 1);
  sqcRYGate(q, -1.5329528675659383, 2);
  sqcRZGate(q, -0.8934905251964748, 2);
  sqcRYGate(q, -0.018724761774539238, 3);
  sqcRZGate(q, -2.285576371497043, 3);
  sqcRYGate(q, -1.5205775846441858, 4);
  sqcRZGate(q, 2.906214226823438, 4);
  sqcRYGate(q, -1.5808807536520755, 5);
  sqcRZGate(q, 1.9510797353964726, 5);
  sqcRYGate(q, -3.1402710899172264, 6);
  sqcRZGate(q, -1.860136585854712, 6);
  sqcRYGate(q, -3.1381686842583902, 7);
  sqcRZGate(q, -3.106766566720034, 7);
  sqcRYGate(q, -0.03699612756416707, 8);
  sqcRZGate(q, 3.0120595071406293, 8);
  sqcRYGate(q, -0.1494379186392808, 9);
  sqcRZGate(q, -1.5533556836769682, 9);
  sqcRYGate(q, 0.14117951717141913, 10);
  sqcRZGate(q, 0.9874377144336526, 10);
  sqcRYGate(q, 0.4721661019570895, 11);
  sqcRZGate(q, 1.4888019701545052, 11);
  sqcRYGate(q, 1.3810264361479734, 12);
  sqcRZGate(q, -0.1419567480073356, 12);
  sqcRYGate(q, -0.03647494684063801, 13);
  sqcRZGate(q, -2.205717215133189, 13);
  sqcRYGate(q, -0.5639052538450313, 14);
  sqcRZGate(q, -1.744577538594136, 14);
  sqcRYGate(q, -0.03237849282910243, 15);
  sqcRZGate(q, -2.1026670582301894, 15);
  sqcRYGate(q, 1.8088773676637888, 16);
  sqcRZGate(q, -2.9274166895287244, 16);
  sqcRYGate(q, -0.010288012356002518, 17);
  sqcRZGate(q, -2.2990557261942293, 17);
  sqcRYGate(q, -0.13592370190183217, 18);
  sqcRZGate(q, -0.9487708721514947, 18);
  sqcRYGate(q, -0.0014574067538264401, 19);
  sqcRZGate(q, 1.4057557846071884, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.9283433207309315, 0);
  sqcRZGate(q, -2.4761978648302923, 0);
  sqcRYGate(q, 0.33755119748854495, 1);
  sqcRZGate(q, 0.21560920232416686, 1);
  sqcRYGate(q, -3.1279898494493934, 2);
  sqcRZGate(q, 2.103886719954572, 2);
  sqcRYGate(q, -2.753357687520744, 3);
  sqcRZGate(q, 0.01843933465347665, 3);
  sqcRYGate(q, 1.6552119879919172, 4);
  sqcRZGate(q, 0.7258984733789157, 4);
  sqcRYGate(q, 1.0708774479807346, 5);
  sqcRZGate(q, 2.1362241907257817, 5);
  sqcRYGate(q, 1.5534543165489403, 6);
  sqcRZGate(q, -0.263938751696255, 6);
  sqcRYGate(q, 0.00013680391378434464, 7);
  sqcRZGate(q, 0.11105247270632468, 7);
  sqcRYGate(q, -0.04419065835403568, 8);
  sqcRZGate(q, -0.30832808066697215, 8);
  sqcRYGate(q, -1.5713565954213653, 9);
  sqcRZGate(q, 2.594370195927617, 9);
  sqcRYGate(q, 3.1281711910089056, 10);
  sqcRZGate(q, -2.001029401862574, 10);
  sqcRYGate(q, 1.523557655862251, 11);
  sqcRZGate(q, 0.8349681677997038, 11);
  sqcRYGate(q, 3.066674045694818, 12);
  sqcRZGate(q, 1.5968562839026041, 12);
  sqcRYGate(q, -1.553418233286802, 13);
  sqcRZGate(q, -2.1680379732547346, 13);
  sqcRYGate(q, 3.139617316119751, 14);
  sqcRZGate(q, -1.367258039609961, 14);
  sqcRYGate(q, 3.1354102899403884, 15);
  sqcRZGate(q, 0.672578355218318, 15);
  sqcRYGate(q, 2.8467679379428454, 16);
  sqcRZGate(q, -3.061577125085152, 16);
  sqcRYGate(q, -1.2185803714871917, 17);
  sqcRZGate(q, -2.3561756060269405, 17);
  sqcRYGate(q, -1.4117414846800775, 18);
  sqcRZGate(q, 0.023822352247130276, 18);
  sqcRYGate(q, -0.16135473793728217, 19);
  sqcRZGate(q, -1.6005180672756376, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.7481681046931863, 0);
  sqcRZGate(q, -2.1978597031673113, 0);
  sqcRYGate(q, 1.633736135855159, 1);
  sqcRZGate(q, -0.4021893097796045, 1);
  sqcRYGate(q, 0.13250924439375655, 2);
  sqcRZGate(q, 3.017889715950756, 2);
  sqcRYGate(q, -1.513665727567612, 3);
  sqcRZGate(q, 1.2305775112782875, 3);
  sqcRYGate(q, 3.1382460162568666, 4);
  sqcRZGate(q, -1.3220939795773168, 4);
  sqcRYGate(q, 2.3050594233086903, 5);
  sqcRZGate(q, -0.4303333078732415, 5);
  sqcRYGate(q, -3.113238255556518, 6);
  sqcRZGate(q, -0.2711024772362114, 6);
  sqcRYGate(q, -1.626757126408001, 7);
  sqcRZGate(q, -0.9015563748772245, 7);
  sqcRYGate(q, 0.0018489444177945949, 8);
  sqcRZGate(q, 1.8445320553146838, 8);
  sqcRYGate(q, 3.0558314596175453, 9);
  sqcRZGate(q, 1.2392849932672547, 9);
  sqcRYGate(q, 1.579713456379909, 10);
  sqcRZGate(q, -1.7138377267450349, 10);
  sqcRYGate(q, -1.5580512636383312, 11);
  sqcRZGate(q, -1.5678000108191013, 11);
  sqcRYGate(q, -1.4841103222593128, 12);
  sqcRZGate(q, 2.9346735792577574, 12);
  sqcRYGate(q, 3.1371969925954724, 13);
  sqcRZGate(q, 0.5616558698686048, 13);
  sqcRYGate(q, 1.035345383941879, 14);
  sqcRZGate(q, 2.6119745678261603, 14);
  sqcRYGate(q, 1.572928958680333, 15);
  sqcRZGate(q, 2.2517010925822794, 15);
  sqcRYGate(q, 1.702332973389894, 16);
  sqcRZGate(q, 3.0858141843808458, 16);
  sqcRYGate(q, 3.1412600674761837, 17);
  sqcRZGate(q, 2.486329118402966, 17);
  sqcRYGate(q, 1.4451933623943847, 18);
  sqcRZGate(q, -3.083200564366641, 18);
  sqcRYGate(q, -0.002589812229212285, 19);
  sqcRZGate(q, -1.0731917891823466, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.083549752793558, 0);
  sqcRZGate(q, 1.9727187678093099, 0);
  sqcRYGate(q, 2.2093894760136585, 1);
  sqcRZGate(q, -1.9900212735063176, 1);
  sqcRYGate(q, 1.1980363939184597, 2);
  sqcRZGate(q, 2.6309736876611103, 2);
  sqcRYGate(q, -2.9951079714463735, 3);
  sqcRZGate(q, 0.1861769412236143, 3);
  sqcRYGate(q, 0.25548928464458454, 4);
  sqcRZGate(q, 1.31238987474191, 4);
  sqcRYGate(q, 1.6485808689335606, 5);
  sqcRZGate(q, 3.1284131970492584, 5);
  sqcRYGate(q, 1.5876506569939266, 6);
  sqcRZGate(q, 2.7675743383289277, 6);
  sqcRYGate(q, 0.0009094879108566545, 7);
  sqcRZGate(q, -2.420658383057912, 7);
  sqcRYGate(q, 2.911396459135696, 8);
  sqcRZGate(q, -3.1288866783622344, 8);
  sqcRYGate(q, 0.00122904781549281, 9);
  sqcRZGate(q, -0.6297316897325924, 9);
  sqcRYGate(q, -0.007662569207423909, 10);
  sqcRZGate(q, 2.2784850819773474, 10);
  sqcRYGate(q, -1.5683591188256154, 11);
  sqcRZGate(q, 1.1196013317222446, 11);
  sqcRYGate(q, -3.13912674336764, 12);
  sqcRZGate(q, 2.9532472423258733, 12);
  sqcRYGate(q, 0.001018845190544404, 13);
  sqcRZGate(q, -2.146115238267169, 13);
  sqcRYGate(q, 3.139532428153854, 14);
  sqcRZGate(q, -1.9938229894229247, 14);
  sqcRYGate(q, -0.005547599875058463, 15);
  sqcRZGate(q, 1.463897394670071, 15);
  sqcRYGate(q, 1.4513808828032686, 16);
  sqcRZGate(q, 2.685340361594496, 16);
  sqcRYGate(q, 1.6026434603278494, 17);
  sqcRZGate(q, -3.0628879694955615, 17);
  sqcRYGate(q, 3.132632795847913, 18);
  sqcRZGate(q, -1.2809046542840026, 18);
  sqcRYGate(q, -2.4382565123690956, 19);
  sqcRZGate(q, 2.619177433269463, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.869550392805095, 0);
  sqcRZGate(q, 2.2941693931055918, 0);
  sqcRYGate(q, -0.9204295554981536, 1);
  sqcRZGate(q, 2.6701919717713767, 1);
  sqcRYGate(q, -1.5225917156433393, 2);
  sqcRZGate(q, 0.4103570134032265, 2);
  sqcRYGate(q, 0.9350172818080481, 3);
  sqcRZGate(q, 1.5190521026423358, 3);
  sqcRYGate(q, 3.117280018240081, 4);
  sqcRZGate(q, -2.441366938241656, 4);
  sqcRYGate(q, -2.418756327651364, 5);
  sqcRZGate(q, -0.11944302514959838, 5);
  sqcRYGate(q, -3.137822650482326, 6);
  sqcRZGate(q, 1.0157589375013, 6);
  sqcRYGate(q, 3.095419047850886, 7);
  sqcRZGate(q, -2.814700029407526, 7);
  sqcRYGate(q, -1.7318984063875185, 8);
  sqcRZGate(q, -0.0693283201641508, 8);
  sqcRYGate(q, -0.02838226482003403, 9);
  sqcRZGate(q, -3.1025039376092467, 9);
  sqcRYGate(q, -0.0016157322200882618, 10);
  sqcRZGate(q, -3.040155553749406, 10);
  sqcRYGate(q, -1.53670790635453, 11);
  sqcRZGate(q, -0.14767665909487349, 11);
  sqcRYGate(q, 1.6652143956743046, 12);
  sqcRZGate(q, -0.12638723878254865, 12);
  sqcRYGate(q, 1.5451353223142323, 13);
  sqcRZGate(q, 2.630461131636025, 13);
  sqcRYGate(q, 3.00593348729956, 14);
  sqcRZGate(q, 2.6885294081732867, 14);
  sqcRYGate(q, 0.10080665131766264, 15);
  sqcRZGate(q, -0.8974612839697363, 15);
  sqcRYGate(q, 2.974265695369583, 16);
  sqcRZGate(q, 1.109203071661236, 16);
  sqcRYGate(q, -1.5713579880433137, 17);
  sqcRZGate(q, 2.3452442020735385, 17);
  sqcRYGate(q, 0.330403953355142, 18);
  sqcRZGate(q, -1.7753306708698187, 18);
  sqcRYGate(q, 3.016902526561988, 19);
  sqcRZGate(q, -2.235599069400359, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.733989434367253, 0);
  sqcRZGate(q, 2.6668937522415885, 0);
  sqcRYGate(q, 1.4986323229133047, 1);
  sqcRZGate(q, 2.123972747126233, 1);
  sqcRYGate(q, 1.4710071360282844, 2);
  sqcRZGate(q, 1.5442325977411417, 2);
  sqcRYGate(q, 1.2896559507178695, 3);
  sqcRZGate(q, -2.7024557584970204, 3);
  sqcRYGate(q, -2.913905108088941, 4);
  sqcRZGate(q, 1.4399268592592345, 4);
  sqcRYGate(q, -3.018595802576842, 5);
  sqcRZGate(q, 2.8078788018049923, 5);
  sqcRYGate(q, 3.1317509370788366, 6);
  sqcRZGate(q, 0.6636439212065515, 6);
  sqcRYGate(q, 3.139059989504391, 7);
  sqcRZGate(q, 0.5130081909517131, 7);
  sqcRYGate(q, 0.241354823934369, 8);
  sqcRZGate(q, -0.5085793274820164, 8);
  sqcRYGate(q, -3.1409416665410212, 9);
  sqcRZGate(q, -0.9439723824896832, 9);
  sqcRYGate(q, 0.35416727241283885, 10);
  sqcRZGate(q, 1.198922637942411, 10);
  sqcRYGate(q, 0.006661728579853795, 11);
  sqcRZGate(q, 1.5813209553246335, 11);
  sqcRYGate(q, -3.140302976391248, 12);
  sqcRZGate(q, 0.31194680742498626, 12);
  sqcRYGate(q, -0.00044496154467202093, 13);
  sqcRZGate(q, -0.34474021124011944, 13);
  sqcRYGate(q, 3.1385887205309553, 14);
  sqcRZGate(q, -1.703900233651849, 14);
  sqcRYGate(q, -0.0007632855329852751, 15);
  sqcRZGate(q, 2.912454689146589, 15);
  sqcRYGate(q, -1.5822524625746288, 16);
  sqcRZGate(q, -1.446876776704058, 16);
  sqcRYGate(q, 3.1132817529626884, 17);
  sqcRZGate(q, -0.7958920541706336, 17);
  sqcRYGate(q, -0.004512796110030859, 18);
  sqcRZGate(q, -2.3529682947698065, 18);
  sqcRYGate(q, -0.00506464353727143, 19);
  sqcRZGate(q, 0.14829548675944937, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.8821920564513936, 0);
  sqcRZGate(q, -0.8887055713721184, 0);
  sqcRYGate(q, -1.7935463195930224, 1);
  sqcRZGate(q, -2.368999277112326, 1);
  sqcRYGate(q, 2.1218222516764813, 2);
  sqcRZGate(q, 1.479412626260529, 2);
  sqcRYGate(q, -1.2914634479349356, 3);
  sqcRZGate(q, -2.3640078243247173, 3);
  sqcRYGate(q, -3.0280574340842366, 4);
  sqcRZGate(q, -1.5130765417739829, 4);
  sqcRYGate(q, -3.093422374825505, 5);
  sqcRZGate(q, 1.2238075926587832, 5);
  sqcRYGate(q, -0.019253613707764572, 6);
  sqcRZGate(q, 1.3951385779576937, 6);
  sqcRYGate(q, -3.0986111446708224, 7);
  sqcRZGate(q, 2.5633812397994107, 7);
  sqcRYGate(q, 0.22435663919466986, 8);
  sqcRZGate(q, 2.680466263279279, 8);
  sqcRYGate(q, -0.025593975369778747, 9);
  sqcRZGate(q, -2.3982271622557625, 9);
  sqcRYGate(q, 0.11511772119766839, 10);
  sqcRZGate(q, 0.11437197941357624, 10);
  sqcRYGate(q, -1.5220963574314021, 11);
  sqcRZGate(q, 2.9923858375259864, 11);
  sqcRYGate(q, 2.78637566771549, 12);
  sqcRZGate(q, 1.1444069578128389, 12);
  sqcRYGate(q, 1.284698747010876, 13);
  sqcRZGate(q, -2.7491511001169138, 13);
  sqcRYGate(q, 0.0073131552132708515, 14);
  sqcRZGate(q, -2.9496233909575564, 14);
  sqcRYGate(q, -0.546265545851143, 15);
  sqcRZGate(q, 1.083327039890924, 15);
  sqcRYGate(q, -1.575000916010613, 16);
  sqcRZGate(q, -0.723657834315246, 16);
  sqcRYGate(q, 1.5910285789411827, 17);
  sqcRZGate(q, -0.04835207384776156, 17);
  sqcRYGate(q, 0.5269305177902308, 18);
  sqcRZGate(q, -0.7878770224952639, 18);
  sqcRYGate(q, 1.6518877724800698, 19);
  sqcRZGate(q, -2.8486460487649263, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.5460267547942195, 0);
  sqcRZGate(q, -0.782705770182111, 0);
  sqcRYGate(q, -1.827034517887098, 1);
  sqcRZGate(q, 1.3864531837439051, 1);
  sqcRYGate(q, -2.1329463318618256, 2);
  sqcRZGate(q, 3.0933536973867284, 2);
  sqcRYGate(q, -1.2648843233279843, 3);
  sqcRZGate(q, -1.5336237769526804, 3);
  sqcRYGate(q, -1.2204582563913187, 4);
  sqcRZGate(q, -1.8429936836685499, 4);
  sqcRYGate(q, 1.8651984615685917, 5);
  sqcRZGate(q, 1.7368434784377031, 5);
  sqcRYGate(q, -0.017232811467925387, 6);
  sqcRZGate(q, -0.682984325338384, 6);
  sqcRYGate(q, -3.135447490263911, 7);
  sqcRZGate(q, -2.8189466834883805, 7);
  sqcRYGate(q, -3.1072511543158154, 8);
  sqcRZGate(q, 2.1634249967371826, 8);
  sqcRYGate(q, -3.136474417044102, 9);
  sqcRZGate(q, -1.4824136568244182, 9);
  sqcRYGate(q, -1.2392761622200115, 10);
  sqcRZGate(q, 1.5021791102297033, 10);
  sqcRYGate(q, 0.025009994332704594, 11);
  sqcRZGate(q, -0.8608641144998003, 11);
  sqcRYGate(q, 0.0027410563451139023, 12);
  sqcRZGate(q, 0.8478709438235201, 12);
  sqcRYGate(q, -3.140166028640281, 13);
  sqcRZGate(q, -1.806782912848719, 13);
  sqcRYGate(q, -0.001444115535054391, 14);
  sqcRZGate(q, -0.12107040203279708, 14);
  sqcRYGate(q, -3.138733627110181, 15);
  sqcRZGate(q, -2.618293835739425, 15);
  sqcRYGate(q, 0.10815297870094655, 16);
  sqcRZGate(q, 0.8963894262603495, 16);
  sqcRYGate(q, -1.672585863052416, 17);
  sqcRZGate(q, 0.24935266695587724, 17);
  sqcRYGate(q, -3.0667733416332825, 18);
  sqcRZGate(q, 0.7993497875649673, 18);
  sqcRYGate(q, 1.5803381399870968, 19);
  sqcRZGate(q, 0.3790045340279642, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.9916224571624617, 0);
  sqcRZGate(q, -0.5541573289573023, 0);
  sqcRYGate(q, -1.3771439062624846, 1);
  sqcRZGate(q, 1.1202299527758486, 1);
  sqcRYGate(q, -1.574222184133153, 2);
  sqcRZGate(q, 1.5797489734901686, 2);
  sqcRYGate(q, 0.21096910705326233, 3);
  sqcRZGate(q, -1.720749666004829, 3);
  sqcRYGate(q, 0.019991254616368977, 4);
  sqcRZGate(q, -1.2034437678978316, 4);
  sqcRYGate(q, 1.4880264591696661, 5);
  sqcRZGate(q, 1.5458585830806815, 5);
  sqcRYGate(q, 0.0038482345937831397, 6);
  sqcRZGate(q, 2.9839752877255625, 6);
  sqcRYGate(q, 3.1270593670157307, 7);
  sqcRZGate(q, -2.334649360222407, 7);
  sqcRYGate(q, 1.3492355269950496, 8);
  sqcRZGate(q, -0.17128019369087058, 8);
  sqcRYGate(q, -1.5636298189615623, 9);
  sqcRZGate(q, 1.877423157180635, 9);
  sqcRYGate(q, -1.573531897655033, 10);
  sqcRZGate(q, -1.8711994109267565, 10);
  sqcRYGate(q, 2.874043223014426, 11);
  sqcRZGate(q, -2.5800672777681997, 11);
  sqcRYGate(q, 1.745780643959975, 12);
  sqcRZGate(q, -1.311606063662408, 12);
  sqcRYGate(q, 2.236613627526973, 13);
  sqcRZGate(q, 0.5438065304301603, 13);
  sqcRYGate(q, 3.106436647967342, 14);
  sqcRZGate(q, -0.21950143530276767, 14);
  sqcRYGate(q, -1.558290152156319, 15);
  sqcRZGate(q, -0.8049520908179302, 15);
  sqcRYGate(q, -3.117205465647438, 16);
  sqcRZGate(q, 1.6716002776027086, 16);
  sqcRYGate(q, 3.066575253320007, 17);
  sqcRZGate(q, 0.7320707811107661, 17);
  sqcRYGate(q, 1.7921450369659098, 18);
  sqcRZGate(q, 0.030776639366780267, 18);
  sqcRYGate(q, 0.2941448765635437, 19);
  sqcRZGate(q, 0.6236464078464214, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -1.6239367519461636, 0);
  sqcRZGate(q, -2.9546808542881795, 0);
  sqcRYGate(q, -3.1247666035181787, 1);
  sqcRZGate(q, -0.7174286201379229, 1);
  sqcRYGate(q, 0.843413773397164, 2);
  sqcRZGate(q, -0.06664937324195551, 2);
  sqcRYGate(q, 2.8852396645084752, 3);
  sqcRZGate(q, 0.3212637478118986, 3);
  sqcRYGate(q, 1.5618890118663806, 4);
  sqcRZGate(q, -1.689237326086994, 4);
  sqcRYGate(q, -1.2832172426766741, 5);
  sqcRZGate(q, 1.7459372846213999, 5);
  sqcRYGate(q, -0.0033109726664370953, 6);
  sqcRZGate(q, 1.9600485228404443, 6);
  sqcRYGate(q, 3.140872903786401, 7);
  sqcRZGate(q, 0.2712586247899651, 7);
  sqcRYGate(q, 3.136491723843251, 8);
  sqcRZGate(q, -0.10215747720741586, 8);
  sqcRYGate(q, 3.1290218282542708, 9);
  sqcRZGate(q, 0.34424695745268785, 9);
  sqcRYGate(q, -0.2368291145420111, 10);
  sqcRZGate(q, 0.18772492585096412, 10);
  sqcRYGate(q, 1.5620195108810582, 11);
  sqcRZGate(q, 2.1702957976585853, 11);
  sqcRYGate(q, -0.0009803210833293616, 12);
  sqcRZGate(q, 2.440709693608032, 12);
  sqcRYGate(q, 3.1411893747887762, 13);
  sqcRZGate(q, 2.770299736352194, 13);
  sqcRYGate(q, 3.1412725050969788, 14);
  sqcRZGate(q, -2.46513023942884, 14);
  sqcRYGate(q, 3.139197153287981, 15);
  sqcRZGate(q, -0.20125858929364232, 15);
  sqcRYGate(q, -1.5584094638767363, 16);
  sqcRZGate(q, 2.5748431832456626, 16);
  sqcRYGate(q, 1.6228715493706432, 17);
  sqcRZGate(q, 3.0099955540002297, 17);
  sqcRYGate(q, 1.520743685962246, 18);
  sqcRZGate(q, 1.5339147603882157, 18);
  sqcRYGate(q, 3.103773193968474, 19);
  sqcRZGate(q, 0.7696795116206445, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 2.456533366563857, 0);
  sqcRZGate(q, -2.966030125847326, 0);
  sqcRYGate(q, 1.4325454069091688, 1);
  sqcRZGate(q, -0.8753625936766944, 1);
  sqcRYGate(q, 2.902067890038811, 2);
  sqcRZGate(q, -2.762345548210154, 2);
  sqcRYGate(q, 2.2797841843661057, 3);
  sqcRZGate(q, -1.6517264042126507, 3);
  sqcRYGate(q, -2.588176522255724, 4);
  sqcRZGate(q, -1.7045489009783055, 4);
  sqcRYGate(q, 1.529562916047003, 5);
  sqcRZGate(q, 1.8424317922001219, 5);
  sqcRYGate(q, -0.015914419527864015, 6);
  sqcRZGate(q, -1.1433810131765636, 6);
  sqcRYGate(q, 3.114364770458428, 7);
  sqcRZGate(q, -1.5198750360770097, 7);
  sqcRYGate(q, -0.061652221977464984, 8);
  sqcRZGate(q, 0.6204823778168844, 8);
  sqcRYGate(q, 1.6089689774443006, 9);
  sqcRZGate(q, -1.732952418876317, 9);
  sqcRYGate(q, -1.6742472261947068, 10);
  sqcRZGate(q, -0.18669361813300667, 10);
  sqcRYGate(q, -3.006410041606024, 11);
  sqcRZGate(q, 2.1815713494531885, 11);
  sqcRYGate(q, 3.0904484530351444, 12);
  sqcRZGate(q, -0.5536512233411464, 12);
  sqcRYGate(q, -1.5763519916216042, 13);
  sqcRZGate(q, 2.1133542098140987, 13);
  sqcRYGate(q, 3.139039644855306, 14);
  sqcRZGate(q, 0.1108952722056289, 14);
  sqcRYGate(q, -3.0104909071848898, 15);
  sqcRZGate(q, -0.5285965671899677, 15);
  sqcRYGate(q, -1.6952783516116683, 16);
  sqcRZGate(q, -0.2700756997736442, 16);
  sqcRYGate(q, -1.728412547190062, 17);
  sqcRZGate(q, -0.11393653710196536, 17);
  sqcRYGate(q, 1.3768359540914625, 18);
  sqcRZGate(q, -1.706285792580623, 18);
  sqcRYGate(q, -0.013584827721633599, 19);
  sqcRZGate(q, -0.4337708741089416, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, -2.214174683030518, 0);
  sqcRZGate(q, -2.3157630086051952, 0);
  sqcRYGate(q, 0.17856877355819734, 1);
  sqcRZGate(q, -2.944441825041442, 1);
  sqcRYGate(q, 0.33408975102583854, 2);
  sqcRZGate(q, 1.0304671552104923, 2);
  sqcRYGate(q, -1.266241446050094, 3);
  sqcRZGate(q, 2.667612598618284, 3);
  sqcRYGate(q, 0.38565056999735514, 4);
  sqcRZGate(q, -1.972107514036437, 4);
  sqcRYGate(q, -2.9513048036798097, 5);
  sqcRZGate(q, 1.7478920188810998, 5);
  sqcRYGate(q, 3.139983858259009, 6);
  sqcRZGate(q, 0.272728481684542, 6);
  sqcRYGate(q, 0.011412695634792521, 7);
  sqcRZGate(q, -2.415239976303744, 7);
  sqcRYGate(q, 0.017416083594873403, 8);
  sqcRZGate(q, 2.519117880579683, 8);
  sqcRYGate(q, 3.1381448590882677, 9);
  sqcRZGate(q, -0.9040904937545874, 9);
  sqcRYGate(q, 0.2395259614303111, 10);
  sqcRZGate(q, -1.708198801230991, 10);
  sqcRYGate(q, 1.5801733460292233, 11);
  sqcRZGate(q, -0.053363588856629285, 11);
  sqcRYGate(q, 0.0014965691616879442, 12);
  sqcRZGate(q, 1.6125862872312546, 12);
  sqcRYGate(q, 0.001507638169873877, 13);
  sqcRZGate(q, 0.716418042857607, 13);
  sqcRYGate(q, 0.0006879474116292528, 14);
  sqcRZGate(q, -3.099832836677423, 14);
  sqcRYGate(q, -2.6800381144110848e-05, 15);
  sqcRZGate(q, -0.7395946164841061, 15);
  sqcRYGate(q, -1.5726119828249168, 16);
  sqcRZGate(q, -0.3992165958823053, 16);
  sqcRYGate(q, -1.5729545291422504, 17);
  sqcRZGate(q, -1.686575119061477, 17);
  sqcRYGate(q, -1.1902622854556038, 18);
  sqcRZGate(q, 1.7668250023850256, 18);
  sqcRYGate(q, 3.084696601072573, 19);
  sqcRZGate(q, -2.750969509250308, 19);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 4, 5);
  sqcCZGate(q, 6, 7);
  sqcCZGate(q, 8, 9);
  sqcCZGate(q, 10, 11);
  sqcCZGate(q, 12, 13);
  sqcCZGate(q, 14, 15);
  sqcCZGate(q, 16, 17);
  sqcCZGate(q, 18, 19);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 2, 4);
  sqcCZGate(q, 4, 6);
  sqcCZGate(q, 6, 8);
  sqcCZGate(q, 8, 10);
  sqcCZGate(q, 10, 12);
  sqcCZGate(q, 12, 14);
  sqcCZGate(q, 14, 16);
  sqcCZGate(q, 16, 18);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 3, 5);
  sqcCZGate(q, 5, 7);
  sqcCZGate(q, 7, 9);
  sqcCZGate(q, 9, 11);
  sqcCZGate(q, 11, 13);
  sqcCZGate(q, 13, 15);
  sqcCZGate(q, 15, 17);
  sqcCZGate(q, 17, 19);
  sqcRYGate(q, 1.92025924254376, 0);
  sqcRZGate(q, 2.405658728097252, 0);
  sqcRYGate(q, 1.3353358188169968, 1);
  sqcRZGate(q, -1.6083676189194867, 1);
  sqcRYGate(q, -0.7111389887473495, 2);
  sqcRZGate(q, -2.4101811341424955, 2);
  sqcRYGate(q, -1.9374717925309497, 3);
  sqcRZGate(q, 2.410914698678159, 3);
  sqcRYGate(q, -0.232184600651198, 4);
  sqcRZGate(q, -1.843729985112489, 4);
  sqcRYGate(q, 0.7409762098687454, 5);
  sqcRZGate(q, 0.9350951260237821, 5);
  sqcRYGate(q, -1.3648393686791, 6);
  sqcRZGate(q, -2.860506433536961, 6);
  sqcRYGate(q, 1.8050621139843341, 7);
  sqcRZGate(q, -2.8575504505627536, 7);
  sqcRYGate(q, -1.311875541091544, 8);
  sqcRZGate(q, 0.4431981053138417, 8);
  sqcRYGate(q, -3.1045169217971718, 9);
  sqcRZGate(q, 1.2286070386511145, 9);
  sqcRYGate(q, -0.12172610651424076, 10);
  sqcRZGate(q, 1.748882635472481, 10);
  sqcRYGate(q, 0.27646031432323975, 11);
  sqcRZGate(q, -1.6581729835418981, 11);
  sqcRYGate(q, -0.140307722247436, 12);
  sqcRZGate(q, -2.018046896251569, 12);
  sqcRYGate(q, 0.06811403042731361, 13);
  sqcRZGate(q, -0.3201805563542772, 13);
  sqcRYGate(q, -1.7819836334453796, 14);
  sqcRZGate(q, 0.645842372807943, 14);
  sqcRYGate(q, -2.932228639067795, 15);
  sqcRZGate(q, -2.803907989373644, 15);
  sqcRYGate(q, 0.8859978533781667, 16);
  sqcRZGate(q, -1.8582654921521249, 16);
  sqcRYGate(q, 2.479553103356012, 17);
  sqcRZGate(q, -1.809531896228024, 17);
  sqcRYGate(q, -1.4407045476306328, 18);
  sqcRZGate(q, -1.9681010772305463, 18);
  sqcRYGate(q, -0.19050649900383565, 19);
  sqcRZGate(q, 1.6976287964799506, 19);

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
