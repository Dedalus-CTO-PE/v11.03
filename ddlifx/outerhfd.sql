create table outerhaf
(
  oterhosp    char(3) default ' ' not null,
  oterpypn    char(8) default ' ' not null,
  oterprun    char(4) default ' ' not null,
  oterpdat    char(8) default ' ' not null,
  oterbsbc    char(6) default ' ' not null,
  oteraccn    char(9) default ' ' not null,
  oteracnm    char(30) default ' ' not null,
  oterdamn    char(9) default ' ' not null,
  oterstat    char(1) default ' ' not null,
  oterrkey    char(24) default ' ' not null,
  oterspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index outerha1 on outerhaf
(
oterhosp,
oterpypn,
oterprun,
oterpdat,
oterrkey
);
create unique index outerha2 on outerhaf
(
oterhosp,
oterpdat,
oterpypn,
oterprun,
oterrkey
);
create unique index outerha3 on outerhaf
(
oterhosp,
oterstat,
oterpdat,
oterpypn,
oterprun,
oterrkey
);
create unique index outerha4 on outerhaf
(
oterhosp,
oterrkey,
oterpypn,
oterprun,
oterpdat
);
revoke all on outerhaf from public ; 
grant select on outerhaf to public ; 
