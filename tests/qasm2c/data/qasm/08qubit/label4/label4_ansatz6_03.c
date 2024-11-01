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
  q = sqcQuantumCircuit(8);

  sqcRYGate(q, 1.6685007110260857, 0);
  sqcRYGate(q, 0.4476104586890841, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.1304558623706562, 0);
  sqcRYGate(q, 0.4513849903152308, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 2.244057558330868, 1);
  sqcRYGate(q, 0.36205455177889995, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.0374907839376566, 1);
  sqcRYGate(q, 0.5196703916825003, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.31867967044519574, 2);
  sqcRYGate(q, -1.2359496664077856, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.5651186932288446, 2);
  sqcRYGate(q, -1.655667447326353, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.1451869638681678, 3);
  sqcRYGate(q, -1.7224330894226851, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.6288859922276133, 3);
  sqcRYGate(q, -2.3265020842243, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.025887455682076062, 4);
  sqcRYGate(q, 0.10107433588427113, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.3705823093642038, 4);
  sqcRYGate(q, 1.5064507250906347, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -0.04357931128353698, 5);
  sqcRYGate(q, 2.8339276740258796, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3624872645538932, 5);
  sqcRYGate(q, -1.238215521910167, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.5706298870534106, 6);
  sqcRYGate(q, 1.5589023477220714, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.201386724873549, 6);
  sqcRYGate(q, 1.575476636684635, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.0903331033306305, 0);
  sqcRYGate(q, -1.5667138921335266, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.8329097489630559, 0);
  sqcRYGate(q, 2.809400863923938, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 0.6616718159164332, 1);
  sqcRYGate(q, 0.20766390930133186, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.29458195543230925, 1);
  sqcRYGate(q, 0.31633669173528567, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.2984854787469797, 2);
  sqcRYGate(q, 0.13970758547309273, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.947280317830745, 2);
  sqcRYGate(q, 1.20995082822115, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.059524438986859, 3);
  sqcRYGate(q, 2.793471202913665, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.1334068386868097, 3);
  sqcRYGate(q, -1.5109753020509407, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.022322090595628, 4);
  sqcRYGate(q, -1.60152917638481, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.532758876236187, 4);
  sqcRYGate(q, 0.3236691138190517, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.947879257079113, 5);
  sqcRYGate(q, -1.572555606220626, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.250280833612058, 5);
  sqcRYGate(q, -1.5667091670231814, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.5612880403231424, 6);
  sqcRYGate(q, -0.34819565221201215, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.08482350243857453, 6);
  sqcRYGate(q, -0.07906131960691304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.17024672326802437, 0);
  sqcRYGate(q, 0.1759076025553048, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.204092455051483, 0);
  sqcRYGate(q, 0.03820157547908295, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.5404378844279258, 1);
  sqcRYGate(q, 2.7774259585089607, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 3.139223437918894, 1);
  sqcRYGate(q, -3.019319604502757, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.030632807280221, 2);
  sqcRYGate(q, -3.088147973308163, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 1.6735312346579503, 2);
  sqcRYGate(q, 1.2783130349556757, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.7566367876323705, 3);
  sqcRYGate(q, 1.44001563639902, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 3.133275718165886, 3);
  sqcRYGate(q, -2.204010899702009, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 2.4618624939606497, 4);
  sqcRYGate(q, 3.135956930696371, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 1.5615924386794855, 4);
  sqcRYGate(q, 1.579355776783541, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.24754342082629588, 5);
  sqcRYGate(q, -2.9775483407171874, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -0.7069729323916016, 5);
  sqcRYGate(q, 1.5704099037469808, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.6078690744996345, 6);
  sqcRYGate(q, -2.050317695925937, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -0.11973873867148122, 6);
  sqcRYGate(q, -2.8819546499602304, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.519792204127895, 0);
  sqcRYGate(q, 1.3635848717488859, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.797455475211691, 0);
  sqcRYGate(q, 0.8961094759535653, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.133594260668821, 1);
  sqcRYGate(q, 3.043946053696513, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 1.5691500701137437, 1);
  sqcRYGate(q, 0.0019271279816983624, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.140116194957574, 2);
  sqcRYGate(q, 0.33949025996045545, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 3.141136879600493, 2);
  sqcRYGate(q, -1.5724619968742974, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -0.03415435085956229, 3);
  sqcRYGate(q, 0.13568071979848714, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.6619975165474585, 3);
  sqcRYGate(q, 1.571327501965773, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -2.8803819848160463, 4);
  sqcRYGate(q, 2.732627977116215, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 3.126528962371312, 4);
  sqcRYGate(q, -3.141436352529448, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.328292573446469, 5);
  sqcRYGate(q, 2.094042469501413, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 0.10736079206823007, 5);
  sqcRYGate(q, 0.006827427938256747, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 1.720544054726803, 6);
  sqcRYGate(q, -2.4009592363320187, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 3.0375225038192952, 6);
  sqcRYGate(q, -1.363364543768074, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 2.193894807495176, 0);
  sqcRYGate(q, -2.7375899849790004, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -2.8068163999148794, 0);
  sqcRYGate(q, -0.9251519929366867, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, -1.3990397621834612, 1);
  sqcRYGate(q, -3.0699047976737397, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, 0.006147898176712019, 1);
  sqcRYGate(q, 1.5701253127057655, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -1.5874981051422719, 2);
  sqcRYGate(q, 3.104282063364351, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 2.752134880123199, 2);
  sqcRYGate(q, 1.570940282385797, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, 0.852375020813113, 3);
  sqcRYGate(q, -1.4494861283287703, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.062473947695989906, 3);
  sqcRYGate(q, 3.1414030603158083, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, 0.02898734427007721, 4);
  sqcRYGate(q, -0.6368375453744923, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -1.5741028189425208, 4);
  sqcRYGate(q, 1.57086899173982, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, -3.0870790233063086, 5);
  sqcRYGate(q, 0.46632308589331295, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -1.3529476106111729, 5);
  sqcRYGate(q, -1.572876926161947, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 3.0222822905255784, 6);
  sqcRYGate(q, 0.2541993524764168, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, -2.9591107251828115, 6);
  sqcRYGate(q, -1.5705897124448294, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.3249906471906707, 0);
  sqcRYGate(q, 1.190610602696624, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.2638293078006084, 0);
  sqcRYGate(q, 1.4989190462375714, 1);
  sqcCXGate(q, 0, 1);
  sqcRYGate(q, 1.692503187478296, 1);
  sqcRYGate(q, 2.662480114389516, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -3.1374212597873044, 1);
  sqcRYGate(q, 1.5712645475959472, 2);
  sqcCXGate(q, 1, 2);
  sqcRYGate(q, -2.049958704094857, 2);
  sqcRYGate(q, -0.6843075812829031, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -1.556351797350481, 2);
  sqcRYGate(q, -1.569568222559516, 3);
  sqcCXGate(q, 2, 3);
  sqcRYGate(q, -2.669722372411476, 3);
  sqcRYGate(q, -1.5702455910755164, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -1.5712006582891318, 3);
  sqcRYGate(q, -3.1415528351509865, 4);
  sqcCXGate(q, 3, 4);
  sqcRYGate(q, -0.1114824155352996, 4);
  sqcRYGate(q, -0.0018715112307435544, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.23572398841115666, 4);
  sqcRYGate(q, 3.0737695802508855, 5);
  sqcCXGate(q, 4, 5);
  sqcRYGate(q, 0.0025664355677389628, 5);
  sqcRYGate(q, -2.5190540694300854, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, 8.159825779507912e-05, 5);
  sqcRYGate(q, 1.5657466623605287, 6);
  sqcCXGate(q, 5, 6);
  sqcRYGate(q, -2.193660359733859, 6);
  sqcRYGate(q, 2.747356378690042, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 0.2341424071919569, 6);
  sqcRYGate(q, -1.556866466576567, 7);
  sqcCXGate(q, 6, 7);
  sqcRYGate(q, 1.5156395975651509, 0);
  sqcRYGate(q, -3.141432131603996, 1);
  sqcRYGate(q, 1.574215392959986, 2);
  sqcRYGate(q, -3.058977232759728, 3);
  sqcRYGate(q, 2.9861208776660626, 4);
  sqcRYGate(q, -0.00023351010078238472, 5);
  sqcRYGate(q, 1.5690378867216899, 6);
  sqcRYGate(q, 0.7254759055166273, 7);

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
