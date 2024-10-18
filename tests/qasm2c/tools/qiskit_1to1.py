import sys

from qiskit.providers.basic_provider import BasicSimulator
import qiskit.qasm3

if __name__ == "__main__":
    input_file = sys.argv[1]

backend = BasicSimulator()

circuit = qiskit.qasm3.load(input_file)
print("circuit : \n", circuit)
ret = backend.run(circuit).result()
print("result : \n", ret)

counts = ret.get_counts()
print("counts : \n", counts)