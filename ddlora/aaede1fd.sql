create table aaede1af
(
  dadanumb    varchar2(8) default ' ' not null,
  adadate     varchar2(8) default ' ' not null,
  adatime     varchar2(5) default ' ' not null,
  adaurno     varchar2(8) default ' ' not null,
  adacomp     varchar2(3) default ' ' not null,
  adaclass    varchar2(3) default ' ' not null,
  adainsur    varchar2(3) default ' ' not null,
  adasrc      varchar2(3) default ' ' not null,
  adasit      varchar2(3) default ' ' not null,
  adamode     varchar2(3) default ' ' not null,
  adafill     varchar2(1) default ' ' not null,
  adadoct     varchar2(6) default ' ' not null,
  adaseen     varchar2(5) default ' ' not null,
  adaadmit    number(1,0) default 0 not null,
  adalock     varchar2(2) default ' ' not null,
  adadurn     number(4,0) default 0 not null,
  adaempl     varchar2(20) default ' ' not null,
  adaadd1     varchar2(35) default ' ' not null,
  adaadd2     varchar2(35) default ' ' not null,
  adasubr     varchar2(35) default ' ' not null,
  adaadd4     varchar2(35) default ' ' not null,
  adapost     varchar2(8) default ' ' not null,
  adatele     varchar2(20) default ' ' not null,
  adacont     varchar2(20) default ' ' not null,
  adausr1     varchar2(3) default ' ' not null,
  adausr2     varchar2(3) default ' ' not null,
  adausr3     varchar2(3) default ' ' not null,
  adausr4     varchar2(3) default ' ' not null,
  adausr5     varchar2(3) default ' ' not null,
  adadiag     varchar2(60) default ' ' not null,
  adafil2     number(1,0) default 0 not null,
  adawait     varchar2(3) default ' ' not null,
  adasdte     varchar2(8) default ' ' not null,
  adaprev     varchar2(3) default ' ' not null,
  aedafund    varchar2(6) default ' ' not null,
  aedatble    varchar2(8) default ' ' not null,
  daedapvi    varchar2(2) default ' ' not null,
  aedarfgp    varchar2(8) default ' ' not null,
  aedagppc    varchar2(6) default ' ' not null,
  daedanpn    varchar2(3) default ' ' not null,
  aedatias    varchar2(5) default ' ' not null,
  aedadtat    varchar2(5) default ' ' not null,
  aedatesi    varchar2(3) default ' ' not null,
  aedaempl    varchar2(6) default ' ' not null,
  aedartas    varchar2(3) default ' ' not null,
  aedainit    varchar2(3) default ' ' not null,
  aedaplin    varchar2(3) default ' ' not null,
  aedadias    varchar2(8) default ' ' not null,
  aedarnen    varchar2(8) default ' ' not null,
  aedacons    varchar2(6) default ' ' not null,
  aedagppt    varchar2(2) default ' ' not null,
  aedaprtm    varchar2(5) default ' ' not null,
  aedardoc    varchar2(6) default ' ' not null,
  adaprty     varchar2(3) default ' ' not null,
  aedaoper    varchar2(4) default ' ' not null,
  aedaspar    varchar2(40) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint aaede1a1 primary key( 
dadanumb)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index aaede1a2 on aaede1af
(
adaurno,
dadanumb
)
  tablespace pas_indx; 
create unique index aaede1a3 on aaede1af
(
adadate,
adatime,
dadanumb
)
  tablespace pas_indx; 
create unique index aaede1a4 on aaede1af
(
adadoct,
adadate,
adatime,
dadanumb
)
  tablespace pas_indx; 
