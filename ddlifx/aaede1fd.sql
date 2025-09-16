create table aaede1af
(
  dadanumb    char(8) default ' ' not null,
  adadate     char(8) default ' ' not null,
  adatime     char(5) default ' ' not null,
  adaurno     char(8) default ' ' not null,
  adacomp     char(3) default ' ' not null,
  adaclass    char(3) default ' ' not null,
  adainsur    char(3) default ' ' not null,
  adasrc      char(3) default ' ' not null,
  adasit      char(3) default ' ' not null,
  adamode     char(3) default ' ' not null,
  adafill     char(1) default ' ' not null,
  adadoct     char(6) default ' ' not null,
  adaseen     char(5) default ' ' not null,
  adaadmit    decimal(1,0) default 0 not null,
  adalock     char(2) default ' ' not null,
  adadurn     decimal(4,0) default 0 not null,
  adaempl     char(20) default ' ' not null,
  adaadd1     char(35) default ' ' not null,
  adaadd2     char(35) default ' ' not null,
  adasubr     char(35) default ' ' not null,
  adaadd4     char(35) default ' ' not null,
  adapost     char(8) default ' ' not null,
  adatele     char(20) default ' ' not null,
  adacont     char(20) default ' ' not null,
  adausr1     char(3) default ' ' not null,
  adausr2     char(3) default ' ' not null,
  adausr3     char(3) default ' ' not null,
  adausr4     char(3) default ' ' not null,
  adausr5     char(3) default ' ' not null,
  adadiag     char(60) default ' ' not null,
  adafil2     decimal(1,0) default 0 not null,
  adawait     char(3) default ' ' not null,
  adasdte     char(8) default ' ' not null,
  adaprev     char(3) default ' ' not null,
  aedafund    char(6) default ' ' not null,
  aedatble    char(8) default ' ' not null,
  daedapvi    char(2) default ' ' not null,
  aedarfgp    char(8) default ' ' not null,
  aedagppc    char(6) default ' ' not null,
  daedanpn    char(3) default ' ' not null,
  aedatias    char(5) default ' ' not null,
  aedadtat    char(5) default ' ' not null,
  aedatesi    char(3) default ' ' not null,
  aedaempl    char(6) default ' ' not null,
  aedartas    char(3) default ' ' not null,
  aedainit    char(3) default ' ' not null,
  aedaplin    char(3) default ' ' not null,
  aedadias    char(8) default ' ' not null,
  aedarnen    char(8) default ' ' not null,
  aedacons    char(6) default ' ' not null,
  aedagppt    char(2) default ' ' not null,
  aedaprtm    char(5) default ' ' not null,
  aedardoc    char(6) default ' ' not null,
  adaprty     char(3) default ' ' not null,
  aedaoper    char(4) default ' ' not null,
  aedaspar    char(40) default ' ' not null,
  lf          char(1)
);
create unique index aaede1a1 on aaede1af
(
dadanumb
);
create unique index aaede1a2 on aaede1af
(
adaurno,
dadanumb
);
create unique index aaede1a3 on aaede1af
(
adadate,
adatime,
dadanumb
);
create unique index aaede1a4 on aaede1af
(
adadoct,
adadate,
adatime,
dadanumb
);
revoke all on aaede1af from public ; 
grant select on aaede1af to public ; 
