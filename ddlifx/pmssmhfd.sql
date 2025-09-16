create table pmssmhaf
(
  pmsmumid    char(16) default ' ' not null,
  pmsmurno    char(8) default ' ' not null,
  pmsmmtyp    char(2) default ' ' not null,
  pmsmrkey    char(30) default ' ' not null,
  pmsmscod    char(3) default ' ' not null,
  pmsmsdat    char(8) default ' ' not null,
  pmsmstim    char(8) default ' ' not null,
  pmsmmnum    char(20) default ' ' not null,
  pmsmsuid    char(10) default ' ' not null,
  pmsmmesa    char(160) default ' ' not null,
  pmsmmesb    char(160) default ' ' not null,
  pmsmmesc    char(160) default ' ' not null,
  pmsmmesd    char(160) default ' ' not null,
  pmsmmese    char(160) default ' ' not null,
  pmsmmesf    char(160) default ' ' not null,
  pmsmstat    char(2) default ' ' not null,
  pmsmahoc    char(1) default ' ' not null,
  pmsmcont    char(1) default ' ' not null,
  pmsmctyp    char(3) default ' ' not null,
  pmsmrmid    char(16) default ' ' not null,
  pmsmspar    char(79) default ' ' not null,
  lf          char(1)
);
create unique index pmssmha1 on pmssmhaf
(
pmsmumid
);
create unique index pmssmha2 on pmssmhaf
(
pmsmurno,
pmsmumid
);
create unique index pmssmha3 on pmssmhaf
(
pmsmsdat,
pmsmstim,
pmsmumid
);
create unique index pmssmha4 on pmssmhaf
(
pmsmstat,
pmsmumid
);
create unique index pmssmha5 on pmssmhaf
(
pmsmmtyp,
pmsmrkey,
pmsmsdat,
pmsmstim,
pmsmumid
);
create unique index pmssmha6 on pmssmhaf
(
pmsmrmid,
pmsmumid
);
revoke all on pmssmhaf from public ; 
grant select on pmssmhaf to public ; 
