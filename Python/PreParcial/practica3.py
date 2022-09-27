# Suponga que tiene que desarrollar un sistema para un estacionamiento.
#  1. Crear una clase llamada Vehiculo con atributos patente, y descripcion(opcional vacio por
# defecto)
#  Implementar los siguientes métodos:
#  1. Un constructor
#  2. mostrar(): muestra los datos del vehiculo
#  3. validarPatente(): Valida que la patente tenga 6 u 8 caracteres


class Vehiculo():
    def init(self, patente, descripcion: Optional[str]=None) -> None:
        self.patente=patente
        self.descripcion=descripcion

    def mostrar(self):
        return f'Vehiculo patente: {self.patente}, descripcion: {self.descripcion}'

    def validarPatente(self) -> bool:
        if len(self.patente) >= 6 and len(self.patente) <= 8:
            return True


objeto= Vehiculo("ASD123", "Auto")
print(objeto.mostrar())
print(objeto.validarPatente())