create table patecmaf
(
  dptemadm    varchar2(8) default ' ' not null,
  dptemepn    varchar2(2) default ' ' not null,
  ptemcdte    varchar2(8) default ' ' not null,
  ptemnewf    varchar2(1) default ' ' not null,
  ptemspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint patecma1 primary key( 
dptemadm,
dptemepn,
ptemcdte)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index patecma2 on patecmaf
(
ptemcdte,
dptemadm,
dptemepn
)
  tablespace pas_indx; 
