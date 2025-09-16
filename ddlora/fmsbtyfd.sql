create table fmsbtyaf
(
  fmbtcode    varchar2(4) default ' ' not null,
  fmbtdesc    varchar2(35) default ' ' not null,
  fmbtyear    varchar2(4) default ' ' not null,
  fmbtstat    varchar2(1) default ' ' not null,
  fmbtspar    varchar2(15) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsbtya1 primary key( 
fmbtcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
