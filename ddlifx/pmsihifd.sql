create table pmsihiaf
(
  pmihurno    char(8) default ' ' not null,
  pmihihin    char(20) default ' ' not null,
  pmihadat    char(8) default ' ' not null,
  pmihatim    char(8) default ' ' not null,
  pmihvsta    char(1) default ' ' not null,
  pmihasta    char(1) default ' ' not null,
  pmihstat    char(1) default ' ' not null,
  pmihourn    char(8) default ' ' not null,
  pmihihis    char(2) default ' ' not null,
  pmihhisv    char(10) default ' ' not null,
  pmihmesi    char(127) default ' ' not null,
  pmihbati    char(20) default ' ' not null,
  pmihintb    char(3) default ' ' not null,
  pmihnuid    char(10) default ' ' not null,
  pmihcdat    char(8) default ' ' not null,
  pmihctim    char(8) default ' ' not null,
  pmihcuid    char(10) default ' ' not null,
  pmihudat    char(8) default ' ' not null,
  pmihutim    char(8) default ' ' not null,
  pmihuuid    char(10) default ' ' not null,
  pmihedat    char(8) default ' ' not null,
  pmihetim    char(8) default ' ' not null,
  pmihspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsihia1 on pmsihiaf
(
pmihurno,
pmihihin,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
);
create unique index pmsihia2 on pmsihiaf
(
pmihurno,
pmihihin,
pmihadat,
pmihatim,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
);
create unique index pmsihia3 on pmsihiaf
(
pmihihin,
pmihadat,
pmihatim,
pmihurno,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
);
create unique index pmsihia4 on pmsihiaf
(
pmihadat,
pmihatim,
pmihihin,
pmihurno,
pmihvsta,
pmihasta,
pmihedat,
pmihetim
);
revoke all on pmsihiaf from public ; 
grant select on pmsihiaf to public ; 
