# Più misure rendono il risultato più accurato?

In laboratorio abbiamo misurato il periodo di un pendolo semplice e di un pendolo di torsione. Volevamo capire se fare più misure portasse davvero a un risultato più accurato. Per rispondere, secondo me bisogna prima distinguere due cose: quanto i risultati sono vicini fra loro, cioè la precisione, e quanto sono vicini al valore vero, cioè l'accuratezza. Le due cose non sono per forza uguali.

Abbiamo confrontato le misure di una sola oscillazione con quelle di dieci oscillazioni consecutive, usando due cronometri e prendendo i tempi sia guardando il pendolo sia ascoltando un segnale sonoro. Poi abbiamo confrontato le medie e cercato di capire da dove potessero venire le differenze. Avere risultati simili, infatti, non basta per sapere di aver misurato il periodo giusto.

## Richiami di teoria

Se le oscillazioni sono piccole, per entrambi i pendoli possiamo usare il modello dell'oscillatore armonico. In questa approssimazione le equazioni del moto sono:

$$
\theta^{\prime\prime} + \frac{g}{L}\theta = 0,
\qquad
I\varphi^{\prime\prime} + \kappa\varphi = 0,
$$

Da queste equazioni si ottengono le formule dei periodi:

$$
T_{\mathrm{s}} = 2\pi\sqrt{\frac{L}{g}},
\qquad
T_{\mathrm{t}} = 2\pi\sqrt{\frac{I}{\kappa}}.
$$

Qui $L$ è la lunghezza del pendolo semplice e $g$ l'accelerazione di gravità. Per il pendolo di torsione, $\kappa$ descrive quanto il filo si oppone alla torsione e $I$ è il momento di inerzia del disco rispetto all'asse di sospensione. Il momento di inerzia dipende anche da come è distribuita la massa, non solo da quanta ce n'è: si esprime con $I = \int r^2\,\mathrm{d}m$.

Non possiamo però usare queste formule per decidere direttamente quale cronometro misura bene. Per farlo servirebbero misure abbastanza accurate delle grandezze presenti nelle formule, con le loro incertezze, e noi non le abbiamo. Il fatto che un periodo sembri ragionevole non basta per dire che il cronometro è tarato correttamente.

## Apparato e procedimento

Il pendolo semplice era una piccola massa appesa a un filo lungo circa un metro. All'estremità c'era un ago sottile, che permetteva di leggere la posizione su una scala graduata. Il pendolo di torsione era invece un disco appeso a un filo metallico verticale: lo ruotavamo leggermente e lo lasciavamo andare. Un indice sul bordo e una scala fissa ci aiutavano a seguirne il movimento.

Abbiamo cercato di partire sempre da oscillazioni piccole e di ampiezza simile, lasciando andare i pendoli senza spingerli. Non abbiamo cambiato la lunghezza del pendolo semplice, il disco o il filo di torsione. In questo modo era più facile confrontare i metodi di misura senza cambiare anche il pendolo.

Avevamo due cronometri digitali, chiamati A e B. Entrambi mostravano i centesimi di secondo, ma questo non garantisce che contino il tempo nel modo corretto. Per ciascun pendolo abbiamo fatto sei serie:

- una serie con il cronometro A, guardando il pendolo e misurando una sola oscillazione;
- una serie con A, sempre guardando il pendolo, ma misurando dieci oscillazioni consecutive;
- le stesse due serie con il cronometro B;
- altre due serie con il cronometro A, senza guardare il pendolo e usando soltanto il suono dell'apparato.

In ogni serie abbiamo preso il tempo dieci volte. Nelle formule uso $N$ per il numero di prove e $m$ per il numero di oscillazioni misurate in ogni prova: qui $N = 10$, mentre $m$ vale $1$ oppure $10$. Quando misuravamo dieci oscillazioni, dividevamo il tempo totale per dieci. In tutto osservavamo cento oscillazioni, ma i valori del periodo da mettere nella media erano comunque dieci, non cento misure separate.

Per ogni pendolo ha usato il cronometro sempre la stessa persona, mentre un compagno scriveva i tempi. Nelle prove a vista partivamo e ci fermavamo quando il pendolo arrivava all'estremo dallo stesso lato. Il tempo per arrivare all'estremo opposto, invece, è solo mezzo periodo.

L'apparato poteva fare un suono ogni volta che il pendolo cambiava verso. Fra due suoni consecutivi passa quindi mezzo periodo. Per una sola oscillazione facevamo partire il cronometro al primo suono e lo fermavamo al terzo; per dieci oscillazioni lo fermavamo al ventunesimo. In queste prove non guardavamo il pendolo. Il suono era automatico, ma a premere il pulsante eravamo sempre noi.

