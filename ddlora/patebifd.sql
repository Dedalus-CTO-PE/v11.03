create table patebiaf
(
  pteibthn    varchar2(8) default ' ' not null,
  pteiinvn    varchar2(8) default ' ' not null,
  pteispar    varchar2(33) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patebia1 primary key( 
pteibthn,
pteiinvn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patebia2 on patebiaf
(
pteiinvn,
pteibthn
)
  tablespace pas_indx; 
