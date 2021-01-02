Jour/Nuit:
----------

A l'aide de 3 PIN de l'Arduino UNO, dont 2 envoyant du courant
 (pinMode = OUPUT) et 1 en recevant (pinMode = INPUT),
on est capable d'allumer une LED tout en eteignant l'autre
selon que le bouton soit enfoncé ou non.

Quand le bouton (PIN2) est enfoncé la LED jaune reliée au PIN n°6 n'allume
tandis que l'autre LED reste eteinte, lorsque le bouton est levé la LED verte
du PIN 4 s'allume et l'autre s'eteint. 

nb : Quand le Pin relié au bouton renvoit "1" cela signifie qu'il reçoit
du courant.
