create table outbokcf
(
  dobaoutn    varchar2(8) default ' ' not null,
  otbcrdat    varchar2(8) default ' ' not null,
  otbcspar    varchar2(53) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outbokc1 primary key( 
dobaoutn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outbokc2 on outbokcf
(
otbcrdat,
dobaoutn
)
  tablespace pas_indx; 
