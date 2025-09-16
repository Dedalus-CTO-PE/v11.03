create table pmsirqaf
(
  pmiqrtyp    char(2) default ' ' not null,
  pmiqcode    char(50) default ' ' not null,
  pmiqrdat    char(8) default ' ' not null,
  pmiqrtim    char(8) default ' ' not null,
  pmiqruid    char(10) default ' ' not null,
  pmiqsurn    char(40) default ' ' not null,
  pmiqfnam    char(40) default ' ' not null,
  pmiqsnam    char(40) default ' ' not null,
  pmiqbdat    char(8) default ' ' not null,
  pmiqpsex    char(1) default ' ' not null,
  pmiqmedi    char(10) default ' ' not null,
  pmiqmccd    char(2) default ' ' not null,
  pmiqmedv    char(8) default ' ' not null,
  pmiqdvan    char(20) default ' ' not null,
  pmiqiden    char(20) default ' ' not null,
  pmiqadd1    char(60) default ' ' not null,
  pmiqadd2    char(60) default ' ' not null,
  pmiqadd3    char(60) default ' ' not null,
  pmiqadd4    char(60) default ' ' not null,
  pmiqpost    char(8) default ' ' not null,
  pmiqsad1    char(60) default ' ' not null,
  pmiqsad2    char(60) default ' ' not null,
  pmiqsad3    char(60) default ' ' not null,
  pmiqsad4    char(60) default ' ' not null,
  pmiqspst    char(8) default ' ' not null,
  pmiqptyp    char(1) default ' ' not null,
  pmiqname    char(50) default ' ' not null,
  pmiqstyp    char(1) default ' ' not null,
  pmiqunit    char(20) default ' ' not null,
  pmiqspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsirqa1 on pmsirqaf
(
pmiqrtyp,
pmiqcode,
pmiqrdat,
pmiqrtim
);
revoke all on pmsirqaf from public ; 
grant select on pmsirqaf to public ; 
