create table priecaaf
(
  preainvn    varchar2(8) default ' ' not null,
  preadate    varchar2(8) default ' ' not null,
  preatime    varchar2(8) default ' ' not null,
  preabatn    varchar2(8) default ' ' not null,
  preastat    number(2,0) default 0 not null,
  preatype    varchar2(2) default ' ' not null,
  preaoper    varchar2(10) default ' ' not null,
  preatrid    varchar2(24) default ' ' not null,
  preaeror    varchar2(4) default ' ' not null,
  preaerot    varchar2(100) default ' ' not null,
  preaspar    varchar2(31) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint priecaa1 primary key( 
preainvn,
preadate,
preatime,
preatype)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index priecaa2 on priecaaf
(
preadate,
preatime,
preatype,
preainvn
)
  tablespace pas_indx; 
create unique index priecaa3 on priecaaf
(
preainvn,
preabatn,
preadate,
preatime,
preatype
)
  tablespace pas_indx; 
