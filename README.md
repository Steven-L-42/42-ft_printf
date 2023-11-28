# ft_printf - README

![printf](https://github.com/byaliego/42-project-badges/blob/main/badges/ft_printfe.png?raw=true)

## Überblick

Dieses Repository beinhaltet die Implementierung der Printf-Funktion in C, bekannt für ihre Vielseitigkeit und Popularität. Die Aufgabe bietet eine großartige Gelegenheit, deine Programmierkenntnisse zu verbessern und die Verwendung variadischer Funktionen in C zu erkunden. Nach erfolgreicher Umsetzung kannst du deine ft_printf()-Funktion zur libft hinzufügen und sie in zukünftigen C-Projekten an der Schule verwenden.

## Verzeichnisstruktur

- `Makefile`: Regeln für die Kompilierung und Bereitstellung der Bibliothek.
- `*.h`, `*/*.h`: Header-Dateien für die Funktionen.
- `*.c`, `*/*.c`: Implementierungen der geforderten Funktionen.

## Makefile-Regeln

- `NAME`: libftprintf.a
- `all`: Kompiliert die gesamte Bibliothek.
- `clean`: Entfernt temporäre Dateien.
- `fclean`: Entfernt erstellte Dateien und die Bibliothek.
- `re`: Entfernt alle Dateien und erstellt die Bibliothek neu.

## Externe Funktionen

- `malloc`, `free`, `write`
- `va_start`, `va_arg`, `va_copy`, `va_end`

## Technische Überlegungen

- Buffer-Management der originalen printf()-Funktion nicht implementieren.
- Die Funktion muss folgende Konvertierungen behandeln: `cspdiuxX%`.
- Der Vergleich erfolgt mit der originalen printf()-Funktion.
- Verwendung des `ar`-Befehls zur Bibliothekenerstellung. Verwendung von libtool ist verboten.
- Die libftprintf.a muss im Root-Verzeichnis des Repositories erstellt werden.

## Umzusetzende Konvertierungen

- `%c`: Gibt ein einzelnes Zeichen aus.
- `%s`: Gibt einen String aus (gemäß der üblichen C-Konvention).
- `%p`: Der `void *`-Pointer wird im hexadezimalen Format ausgegeben.
- `%d`: Gibt eine Dezimalzahl (Basis 10) aus.
- `%i`: Gibt eine Ganzzahl in Basis 10 aus.
- `%u`: Gibt eine nicht vorzeichenbehaftete Dezimalzahl (Basis 10) aus.
- `%x`: Gibt eine Zahl im hexadezimalen Format (Basis 16) in Kleinbuchstaben aus.
- `%X`: Gibt eine Zahl im hexadezimalen Format (Basis 16) in Großbuchstaben aus.
- `%%`: Gibt ein Prozentzeichen aus.
