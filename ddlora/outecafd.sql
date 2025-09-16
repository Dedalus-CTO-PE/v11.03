create table outecaaf
(
  oteainvn    varchar2(8) default ' ' not null,
  oteadate    varchar2(8) default ' ' not null,
  oteatime    varchar2(8) default ' ' not null,
  oteabatn    varchar2(8) default ' ' not null,
  oteastat    number(2,0) default 0 not null,
  oteatype    varchar2(2) default ' ' not null,
  oteaoper    varchar2(10) default ' ' not null,
  oteatrid    varchar2(24) default ' ' not null,
  oteaeror    varchar2(4) default ' ' not null,
  oteaerot    varchar2(100) default ' ' not null,
  oteamodl    varchar2(1) default ' ' not null,
  oteaspar    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outecaa1 primary key( 
oteainvn,
oteadate,
oteatime,
oteatype,
oteamodl)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outecaa2 on outecaaf
(
oteadate,
oteatime,
oteatype,
oteainvn,
oteamodl
)
  tablespace pas_indx; 
create unique index outecaa3 on outecaaf
(
oteainvn,
oteabatn,
oteadate,
oteatime,
oteatype,
oteamodl
)
  tablespace pas_indx; 
