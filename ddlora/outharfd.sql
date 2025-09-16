create table outharaf
(
  othasite    varchar2(6) default ' ' not null,
  othaclin    varchar2(6) default ' ' not null,
  othadate    varchar2(8) default ' ' not null,
  othastrt    varchar2(5) default ' ' not null,
  dothaslo    varchar2(3) default ' ' not null,
  othaattm    varchar2(5) default ' ' not null,
  othaspar    varchar2(26) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outhara1 primary key( 
othasite,
othaclin,
othadate,
othastrt,
dothaslo)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outhara2 on outharaf
(
othasite,
othaclin,
othadate,
othastrt,
othaattm,
dothaslo
)
  tablespace pas_indx; 
