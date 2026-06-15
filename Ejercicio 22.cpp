Línea A: NO compila porque getDoble() es const y dentro intenta modificar contenido.

Línea B: Sí compila si quitamos la línea A . solo retorna contenido, no lo modifica.

Línea C: Sí compila. C no es const y getContenido() es const, entonces no hay problema.

Línea D: Sí compila. C no es const, entonces puede usar setContenido().

Línea E: Sí compila. Fija es const, pero getContenido() también es const, entonces se puede llamar.

Línea F: NO compila. Fija es const y setContenido() intenta modificar el objeto.