## Tempi raccolti

Abbiamo ricavato le seguenti serie di tempi di misura. Tutti i valori nelle due tabelle sono in secondi. Le colonne '10 oscillazioni' riportano i tempi totali letti sul cronometro, prima della divisione per dieci.

### Pendolo semplice

| Prova | A, vista, 1 oscillazione | A, vista, 10 oscillazioni | B, vista, 1 oscillazione | B, vista, 10 oscillazioni | A, suono, 1 oscillazione | A, suono, 10 oscillazioni |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| 1 | 2,12 | 20,08 | 2,17 | 20,58 | 2,03 | 20,03 |
| 2 | 1,91 | 19,94 | 2,01 | 20,43 | 1,98 | 19,98 |
| 3 | 2,08 | 20,16 | 2,08 | 20,65 | 2,01 | 20,06 |
| 4 | 2,03 | 20,02 | 1,94 | 20,48 | 2,04 | 20,00 |
| 5 | 1,95 | 19,89 | 2,15 | 20,36 | 1,96 | 19,95 |
| 6 | 2,10 | 20,10 | 2,06 | 20,54 | 2,00 | 20,02 |
| 7 | 1,88 | 19,97 | 1,98 | 20,61 | 2,02 | 19,99 |
| 8 | 2,04 | 20,05 | 2,12 | 20,45 | 1,97 | 20,04 |
| 9 | 2,00 | 19,92 | 2,03 | 20,52 | 2,01 | 19,97 |
| 10 | 1,97 | 20,03 | 1,99 | 20,40 | 1,99 | 20,01 |

### Pendolo di torsione

| Prova | A, vista, 1 oscillazione | A, vista, 10 oscillazioni | B, vista, 1 oscillazione | B, vista, 10 oscillazioni | A, suono, 1 oscillazione | A, suono, 10 oscillazioni |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| 1 | 2,54 | 24,10 | 2,59 | 24,68 | 2,43 | 24,01 |
| 2 | 2,29 | 23,89 | 2,36 | 24,52 | 2,38 | 23,97 |
| 3 | 2,47 | 24,18 | 2,51 | 24,75 | 2,41 | 24,06 |
| 4 | 2,36 | 23,97 | 2,43 | 24,60 | 2,44 | 23,98 |
| 5 | 2,43 | 24,04 | 2,55 | 24,49 | 2,36 | 23,94 |
| 6 | 2,27 | 23,92 | 2,33 | 24,65 | 2,39 | 24,02 |
| 7 | 2,51 | 24,12 | 2,49 | 24,57 | 2,42 | 23,96 |
| 8 | 2,34 | 23,95 | 2,41 | 24,72 | 2,37 | 24,03 |
| 9 | 2,41 | 24,06 | 2,46 | 24,55 | 2,40 | 23,99 |
| 10 | 2,38 | 23,98 | 2,48 | 24,63 | 2,41 | 24,00 |

## Elaborazione dei dati

Per ogni serie abbiamo calcolato la media dei dieci periodi. Per esempio, nella prima prova su dieci oscillazioni del pendolo semplice con A:

$$
T = \frac{20{,}08\ \mathrm{s}}{10} = 2{,}008\ \mathrm{s}
$$

Abbiamo fatto questa divisione per tutte le prove su dieci oscillazioni. Per confrontare quanto variavano i risultati abbiamo usato anche la semidispersione, cioè metà della differenza fra il valore più alto e quello più basso:

$$
\overline{T} = \frac{T_1 + T_2 + \cdots + T_{10}}{10},
\qquad
 d = \frac{T_{\max} - T_{\min}}{2}.
$$

La semidispersione ci dice quanto sono sparsi i valori, ma non è automaticamente l'incertezza standard della media. Se le prove sono indipendenti e fatte nelle stesse condizioni, per stimare quest'ultima si usa $s/\sqrt{N}$, dove $s$ è la deviazione standard del campione. Qui abbiamo tenuto la semidispersione come confronto: non possiamo associarle una probabilità precisa che il periodo vero sia dentro l'intervallo.

Nella tabella abbiamo arrotondato tutto al millesimo di secondo per leggere meglio le differenze. Scrivere più cifre, però, non significa sapere il periodo con quell'accuratezza.

