create table pmsirsaf
(
  pmisrtyp    char(2) default ' ' not null,
  pmiscode    char(50) default ' ' not null,
  pmisrdat    char(8) default ' ' not null,
  pmisrtim    char(8) default ' ' not null,
  pmisruid    char(10) default ' ' not null,
  pmissurn    char(40) default ' ' not null,
  pmisfnam    char(40) default ' ' not null,
  pmissnam    char(40) default ' ' not null,
  pmisbdat    char(8) default ' ' not null,
  pmispsex    char(1) default ' ' not null,
  pmismedi    char(10) default ' ' not null,
  pmismccd    char(2) default ' ' not null,
  pmismedv    char(8) default ' ' not null,
  pmisdvan    char(20) default ' ' not null,
  pmisihin    char(20) default ' ' not null,
  pmisadd1    char(60) default ' ' not null,
  pmisadd2    char(60) default ' ' not null,
  pmisadd3    char(60) default ' ' not null,
  pmisadd4    char(60) default ' ' not null,
  pmispost    char(8) default ' ' not null,
  pmissad1    char(60) default ' ' not null,
  pmissad2    char(60) default ' ' not null,
  pmissad3    char(60) default ' ' not null,
  pmissad4    char(60) default ' ' not null,
  pmisspst    char(8) default ' ' not null,
  pmishpii    char(20) default ' ' not null,
  pmisptyp    char(1) default ' ' not null,
  pmisname    char(50) default ' ' not null,
  pmishpio    char(20) default ' ' not null,
  pmisstyp    char(1) default ' ' not null,
  pmisunit    char(20) default ' ' not null,
  pmisvsta    char(1) default ' ' not null,
  pmisasta    char(1) default ' ' not null,
  pmisrscd    char(3) default ' ' not null,
  pmisrsde    char(500) default ' ' not null,
  pmisrver    char(10) default ' ' not null,
  pmisspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index pmsirsa1 on pmsirsaf
(
pmisrtyp,
pmiscode,
pmisrdat,
pmisrtim
);
revoke all on pmsirsaf from public ; 
grant select on pmsirsaf to public ; 
