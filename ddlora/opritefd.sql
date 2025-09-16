create table opriteaf
(
  opitcode    varchar2(15) default ' ' not null,
  opitdesc    varchar2(50) default ' ' not null,
  opitindc    varchar2(1) default ' ' not null,
  opitgrpg    varchar2(3) default ' ' not null,
  opitucss    varchar2(2) default ' ' not null,
  opitccbn    varchar2(15) default ' ' not null,
  opitcatn    varchar2(7) default ' ' not null,
  opitdipd    varchar2(8) default ' ' not null,
  opitscat    varchar2(15) default ' ' not null,
  opitsdes    varchar2(50) default ' ' not null,
  opitlmad    varchar2(8) default ' ' not null,
  opitcrst    varchar2(1) default ' ' not null,
  opitstdt    varchar2(8) default ' ' not null,
  opitnote    varchar2(50) default ' ' not null,
  opituslo    varchar2(15) default ' ' not null,
  opitculo    varchar2(15) default ' ' not null,
  opitudt1    varchar2(50) default ' ' not null,
  opitudt2    varchar2(50) default ' ' not null,
  opitudt3    varchar2(50) default ' ' not null,
  opitudt4    varchar2(50) default ' ' not null,
  opitudt5    varchar2(50) default ' ' not null,
  opitudf1    varchar2(3) default ' ' not null,
  opitudf2    varchar2(3) default ' ' not null,
  opitudf3    varchar2(3) default ' ' not null,
  opitudf4    varchar2(3) default ' ' not null,
  opitudf5    varchar2(3) default ' ' not null,
  opitdte1    varchar2(8) default ' ' not null,
  opitdte2    varchar2(8) default ' ' not null,
  opitdte3    varchar2(8) default ' ' not null,
  opitdte4    varchar2(8) default ' ' not null,
  opitdte5    varchar2(8) default ' ' not null,
  opittme1    varchar2(8) default ' ' not null,
  opittme2    varchar2(8) default ' ' not null,
  opittme3    varchar2(8) default ' ' not null,
  opittme4    varchar2(8) default ' ' not null,
  opittme5    varchar2(8) default ' ' not null,
  opitspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint opritea1 primary key( 
opitcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index opritea2 on opriteaf
(
opitdesc,
opitcode
)
  tablespace pas_indx; 
create unique index opritea3 on opriteaf
(
opitgrpg,
opitcode
)
  tablespace pas_indx; 
create unique index opritea4 on opriteaf
(
opitindc,
opitdesc,
opitcode
)
  tablespace pas_indx; 
