create table prihreff
(
  dprhrunq    char(8) default ' ' not null,
  prhrprac    char(6) default ' ' not null,
  prhrdoct    char(10) default ' ' not null,
  prhrpind    char(3) default ' ' not null,
  prhrrefd    char(10) default ' ' not null,
  prhrrdat    char(8) default ' ' not null,
  prhrreft    char(50) default ' ' not null,
  dprhrpin    char(1) default ' ' not null,
  prhrmess    char(3) default ' ' not null,
  prhrbulk    char(3) default ' ' not null,
  prhrbcod    char(6) default ' ' not null,
  prhrocod    char(20) default ' ' not null,
  prhrudf1    char(3) default ' ' not null,
  prhrudf2    char(3) default ' ' not null,
  prhrudf3    char(3) default ' ' not null,
  prhrudf4    char(3) default ' ' not null,
  prhrname    char(45) default ' ' not null,
  prhradd1    char(35) default ' ' not null,
  prhradd2    char(35) default ' ' not null,
  prhradd3    char(35) default ' ' not null,
  prhradd4    char(35) default ' ' not null,
  prhrpost    char(8) default ' ' not null,
  prhrtelp    char(20) default ' ' not null,
  prhrtelb    char(20) default ' ' not null,
  prhrmphn    char(20) default ' ' not null,
  prhrrelp    char(10) default ' ' not null,
  prhruncl    decimal(8,0) default 0 not null,
  prhradmn    char(3) default ' ' not null,
  prhrrfpd    char(3) default ' ' not null,
  prhrtacc    char(3) default ' ' not null,
  prhrlvis    char(8) default ' ' not null,
  prhracci    char(1) default ' ' not null,
  prhracpd    char(1) default ' ' not null,
  prhrbass    char(1) default ' ' not null,
  prhrissc    char(3) default ' ' not null,
  prhrstcd    char(3) default ' ' not null,
  prhrfpid    char(40) default ' ' not null,
  prhrrper    char(2) default ' ' not null,
  prhrfidi    char(1) default ' ' not null,
  prhrrovr    char(3) default ' ' not null,
  prhrhcpp    char(10) default ' ' not null,
  prhrhcgc    char(2) default ' ' not null,
  prhrspar    char(12) default ' ' not null,
  lf          char(1)
);
create unique index prihref1 on prihreff
(
dprhrunq,
prhrprac,
prhrdoct,
prhrpind
);
create unique index prihref2 on prihreff
(
dprhrpin,
dprhrunq,
prhrprac,
prhrdoct,
prhrpind
);
create unique index prihref3 on prihreff
(
prhrprac,
prhrdoct,
prhrpind,
dprhrunq
);
create unique index prihref4 on prihreff
(
dprhrpin,
prhrprac,
prhrdoct,
prhrpind,
dprhrunq
);
create unique index prihref5 on prihreff
(
dprhrpin,
prhrdoct,
dprhrunq,
prhrprac,
prhrpind
);
revoke all on prihreff from public ; 
grant select on prihreff to public ; 
