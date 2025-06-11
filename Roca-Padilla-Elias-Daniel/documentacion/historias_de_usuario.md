##Sistema de Seguimiento de Tareas Escolares

##Introducción

##Descripción general del sistema
Sistema para que profesores y alumnos del Colegio "Ciencia y Futuro" registren tareas escolares por materia, realicen seguimiento de su estado y reciban alertas de fechas límite.

##Objetivo General
Facilitar la gestión y organización de tareas escolares mediante un sistema centralizado.

##Objetivos específicos
1. Gestión básica de tareas 
2. Seguimiento de estados 
3. Visualización organizada 

##HISTORIAS DE USUARIO: Gestión básica de tareas

HU-01: Como profesor quiero crear una tarea nueva con materia y fecha para asignar trabajos escolares.
Criterios de aceptación positivos:
- Sistema solicita título, materia y fecha
- Muestra confirmación "Tarea creada"
Criterios de aceptación negativos:
- Si la fecha es anterior a la actual: "Error: Fecha inválida"

HU-02: Como alumno quiero ver mis tareas no entregadas ordenadas por fecha para organizar mi trabajo.
Criterios de aceptación positivos:
- Muestra solo tareas pendientes
- Ordena de más próxima a más lejana
Criterios de aceptación negativos:
- Si no hay tareas: "No tienes tareas pendientes"

HU-03: Como profesor quiero modificar detalles de una tarea creada para corregir información.
Criterios de aceptación positivos:
- Permite cambiar título, materia o fecha
- Confirma con "Cambios guardados"
Criterios de aceptación negativos:
- Si la tarea no existe: "Error: Tarea no encontrada"

HU-04: Como profesor quiero borrar tareas incorrectas para mantener la lista actualizada.
Criterios de aceptación positivos:
- Solicita confirmación antes de borrar
- Elimina permanentemente la tarea
Criterios de aceptación negativos:
- Si la tarea no existe: "Error: Tarea no existe"

HU-05: Como profesor quiero asignar una materia específica a cada tarea para organizar por asignatura.
Criterios de aceptación positivos:
- Permite seleccionar materia de lista
- Guarda relación tarea-materia
Criterios de aceptación negativos:
- Si la materia no es válida: "Error: Materia desconocida"

HU-06: Como usuario quiero ver todas las tareas registradas para tener una visión completa.
Criterios de aceptación positivos:
- Muestra pendientes y completadas
- Indica estado de cada tarea
Criterios de aceptación negativos:
- Si no hay tareas: "No hay tareas registradas"

##HISTORIAS DE USUARIO: Seguimiento de estados 

HU-07: Como alumno quiero indicar cuando termino una tarea para actualizar mi progreso.
Criterios de aceptación positivos:
- Permite seleccionar tarea pendiente
- Cambia estado a "Completada"
Criterios de aceptación negativos:
- Si ya está completada: "Error: Tarea ya completada"

HU-08: Como usuario quiero recibir avisos de tareas por vencer para no olvidar entregas.
Criterios de aceptación positivos:
- Muestra "Tareas próximas: [número]" al iniciar
Criterios de aceptación negativos:
- Si no hay tareas próximas: No muestra nada

HU-09: Como usuario quiero conocer el estado actual de una tarea para planificar mi tiempo.
Criterios de aceptación positivos:
- Muestra "Pendiente" o "Completada"
- Incluye fecha de creación
Criterios de aceptación negativos:
- Si la tarea no existe: "Error: Tarea no encontrada"

HU-10: Como alumno quiero ver mis tareas terminadas para llevar registro de mis logros.
Criterios de aceptación positivos:
- Lista solo tareas completadas
- Muestra fecha de finalización
Criterios de aceptación negativos:
- Si no hay completadas: "No hay tareas terminadas"

HU-11: Como usuario quiero recibir notificaciones diarias de tareas pendientes para organizar mi día.
Criterios de aceptación positivos:
- Muestra resumen cada 24 horas
- Incluye cantidad y fechas límite
Criterios de aceptación negativos:
- Si no hay pendientes: "No tienes tareas pendientes hoy"

HU-12: Como sistema quiero alertar sobre tareas vencidas para prevenir olvidos.
Criterios de aceptación positivos:
- Marca automáticamente como "Atrasada"
- Muestra ícono de alerta
Criterios de aceptación negativos:
- Si no hay tareas vencidas: No aplica

##HISTORIAS DE USUARIO: Visualización organizada

HU-13: Como alumno quiero ver solo tareas de una materia específica para enfocar mi estudio.
Criterios de aceptación positivos:
- Muestra lista de materias disponibles
- Filtra tareas al seleccionar materia
Criterios de aceptación negativos:
- Si no hay tareas: "No hay tareas para [materia]"

HU-14: Como usuario quiero identificar tareas con vencimiento cercano para priorizar mi trabajo.
Criterios de aceptación positivos:
- Muestra nombre y fecha de tareas
- Destaca en color rojo
Criterios de aceptación negativos:
- Si no hay urgentes: "No hay tareas urgentes"

HU-15: Como alumno quiero ver un calendario con fechas de entrega para planificar mi mes.
Criterios de aceptación positivos:
- Muestra fechas con tareas
- Permite navegar por meses
Criterios de aceptación negativos:
- Si no hay tareas: Calendario vacío

HU-16: Como usuario quiero buscar tareas por nombre para encontrarlas rápidamente.
Criterios de aceptación positivos:
- Busca coincidencias parciales
- Muestra resultados en lista
Criterios de aceptación negativos:
- Si no hay coincidencias: "No se encontraron tareas"

HU-17: Como alumno quiero ver cuántas tareas tengo por asignatura para distribuir mi tiempo.
Criterios de aceptación positivos:
- Muestra recuento por materia
- Incluye pendientes y completadas
Criterios de aceptación negativos:
- Si no hay tareas: "No hay tareas registradas"

HU-18: Como usuario quiero guardar mi lista de tareas en un archivo para compartirla.
Criterios de aceptación positivos:
- Genera archivo .txt
- Incluye tareas pendientes
Criterios de aceptación negativos:
- Si no hay tareas: "No hay datos para exportar"