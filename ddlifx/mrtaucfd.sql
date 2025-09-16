create table mrtaucaf
(
  mracvisn    char(8) default ' ' not null,
  mracepsn    char(2) default ' ' not null,
  mracadte    char(8) default ' ' not null,
  mracodrg    char(4) default ' ' not null,
  mracowie    decimal(10,4) default 0 not null,
  mracndrg    char(4) default ' ' not null,
  mracnwie    decimal(10,4) default 0 not null,
  mracdwie    decimal(10,4) default 0 not null,
  mracclnc    char(10) default ' ' not null,
  mractype    char(3) default ' ' not null,
  mracrchg    char(3) default ' ' not null,
  mracnchg    char(1) default ' ' not null,
  mraccomm    char(100) default ' ' not null,
  mraccdte    char(8) default ' ' not null,
  mracctim    char(8) default ' ' not null,
  mraccusr    char(10) default ' ' not null,
  mraccdsc    char(30) default ' ' not null,
  mracudte    char(8) default ' ' not null,
  mracutim    char(8) default ' ' not null,
  mracuusr    char(10) default ' ' not null,
  mracudsc    char(30) default ' ' not null,
  mracodol    decimal(14,2) default 0 not null,
  mracndol    decimal(14,2) default 0 not null,
  mracdifd    decimal(14,2) default 0 not null,
  mracddnr    char(1) default ' ' not null,
  mracohcp    char(10) default ' ' not null,
  mracocof    char(3) default ' ' not null,
  mracodat    char(8) default ' ' not null,
  mracspar    char(28) default ' ' not null,
  lf          char(1)
);
create unique index mrtauca1 on mrtaucaf
(
mracvisn,
mracepsn
);
create unique index mrtauca2 on mrtaucaf
(
mracvisn,
mracepsn,
mracadte
);
revoke all on mrtaucaf from public ; 
grant select on mrtaucaf to public ; 
