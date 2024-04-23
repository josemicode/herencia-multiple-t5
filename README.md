# herencia-multiple-t5

TAREA POR JOSE OJEDA Y MARINA GARCÍA 

// EJERCICIO 1
El primer ejercicio de la tarea trata sobre un conjunto de clases que sirven para representar los campos electricos.
Clase CampoVectorial: es la clase padre de CampoElectrico que está detallada a continuación.
Clase CampoElectrico: calcula el campo electrico de una carga en una posicion dada, donde la carga es una atributo privado y usamos getters y setters para poder acceder a ella. Nos calcula la intensidad y la dirección del campo electrico.
Clase CampoElectricoEsferaConductora: se calcula el campo electrico en una esfera conductora. Se utiliza la misma funcion que en CampoElectrico pero se modifican las funciones de calcularIntensidad y calcularDireccion para poder tener en cuenta el radio de la esfera.

// EJERCICIO 2
El segundo apartado de la tarea está organizado en tres componentes principales:

Clase PDI: Esta clase representa al Personal Docente e Investigador. Contiene atributos como nombre, DNI, área de conocimiento, y ofrece funcionalidades para calcular la experiencia y comparar la antigüedad entre diferentes miembros del PDI. Heredade Profesor e Investigador.
Clase Departamento: La clase Departamento representa una unidad organizativa dentro de la universidad, albergando a un grupo de PDIs. Proporciona métodos para insertar y visualizar PDIs asociados, así como para gestionar el número máximo de miembros permitidos en el departamento.
Archivo Principal (principal.cpp): Este archivo contiene el punto de entrada del programa y se utiliza para realizar pruebas y demostraciones de las funcionalidades de las clases PDI y Departamento.
