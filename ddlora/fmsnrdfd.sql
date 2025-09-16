create table fmsnrdaf
(
  fmndcode    varchar2(3) default ' ' not null,
  fmndledg    varchar2(2) default ' ' not null,
  fmnddesc    varchar2(40) default ' ' not null,
  fmndspar    varchar2(20) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint fmsnrda1 primary key( 
fmndcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
