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

  sqcRYGate(q, -0.034326321801879445, 0);
  sqcRZGate(q, 1.5851601121795023, 0);
  sqcRYGate(q, 1.883172167371221, 1);
  sqcRZGate(q, -2.2777173691628745, 1);
  sqcRYGate(q, -2.9087424239482043, 2);
  sqcRZGate(q, 2.467595625595192, 2);
  sqcRYGate(q, 0.3552047344356213, 3);
  sqcRZGate(q, 0.38197940009123044, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.0893667522200113, 0);
  sqcRZGate(q, 1.484496680386091, 0);
  sqcRYGate(q, -1.9423701745857764, 1);
  sqcRZGate(q, -1.117072939578398, 1);
  sqcRYGate(q, 0.5435515861748627, 2);
  sqcRZGate(q, 0.9435476566574027, 2);
  sqcRYGate(q, -2.4533833864811756, 3);
  sqcRZGate(q, 0.8656192503279975, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.7070322617764503, 0);
  sqcRZGate(q, -2.5289098061974316, 0);
  sqcRYGate(q, -2.572591199932282, 1);
  sqcRZGate(q, 0.24297104141288933, 1);
  sqcRYGate(q, 1.8430598009294705, 2);
  sqcRZGate(q, 0.3368861206217171, 2);
  sqcRYGate(q, -1.7651558936792355, 3);
  sqcRZGate(q, 0.57429318160808, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -0.731082566072077, 0);
  sqcRZGate(q, -0.1935738777913034, 0);
  sqcRYGate(q, -1.8055617160793525, 1);
  sqcRZGate(q, 1.0347615173789302, 1);
  sqcRYGate(q, -2.5823502870379538, 2);
  sqcRZGate(q, -0.4645245690269855, 2);
  sqcRYGate(q, -0.08044096974304782, 3);
  sqcRZGate(q, 0.6231786914751458, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.5135194775949847, 0);
  sqcRZGate(q, 0.506179552699445, 0);
  sqcRYGate(q, -1.5398672812439036, 1);
  sqcRZGate(q, 0.9449882620686756, 1);
  sqcRYGate(q, 0.6633387520888662, 2);
  sqcRZGate(q, 0.8443562781164528, 2);
  sqcRYGate(q, 2.3324730810531284, 3);
  sqcRZGate(q, 1.268561690871333, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.336343688827224, 0);
  sqcRZGate(q, 1.8225774368728036, 0);
  sqcRYGate(q, -0.10431173967233132, 1);
  sqcRZGate(q, 0.6877848260866142, 1);
  sqcRYGate(q, 1.0247939831424255, 2);
  sqcRZGate(q, 0.5095513936011656, 2);
  sqcRYGate(q, -1.2351057540263595, 3);
  sqcRZGate(q, 1.166680737722424, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.5760973629713834, 0);
  sqcRZGate(q, -2.8015324736107803, 0);
  sqcRYGate(q, 2.4148333082626436, 1);
  sqcRZGate(q, -0.08652495267168714, 1);
  sqcRYGate(q, -1.8447703469722305, 2);
  sqcRZGate(q, -0.7214084769440051, 2);
  sqcRYGate(q, -1.954928074637036, 3);
  sqcRZGate(q, -1.794954856882387, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.3501477238645863, 0);
  sqcRZGate(q, -1.4989457779750568, 0);
  sqcRYGate(q, -1.135059241853974, 1);
  sqcRZGate(q, -2.9478168596343375, 1);
  sqcRYGate(q, -2.8035304072982123, 2);
  sqcRZGate(q, -2.8740169726865132, 2);
  sqcRYGate(q, 1.5410091919781586, 3);
  sqcRZGate(q, -2.02068981099419, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.3113723209768322, 0);
  sqcRZGate(q, -1.9252468106900456, 0);
  sqcRYGate(q, -1.811569869135485, 1);
  sqcRZGate(q, 1.1717299225255342, 1);
  sqcRYGate(q, -1.4395532630553793, 2);
  sqcRZGate(q, 2.667403036203061, 2);
  sqcRYGate(q, 1.9984814283085877, 3);
  sqcRZGate(q, 2.920983514363371, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.5580646529798186, 0);
  sqcRZGate(q, -1.521541230953111, 0);
  sqcRYGate(q, -0.2616723336279989, 1);
  sqcRZGate(q, 1.9026922639495847, 1);
  sqcRYGate(q, -2.179678981460693, 2);
  sqcRZGate(q, -0.31726226633642085, 2);
  sqcRYGate(q, -0.42926346326306675, 3);
  sqcRZGate(q, 0.4709470519657506, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 2.016810768383916, 0);
  sqcRZGate(q, -0.35919160468137185, 0);
  sqcRYGate(q, -0.38874188470150806, 1);
  sqcRZGate(q, 1.5732363155318714, 1);
  sqcRYGate(q, 0.7184030233431724, 2);
  sqcRZGate(q, 0.35349811646229906, 2);
  sqcRYGate(q, -2.0233856537960637, 3);
  sqcRZGate(q, 0.1425951773779879, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 0.37021759986828995, 0);
  sqcRZGate(q, 2.4152276592179556, 0);
  sqcRYGate(q, 2.5988538484431936, 1);
  sqcRZGate(q, 3.106623281170596, 1);
  sqcRYGate(q, 1.0010886999067705, 2);
  sqcRZGate(q, 2.5011282161280133, 2);
  sqcRYGate(q, -3.0161136253749934, 3);
  sqcRZGate(q, 1.0577748611727156, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -2.9002642323541643, 0);
  sqcRZGate(q, -1.9361070000770826, 0);
  sqcRYGate(q, 2.9103768480641152, 1);
  sqcRZGate(q, 3.100050837425881, 1);
  sqcRYGate(q, 1.4653116657498026, 2);
  sqcRZGate(q, -0.7984591467149872, 2);
  sqcRYGate(q, 1.9310774863488012, 3);
  sqcRZGate(q, -1.6132932956138026, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, 1.8488455715218208, 0);
  sqcRZGate(q, -3.0190423566960547, 0);
  sqcRYGate(q, 2.5124523597946324, 1);
  sqcRZGate(q, 0.4527288505948652, 1);
  sqcRYGate(q, 0.825133760227102, 2);
  sqcRZGate(q, 1.9332256463215478, 2);
  sqcRYGate(q, -0.25637140825379134, 3);
  sqcRZGate(q, 0.12468711182852756, 3);
  sqcCZGate(q, 0, 1);
  sqcCZGate(q, 2, 3);
  sqcCZGate(q, 0, 2);
  sqcCZGate(q, 1, 3);
  sqcCZGate(q, 0, 3);
  sqcCZGate(q, 1, 2);
  sqcRYGate(q, -1.6621076136174446, 0);
  sqcRZGate(q, 0.2222657880742469, 0);
  sqcRYGate(q, -2.1032322141133686, 1);
  sqcRZGate(q, 2.8698524210675553, 1);
  sqcRYGate(q, -2.0946076896499095, 2);
  sqcRZGate(q, 1.7034548246283236, 2);
  sqcRYGate(q, -1.0198184268628574, 3);
  sqcRZGate(q, 1.8454106062918125, 3);

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
