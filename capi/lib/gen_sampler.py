
#import sys
#import datetime as dt
import json
#import uuid
#import requests
#import boto3
#import numpy as np
from qiskit import qasm3
#from qiskit.circuit.library import IQP
#from qiskit.quantum_info import random_hermitian
from qiskit.transpiler.preset_passmanagers import generate_preset_pass_manager
#from qiskit_ibm_runtime.utils import RuntimeEncoder
from qiskit_ibm_runtime.utils.backend_converter import convert_to_target
from qiskit_ibm_runtime.models import BackendProperties, BackendConfiguration

def test(conf, prop, qasm3_str):
  conf_json = json.loads(conf)
  prop_json = json.loads(prop)
  backend_conf = BackendConfiguration.from_dict(conf_json)
  backend_prop = BackendProperties.from_dict(prop_json)

  target = convert_to_target(backend_conf, backend_prop)
  pm = generate_preset_pass_manager(
    optimization_level=1,
    target=target,
  )
  num_qubits = backend_conf.num_qubits;
  circuit = qasm3.loads(qasm3_str)
  isa_circuit = pm.run(circuit)

  new_qasm3_str = qasm3.dumps(
    isa_circuit,
    disable_constants=True,
    allow_aliasing=True,
    experimental=qasm3.ExperimentalFeatures.SWITCH_CASE_V1,
  )
#  input_json = {
#    "pubs": [[new_qasm3_str]],
#    "version": 2,
#    "support_qiskit": False,
#    "shots": 10000,
#    "options": {},
#  }
  new_qasm3_str = new_qasm3_str.replace("\n","")
  new_qasm3_str = new_qasm3_str.replace("\"","\\\"")
  new_qasm3_str = new_qasm3_str.replace("OPEN","  \"OPEN")
  new_qasm3_str = new_qasm3_str + "\""
  return str(new_qasm3_str);
