create table pmsfedaf
(
  pmfdquot    char(12) default ' ' not null,
  pmfdurno    char(8) default ' ' not null,
  pmfdnons    decimal(5,0) default 0 not null,
  pmfdadat    char(8) default ' ' not null,
  pmfdhfun    char(6) default ' ' not null,
  pmfdhftb    char(8) default ' ' not null,
  pmfdcmcd    char(9) default ' ' not null,
  pmfdclty    char(3) default ' ' not null,
  pmfdbdty    char(3) default ' ' not null,
  pmfdatyp    char(3) default ' ' not null,
  pmfdagst    decimal(1,0) default 0 not null,
  pmfdbdt2    char(3) default ' ' not null,
  pmfdbdt3    char(3) default ' ' not null,
  pmfdbdt4    char(3) default ' ' not null,
  pmfdbdt5    char(3) default ' ' not null,
  pmfdnds2    decimal(5,0) default 0 not null,
  pmfdnds3    decimal(5,0) default 0 not null,
  pmfdnds4    decimal(5,0) default 0 not null,
  pmfdnds5    decimal(5,0) default 0 not null,
  pmfdcmn1    char(70) default ' ' not null,
  pmfdcmn2    char(70) default ' ' not null,
  pmfdcmn3    char(70) default ' ' not null,
  pmfdcmn4    char(70) default ' ' not null,
  pmfdcmn5    char(70) default ' ' not null,
  pmfdxcss    decimal(14,2) default 0 not null,
  pmfdexpd    char(8) default ' ' not null,
  pmfdcdat    char(8) default ' ' not null,
  pmfdctim    char(8) default ' ' not null,
  pmfdcuid    char(10) default ' ' not null,
  pmfddoct    char(10) default ' ' not null,
  pmfdachr    char(1) default ' ' not null,
  pmfdubas    char(1) default ' ' not null,
  pmfdspar    char(19) default ' ' not null,
  lf          char(1)
);
create unique index pmsfeda1 on pmsfedaf
(
pmfdquot
);
create unique index pmsfeda2 on pmsfedaf
(
pmfdurno,
pmfdquot
);
revoke all on pmsfedaf from public ; 
grant select on pmsfedaf to public ; 
