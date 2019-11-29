#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
  if (argc == 1)
  {
    cout
    << "   ______________________________" << endl
    << " / \\                             \\." << endl
    << "|   |                            |." << endl
    << " \\_ |                            |." << endl
    << "    |    ,-----.          ,--.   |." << endl
    << "    |   '  .--./,--,--,--.|  |   |." << endl
    << "    |   |  |    |        ||  |   |." << endl
    << "    |   '  '--'\\|  |  |  ||  |   |." << endl
    << "    |    `-----'`--`--`--'`--'   |." << endl
    << "    |                            |." << endl
    << "    |  ./help compile            |." << endl
    << "    |     Compilar con g++       |." << endl
    << "    |  ./help notebooks          |." << endl
    << "    |     Experimentación        |." << endl
    << "    |  ./help run                |." << endl
    << "    |     pybind de class CML    |." << endl
    << "    |  ./help tools              |." << endl
    << "    |     Preprocesamiento       |." << endl
    << "    |  ./help example            |." << endl
    << "    |     Ejemplo en python      |." << endl
    << "    |                            |." << endl
    << "    |   _________________________|___" << endl
    << "    |  /                            /." << endl
    << "    \\_/____________________________/." << endl;
  }

  if (argc > 2) return 1;

  if (strcmp(argv[1], "compile") == 0)
    cout
    << "+==========+" << endl
    << "| Compilar |" << endl
    << "+==========+" << endl
    << endl
    << "!cd .. && git submodule init" << endl
    << "!cd .. && git submodule update" << endl
    << "!cd .. && mkdir build" << endl
    << "!cd ../build/ && rm -rf *" << endl
    << "!cd ../build && cmake \\" << endl
    << "  -DPYTHON_EXECUTABLE=\"$(which python3)\" \\" << endl
    << "  -DCMAKE_BUILD_TYPE=Release .." << endl
    << "!cd ../build && make install" << endl
    << endl
    << "-> Usar como header de los notebooks" << endl;
  else if (strcmp(argv[1], "notebooks") == 0)
    cout
    << "+==================+" << endl
    << "| Correr notebooks |" << endl
    << "+==================+" << endl
    << endl
    << "eval \"$(pyenv init -)\"" << endl
    << "pyenv global 3.6.5" << endl
    << "pyenv virtualenv 3.6.5 tp3" << endl
    << "pyenv activate tp3" << endl
    << "pip install -r requirements.txt" << endl
    << "jupyter notebook notebooks/"
    << endl;
  else if (strcmp(argv[1], "run"))
    cout
    << "+====================+" << endl
    << "| Usar CMl en Python |" << endl
    << "+====================+" << endl
    << endl
    << "import predict" << endl
    << endl
    << "Crea CML con una familia F de funciones de tamaño size" << endl
    << "cml = predict.CML(F, size)" << endl
    << "- F:(x) -> [] / len([]) == size"
    << endl
    << "cml.fit(x, y)" << endl
    << "Inicializa con los datos (xi, yi) i=1...n" << endl
    << "Encuentra a : predict(x*) = sum ai Fi(x*) i=1...n" << endl
    << "- x,y:[] / xi != xj &len(x) == len(y)" << endl
    << endl
    << "cml.predict(x*)" << endl
    << "Predice un x* despues de calcular `fit`" << endl
    << " - x* / len(x*)==len(x)" << endl;
  else if (strcmp(argv[1], "tools"))
    cout
    << "+==================+" << endl
    << "| Preprocesamiento |" << endl
    << "+==================+" << endl
    << endl
    << "./get_cant_vuelos.sh year||2008" << endl
    << "  > /cant_vuelos_by_month/cant_vuelos_by_month-${year}.csv" << endl
    << "  Cantidad de vuelos por mes en un año dado" << endl
    << endl
    << "./get_cant_vuelos.sh year||2008" << endl
    << "  > /delays_by_month/delays_by_month-${year}.csv" << endl
    << "  Cantidad de delyas por mes en un año dado" << endl;
  else if (strcmp(argv[1], "example"))
    cout
    << "+=========+" << endl
    << "| Ejemplo |" << endl
    << "+=========+" << endl
    << endl
    << "import predict" << endl
    << "import numpy as np" << endl
    << "import matplotlib.pyplot as plt" << endl
    << endl
    << "x= [1,2,3,4]" << endl
    << "y = [5,6,7,12]" << endl
    << "def recta(x):" << endl
    << "    return np.array([1,x,x*x,x*x*x*x*x*x*x]);" << endl
    << endl
    << "cml = predict.CML(recta,3)" << endl
    << "cml.fit(x,y)" << endl
    << endl
    << "x_axis = np.arange(20)" << endl
    << "y_axis = [cml.predict(i) for i in x_axis]" << endl
    << "}" << endl;
  else return 1;

  return 0;
}
