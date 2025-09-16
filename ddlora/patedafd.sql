create table patedaaf
(
  ptedinvn    varchar2(8) default ' ' not null,
  pteddecm    varchar2(8) default ' ' not null,
  ptedtecm    varchar2(8) default ' ' not null,
  ptedoprr    varchar2(4) default ' ' not null,
  dptededs    varchar2(1) default ' ' not null,
  ptedbthn    varchar2(8) default ' ' not null,
  dptedeet    varchar2(1) default ' ' not null,
  ptedspr1    varchar2(41) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patedaa1 primary key( 
ptedinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
