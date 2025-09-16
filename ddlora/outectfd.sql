create table outectaf
(
  otechosp    varchar2(3) default ' ' not null,
  dotecflg    varchar2(2) default ' ' not null,
  otecmodl    varchar2(1) default ' ' not null,
  otecuniq    varchar2(8) default ' ' not null,
  otecinvn    varchar2(8) default ' ' not null,
  otecbatn    varchar2(8) default ' ' not null,
  otecurno    varchar2(8) default ' ' not null,
  otecpbat    varchar2(8) default ' ' not null,
  otecnbat    varchar2(8) default ' ' not null,
  otectrid    varchar2(24) default ' ' not null,
  otecamtc    number(14,2) default 0 not null,
  otecamtp    number(14,2) default 0 not null,
  otecpdat    varchar2(8) default ' ' not null,
  otecstat    varchar2(2) default ' ' not null,
  otecclid    varchar2(6) default ' ' not null,
  otecrkey    varchar2(24) default ' ' not null,
  otecokey    varchar2(36) default ' ' not null,
  otecspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outecta1 primary key( 
otechosp,
dotecflg,
otecmodl,
otecuniq,
otecinvn,
otecbatn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outecta2 on outectaf
(
otecinvn,
otecbatn,
otecmodl
)
  tablespace pas_indx; 
create unique index outecta3 on outectaf
(
otecbatn,
otecuniq,
otecinvn
)
  tablespace pas_indx; 
create unique index outecta4 on outectaf
(
otecuniq,
otecinvn,
otecbatn
)
  tablespace pas_indx; 
create unique index outecta5 on outectaf
(
otechosp,
otecurno,
otecuniq,
otecinvn,
otecbatn
)
  tablespace pas_indx; 
create unique index outecta6 on outectaf
(
otectrid,
otecinvn,
otecbatn
)
  tablespace pas_indx; 