| Pendolo | Serie | Periodo medio (s) | Semidispersione (s) |
| --- | --- | ---: | ---: |
| Semplice | A, vista, 1 oscillazione | 2,008 | 0,120 |
| Semplice | A, vista, 10 oscillazioni | 2,002 | 0,014 |
| Semplice | B, vista, 1 oscillazione | 2,053 | 0,115 |
| Semplice | B, vista, 10 oscillazioni | 2,050 | 0,015 |
| Semplice | A, suono, 1 oscillazione | 2,001 | 0,040 |
| Semplice | A, suono, 10 oscillazioni | 2,001 | 0,006 |
| Torsione | A, vista, 1 oscillazione | 2,400 | 0,135 |
| Torsione | A, vista, 10 oscillazioni | 2,402 | 0,015 |
| Torsione | B, vista, 1 oscillazione | 2,461 | 0,130 |
| Torsione | B, vista, 10 oscillazioni | 2,462 | 0,013 |
| Torsione | A, suono, 1 oscillazione | 2,401 | 0,040 |
| Torsione | A, suono, 10 oscillazioni | 2,400 | 0,006 |

## Analisi e discussione

### Un modello per capire gli errori

Per capire che cosa cambia ripetendo le prove e che cosa cambia misurando più oscillazioni insieme, mi sono aiutato con questo modello. Considero un pendolo e un modo di prendere i tempi alla volta:

$$
t_{i,m}^{(c)} = a_c\,mT_\star + b_c + \varepsilon_i^{(c)},
\qquad
\widehat{T}_{i,m}^{(c)} = \frac{t_{i,m}^{(c)}}{m}
= a_cT_\star + \frac{b_c}{m} + \frac{\varepsilon_i^{(c)}}{m}.
$$

$T_\star$ è il periodo che vogliamo trovare e $c$ indica il cronometro usato. Il fattore $a_c$ tiene conto del fatto che un cronometro potrebbe contare i secondi un po' più velocemente o più lentamente del dovuto. Con $b_c$ indico invece uno scarto fisso dovuto a come prendiamo il tempo. Il termine $\varepsilon_i^{(c)}$ raccoglie le differenze da una prova all'altra, che suppongo abbiano media nulla. Una parte può venire dalla differenza fra il ritardo con cui fermiamo e quello con cui avviamo il cronometro. In questo modello suppongo che il periodo non cambi durante la misura.

Se queste differenze sono indipendenti fra una prova e l'altra e hanno sempre la stessa varianza $\sigma_\varepsilon^2$, per la media di $N$ prove si ottiene:

$$
\operatorname{Bias}\!\left(\overline{T}_{N,m}^{(c)}\right)
= (a_c-1)T_\star + \frac{b_c}{m},
\qquad
\operatorname{Var}\!\left(\overline{T}_{N,m}^{(c)}\right)
= \frac{\sigma_\varepsilon^2}{m^2N}.
$$

Il bias della prima formula è lo scarto che la nostra media avrebbe, in media, rispetto al periodo vero. La varianza descrive invece quanto la media può cambiare rifacendo la serie. Se aumento $N$, la varianza diminuisce, ma il bias resta. Quindi posso ottenere una media sempre più stabile senza togliere un errore che si ripete ogni volta. Le due parti compaiono nella formula dell'errore quadratico medio, indicato con MSE:

$$
\operatorname{MSE}(\overline{T})
= \operatorname{Var}(\overline{T})
+ \bigl[\operatorname{Bias}(\overline{T})\bigr]^2.
$$

Anche facendo moltissime prove, la media tende al valore medio dato dal nostro modo di misurare, che può essere diverso da $T_\star$. La legge dei grandi numeri non corregge da sola un cronometro che conta male il tempo. Bisogna anche fare attenzione alle condizioni: se ci stanchiamo, se una prova influenza la successiva o se l'apparato cambia durante il lavoro, le ipotesi delle formule possono non valere più. In quel caso non è garantito neanche che l'incertezza diminuisca come $N^{-1/2}$.

### Ripetere le prove o misurare più oscillazioni

Con A, i tempi di una sola oscillazione del pendolo semplice vanno da 1,88 s a 2,12 s. Misurando dieci oscillazioni insieme, la semidispersione del periodo passa da 0,120 s a circa 0,014 s. Questo fa pensare che una parte importante delle differenze venga dal momento in cui premiamo per partire e per fermarci.

Nel modello, aumentando $m$ si dividono per un numero maggiore sia gli scarti casuali dei due azionamenti sia l'eventuale scarto fisso $b_c$. Non si elimina invece il fattore $a_c$: se il cronometro sbaglia di una certa percentuale, quella percentuale resta anche dividendo il tempo per dieci. Misurare più oscillazioni insieme, quindi, non è esattamente la stessa cosa che ripetere più volte una misura breve.

