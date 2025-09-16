create table prihreff
(
  dprhrunq    varchar2(8) default ' ' not null,
  prhrprac    varchar2(6) default ' ' not null,
  prhrdoct    varchar2(10) default ' ' not null,
  prhrpind    varchar2(3) default ' ' not null,
  prhrrefd    varchar2(10) default ' ' not null,
  prhrrdat    varchar2(8) default ' ' not null,
  prhrreft    varchar2(50) default ' ' not null,
  dprhrpin    varchar2(1) default ' ' not null,
  prhrmess    varchar2(3) default ' ' not null,
  prhrbulk    varchar2(3) default ' ' not null,
  prhrbcod    varchar2(6) default ' ' not null,
  prhrocod    varchar2(20) default ' ' not null,
  prhrudf1    varchar2(3) default ' ' not null,
  prhrudf2    varchar2(3) default ' ' not null,
  prhrudf3    varchar2(3) default ' ' not null,
  prhrudf4    varchar2(3) default ' ' not null,
  prhrname    varchar2(45) default ' ' not null,
  prhradd1    varchar2(35) default ' ' not null,
  prhradd2    varchar2(35) default ' ' not null,
  prhradd3    varchar2(35) default ' ' not null,
  prhradd4    varchar2(35) default ' ' not null,
  prhrpost    varchar2(8) default ' ' not null,
  prhrtelp    varchar2(20) default ' ' not null,
  prhrtelb    varchar2(20) default ' ' not null,
  prhrmphn    varchar2(20) default ' ' not null,
  prhrrelp    varchar2(10) default ' ' not null,
  prhruncl    number(8,0) default 0 not null,
  prhradmn    varchar2(3) default ' ' not null,
  prhrrfpd    varchar2(3) default ' ' not null,
  prhrtacc    varchar2(3) default ' ' not null,
  prhrlvis    varchar2(8) default ' ' not null,
  prhracci    varchar2(1) default ' ' not null,
  prhracpd    varchar2(1) default ' ' not null,
  prhrbass    varchar2(1) default ' ' not null,
  prhrissc    varchar2(3) default ' ' not null,
  prhrstcd    varchar2(3) default ' ' not null,
  prhrfpid    varchar2(40) default ' ' not null,
  prhrrper    varchar2(2) default ' ' not null,
  prhrfidi    varchar2(1) default ' ' not null,
  prhrrovr    varchar2(3) default ' ' not null,
  prhrhcpp    varchar2(10) default ' ' not null,
  prhrhcgc    varchar2(2) default ' ' not null,
  prhrspar    varchar2(12) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint prihref1 primary key( 
dprhrunq,
prhrprac,
prhrdoct,
prhrpind)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index prihref2 on prihreff
(
dprhrpin,
dprhrunq,
prhrprac,
prhrdoct,
prhrpind
)
  tablespace pas_indx; 
create unique index prihref3 on prihreff
(
prhrprac,
prhrdoct,
prhrpind,
dprhrunq
)
  tablespace pas_indx; 
create unique index prihref4 on prihreff
(
dprhrpin,
prhrprac,
prhrdoct,
prhrpind,
dprhrunq
)
  tablespace pas_indx; 
create unique index prihref5 on prihreff
(
dprhrpin,
prhrdoct,
dprhrunq,
prhrprac,
prhrpind
)
  tablespace pas_indx; 
