create table outcslaf
(
  otcssite    varchar2(6) default ' ' not null,
  otcsclin    varchar2(6) default ' ' not null,
  otcsdate    varchar2(8) default ' ' not null,
  otcsstrt    varchar2(5) default ' ' not null,
  dotcsuni    varchar2(2) default ' ' not null,
  otcscdte    varchar2(8) default ' ' not null,
  otcsctim    varchar2(8) default ' ' not null,
  otcsctyp    varchar2(6) default ' ' not null,
  otcsreas    varchar2(3) default ' ' not null,
  otcsspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint outcsla1 primary key( 
otcssite,
otcsclin,
otcsdate,
otcsstrt,
dotcsuni)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index outcsla2 on outcslaf
(
otcssite,
otcsdate,
otcsclin,
otcsstrt,
dotcsuni
)
  tablespace pas_indx; 