Per lo stesso motivo, dieci prove su dieci oscillazioni non diventano cento misure indipendenti del periodo. Il vantaggio è che l'errore nel prendere gli istanti iniziale e finale pesa meno sul periodo calcolato. Anche con il pendolo di torsione i valori sono meno sparsi usando dieci oscillazioni. Non direi però che questo pendolo è più regolare in generale: dai nostri numeri non si può concludere.

### Le prove con il suono

Usando il suono, la semidispersione è di 0,040 s sulle singole oscillazioni di entrambi i pendoli e di circa 0,006 s sulle prove lunghe. I risultati sono quindi più vicini fra loro. Il suono sembra aiutare perché dà un segnale netto, mentre guardando il pendolo è difficile scegliere l'istante esatto in cui cambia verso: proprio lì la velocità si annulla.

Se il suono arriva con lo stesso ritardo all'inizio e alla fine, quel ritardo si cancella quando facciamo la differenza dei tempi. Se invece il ritardo cambia, può aggiungere un altro errore. Avere valori meno sparsi non dimostra quindi che tutti gli errori sistematici siano spariti. Inoltre abbiamo usato il suono solo con A: non sappiamo se con B avremmo avuto lo stesso miglioramento.

### Le differenze fra A e B

Con B le medie sono più alte che con A, per entrambi i pendoli e sia con una sola oscillazione sia con dieci. Nelle prove lunghe la differenza è di circa 0,05 s per il pendolo semplice e di circa 0,06 s per quello di torsione. In percentuale siamo intorno al 2,4–2,5% in tutti e due i casi. Questo fa pensare che i cronometri possano contare i secondi in modo leggermente diverso, anche se i nostri dati non bastano a dimostrare che sia proprio questa la causa.

Se trascuriamo gli scarti additivi, facendo il rapporto fra le medie troviamo circa il rapporto fra i fattori dei due cronometri:

$$
R = \frac{\overline{T}_{B}}{\overline{T}_{A}}
\simeq \frac{a_B}{a_A}.
$$

Questo rapporto mette a confronto i due cronometri, ma non ci permette di trovare separatamente $a_A$, $a_B$ e $T_\star$. In pratica vediamo che non danno lo stesso risultato, ma non sappiamo quale dei due sia più vicino al periodo vero. Potrebbe essere corretto A, oppure B, oppure potrebbero sbagliare entrambi, anche con una parte di errore in comune.

Non possiamo quindi dire di conoscere il periodo al millesimo solo perché le misure fatte con uno stesso cronometro sono vicine fra loro. D'altra parte, la differenza fra A e B non ci dice nemmeno quanto sbaglia ciascuno: uno potrebbe anche essere corretto. Per controllarli e correggerli servirebbe un riferimento esterno, di cui conosciamo l'incertezza, con cui confrontare i tempi.

### Come cambia la media aggiungendo misure

Nella serie A a vista di una sola oscillazione del pendolo semplice, il primo risultato è 2,12 s, la media delle prime cinque prove è 2,018 s e quella delle dieci prove è 2,008 s. La media sembra assestarsi, ma non sappiamo se si stia avvicinando al periodo vero. Il fatto che diminuisca non significa, da solo, che stia diventando più giusta.

Guardare come cambia la media aggiungendo una prova alla volta può aiutare ad accorgersi se qualcosa cambia durante l'esperimento. Non fa però comparire un errore che resta uguale in tutte le prove. Ripetendo le misure capiamo meglio quanto variano i risultati, ma non cancelliamo automaticamente gli errori sistematici.

## Conclusioni

Alla domanda iniziale risponderei quindi: non necessariamente. Se le condizioni restano stabili, fare più prove può ridurre la parte casuale dell'errore e rendere più precisa la media. Questo può anche ridurre l'errore complessivo, in media, ma non corregge uno scarto sistematico e non garantisce che il risultato ottenuto sia vicino al valore vero.

Fra le prove che abbiamo fatto, sceglierei quelle con il suono su dieci oscillazioni, perché hanno dato i risultati meno sparsi: circa 2,001 s per il pendolo semplice e 2,400 s per quello di torsione. Restano però valori misurati con A e con il nostro metodo. Senza controllare il cronometro non possiamo dire che siano i periodi veri.

Se rifacessimo l'esperienza, prima di aggiungere molte altre prove cercherei un modo per controllare i cronometri con un riferimento affidabile. Proverei anche B con il suono e valuterei meglio le diverse cause di incertezza. La cosa che ho capito è che avere tanti risultati quasi uguali è utile, ma non basta: se c'è un errore che si ripete sempre, possiamo ottenere una media molto stabile e comunque sbagliata.
