create table pricfxaf
(
  prcfuniq    varchar2(8) default ' ' not null,
  prcfprac    varchar2(6) default ' ' not null,
  prcfdoct    varchar2(10) default ' ' not null,
  prcfpind    varchar2(3) default ' ' not null,
  prcfctyp    varchar2(3) default ' ' not null,
  prcfnote    varchar2(6) default ' ' not null,
  prcfline    varchar2(3) default ' ' not null,
  prcfcmnt    varchar2(100) default ' ' not null,
  prcfspar    varchar2(100) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pricfxa1 primary key( 
prcfuniq,
prcfprac,
prcfdoct,
prcfpind,
prcfctyp,
prcfnote,
prcfline)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
